/*
 * XREFs of KiUpdateSavedSupervisorState @ 0x14057C5E0
 * Callers:
 *     KiStartSavingSupervisorState @ 0x14057C560 (KiStartSavingSupervisorState.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140175A30 (KeIpiGenericCall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 KiUpdateSavedSupervisorState()
{
  unsigned int v0; // ebp
  unsigned int v1; // ecx
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r13d
  _QWORD *v7; // r14
  PVOID v8; // rax
  PVOID *v10; // r14
  ULONG_PTR Context; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-30h]

  v0 = KeNumberProcessors_0;
  v1 = -1;
  v2 = 8LL * (unsigned int)KeNumberProcessors_0;
  if ( v2 <= 0xFFFFFFFF )
    v1 = 8 * KeNumberProcessors_0;
  v3 = v2 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v2 > 0xFFFFFFFF )
    return v3;
  v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x65687358u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v5 = 0LL;
  v6 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + KiIptSaveAreaLength + 127;
  if ( !v0 )
  {
LABEL_13:
    Context = (ULONG_PTR)PoolWithTag;
    v12 = v0;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiIpiUpdateExtendedSupervisorState, (ULONG_PTR)&Context);
    goto LABEL_14;
  }
  v7 = PoolWithTag;
  while ( *(_QWORD *)(*(_QWORD *)((char *)v7 + (char *)KiProcessorBlock - (char *)PoolWithTag) + 1728LL) )
  {
    *v7 = 0LL;
LABEL_12:
    v5 = (unsigned int)(v5 + 1);
    ++v7;
    if ( (unsigned int)v5 >= v0 )
      goto LABEL_13;
  }
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x65707553u);
  *v7 = v8;
  if ( v8 )
  {
    memset(v8, 0, v6);
    goto LABEL_12;
  }
  if ( (_DWORD)v5 )
  {
    v10 = (PVOID *)PoolWithTag;
    do
    {
      if ( *v10 )
        ExFreePoolWithTag(*v10, 0);
      ++v10;
      --v5;
    }
    while ( v5 );
  }
  v3 = -1073741670;
LABEL_14:
  ExFreePoolWithTag(PoolWithTag, 0);
  return v3;
}
