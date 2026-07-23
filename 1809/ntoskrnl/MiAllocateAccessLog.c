/*
 * XREFs of MiAllocateAccessLog @ 0x140114880
 * Callers:
 *     MiLogPageAccess @ 0x14006BDA0 (MiLogPageAccess.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     MiInitializePageAccessLogging @ 0x140114994 (MiInitializePageAccessLogging.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID **__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  SIZE_T v4; // rbp
  PVOID **v5; // rdi
  PVOID *v6; // rsi
  PVOID *PoolWithTag; // rdx
  PVOID **v8; // rdx
  PVOID **result; // rax

  v2 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  if ( (unsigned int)MiSufficientAvailablePages(v2, 0x420uLL)
    && *(_QWORD *)(v2 + 7360) >= v3
    && (unsigned __int64)(MiState[0] - qword_140439B18) >= 0x800 )
  {
    v4 = 4096LL;
  }
  else
  {
    v4 = 512LL;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v5 = (PVOID **)&unk_14043C7F0;
  else
    v5 = (PVOID **)(a1 + 240);
  v6 = *v5;
  if ( *v5 && (v4 == 512 || *v6 && *(_QWORD *)*v6) )
  {
    MiEmptyPageAccessLog(*v5);
    v6 = 0LL;
    *v5 = 0LL;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
  if ( PoolWithTag )
  {
LABEL_9:
    *v5 = PoolWithTag;
    MiInitializePageAccessLogging(a1, PoolWithTag, v4);
    result = v8;
    *v8 = v6;
  }
  else
  {
    while ( 1 )
    {
      if ( *v5 )
      {
        MiEmptyPageAccessLog(*v5);
        v6 = 0LL;
        *v5 = 0LL;
      }
      v4 >>= 1;
      if ( v4 < 0x200 )
        return 0LL;
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
      if ( PoolWithTag )
        goto LABEL_9;
    }
  }
  return result;
}
