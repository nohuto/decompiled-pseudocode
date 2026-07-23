/*
 * XREFs of ObpInitStackTrace @ 0x1409DD46C
 * Callers:
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x140864414 (ObpInitStackAndObjectTables.c)
 */

int ObpInitStackTrace()
{
  int v0; // ebx
  wchar_t *PoolWithTag; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int16 v4; // bx
  unsigned int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // r9d
  int *v8; // r8
  int v9; // r10d
  unsigned int v10; // r11d
  int v11; // eax
  int v12; // ecx
  int v13; // ebx

  ObpStackTraceLock = 0LL;
  ObpPushStackInfoWorkItem.Parameter = 0LL;
  ObpPushStackInfoWorkItem.List.Flink = 0LL;
  ObpPushStackInfoList = 0LL;
  v0 = 0;
  ObpPushStackInfoWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpPushStackInfoQueue;
  memset(&ObpRegTracePoolTags, 0, 0x40uLL);
  LODWORD(PoolWithTag) = (unsigned int)memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
  v2 = -1LL;
  ObpNumTracedObjects = 0;
  ObpStackSequence = 0;
  if ( ObpTraceProcessNameBuffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( ObpTraceProcessNameBuffer[v3] );
    v4 = 2 * v3;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v4 + 2LL, 0x7452624Fu);
    ObpRegTraceProcessName.Buffer = PoolWithTag;
    if ( !PoolWithTag )
      return (int)PoolWithTag;
    ObpRegTraceProcessName.Length = v4;
    ObpRegTraceProcessName.MaximumLength = v4 + 2;
    LODWORD(PoolWithTag) = (unsigned int)memmove(PoolWithTag, ObpTraceProcessNameBuffer, (unsigned __int16)(v4 + 2));
    v0 = 32;
  }
  if ( ObpTracePoolTagsBuffer[0] )
  {
    do
      ++v2;
    while ( ObpTracePoolTagsBuffer[v2] );
    v5 = v2 + 1;
    LODWORD(PoolWithTag) = -858993459 * v5;
    v6 = 0;
    v7 = v5 / 5;
    if ( v5 / 5 > 0x10 )
      v7 = 16;
    if ( v7 )
    {
      v8 = (int *)&ObpRegTracePoolTags;
      do
      {
        v9 = *v8;
        v10 = 0;
        do
        {
          v11 = 5 * v6 - v10++;
          PoolWithTag = (wchar_t *)(unsigned int)(v11 + 3);
          v12 = (v9 << 8) | (unsigned __int16)ObpTracePoolTagsBuffer[(_QWORD)PoolWithTag];
          v9 = v12;
        }
        while ( v10 < 4 );
        *v8 = v12;
        ++v6;
        ++v8;
      }
      while ( v6 < v7 );
    }
    v0 |= 0x10u;
  }
  if ( v0 )
  {
    if ( ObpTracePermanent )
      v0 |= 0x40u;
    LODWORD(PoolWithTag) = ObpInitStackAndObjectTables();
    if ( (int)PoolWithTag < 0 )
    {
      if ( (v0 & 0x10) != 0 )
        LODWORD(PoolWithTag) = (unsigned int)memset(&ObpRegTracePoolTags, 0, 0x40uLL);
      if ( (v0 & 0x20) != 0 )
      {
        ExFreePoolWithTag(ObpRegTraceProcessName.Buffer, 0x7452624Fu);
        LODWORD(PoolWithTag) = RtlInitUnicodeStringEx(&ObpRegTraceProcessName, 0LL);
      }
    }
    else
    {
      v13 = v0 | 1;
      ObpRegTraceFlags = v13;
      ObpTraceFlags = v13;
      if ( (v13 & 0x10) != 0 )
        ObpTracePoolTags = (__int64)&ObpRegTracePoolTags;
      if ( (v13 & 0x20) != 0 )
        ObpTraceProcessName = &ObpRegTraceProcessName;
    }
  }
  return (int)PoolWithTag;
}
