/*
 * XREFs of PopLoggingInformation @ 0x14071E104
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14069D910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopLoggingInformation(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  int v6; // ebp
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  char *PoolWithTag; // rax
  _QWORD *v12; // rsi
  __int64 v13; // r14
  size_t v14; // rbx

  v2 = PowerStateDisableReasonListHead;
  v3 = 0;
  v6 = 0;
  v7 = 4;
  while ( (__int64 *)v2 != &PowerStateDisableReasonListHead )
  {
    ++v6;
    v8 = v7 + 16;
    if ( v7 + 16 < v7 )
      return (unsigned int)-1073741675;
    v7 = v8 + *(_DWORD *)(v2 + 28);
    if ( v7 < v8 )
      return (unsigned int)-1073741675;
    v2 = *(_QWORD *)v2;
  }
  v9 = v7 + 16;
  if ( v6 )
    v9 = v7;
  v10 = v9;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x66756263u);
  if ( PoolWithTag )
  {
    *a2 = v10;
    v12 = PoolWithTag + 4;
    *a1 = PoolWithTag;
    *(_DWORD *)PoolWithTag = v10;
    if ( v6 )
    {
      v13 = PowerStateDisableReasonListHead;
      while ( (__int64 *)v13 != &PowerStateDisableReasonListHead && v6 )
      {
        v14 = (unsigned int)(*(_DWORD *)(v13 + 28) + 16);
        memmove(v12, (const void *)(v13 + 16), v14);
        v13 = *(_QWORD *)v13;
        v12 = (_QWORD *)((char *)v12 + v14);
        --v6;
      }
    }
    else
    {
      *v12 = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 3) = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
