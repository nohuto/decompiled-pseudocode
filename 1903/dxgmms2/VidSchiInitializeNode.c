/*
 * XREFs of VidSchiInitializeNode @ 0x1C0086430
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0085700 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C00242F4 (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 */

__int64 __fastcall VidSchiInitializeNode(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  PVOID PoolWithTag; // rax
  __int64 v5; // rdi
  SIZE_T v6; // rdx
  PVOID v7; // rax
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  unsigned int m; // esi
  unsigned int n; // esi
  UINT v14; // eax
  ADAPTER_RENDER *v15; // rcx
  _DXGKARG_SETUPPRIORITYBANDS v16; // [rsp+20h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(v1 + 208);
  *(_DWORD *)(a1 + 192) = v3;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 112 * v3, 0x31616956u);
  v5 = 0LL;
  *(_QWORD *)(a1 + 184) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 112LL * *(unsigned int *)(a1 + 192));
  v6 = 88LL * *(unsigned int *)(v1 + 208);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(v1 + 208);
  v7 = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x31616956u);
  *(_QWORD *)(a1 + 200) = v7;
  if ( !v7 )
    return 3221225495LL;
  memset(v7, 0, 88LL * *(unsigned int *)(a1 + 208));
  if ( (*(_DWORD *)(a1 + 12) & 2) == 0 )
    return 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 2880));
  for ( i = 0;
        i < 0x40;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 2880), (PSLIST_ENTRY)(48LL * (int)i++ + a1 + 2896)) )
  {
    ;
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 5968));
  for ( j = 0; j < 2; ExpInterlockedPushEntrySList(
                        (PSLIST_HEADER)(a1 + 5968),
                        (PSLIST_ENTRY)(48LL * (int)j++ + a1 + 5984)) )
    ;
  InitializeSListHead((PSLIST_HEADER)(a1 + 6080));
  for ( k = 0; k < 2; ExpInterlockedPushEntrySList(
                        (PSLIST_HEADER)(a1 + 6080),
                        (PSLIST_ENTRY)(a1 + 48 * ((int)k++ + 127LL))) )
    ;
  InitializeSListHead((PSLIST_HEADER)(a1 + 6192));
  for ( m = 0;
        m < 0x10;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6192), (PSLIST_ENTRY)(112LL * (int)m++ + a1 + 6208)) )
  {
    ;
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 8000));
  for ( n = 0;
        n < 0x40;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 8000), (PSLIST_ENTRY)(a1 + 48 * ((int)n++ + 167LL))) )
  {
    ;
  }
  memset(&v16, 0, sizeof(v16));
  do
  {
    v16.processQuantumForBand[v5] = 50000LL;
    v16.processGracePeriodForBand[v5++] = 20000LL;
  }
  while ( v5 < 2 );
  v16.processQuantumForBand[3] = 20000LL;
  v16.gracePeriodForBand[2] = 10000LL;
  v16.processQuantumForBand[2] = 10000LL;
  v14 = *(_DWORD *)(v1 + 192);
  v16.processGracePeriodForBand[3] = 50000LL;
  v15 = *(ADAPTER_RENDER **)(v1 + 8);
  v16.targetNormalBandPercentage = v14;
  v16.processGracePeriodForBand[2] = 30000LL;
  result = ADAPTER_RENDER::DdiSetupPriorityBands(v15, &v16);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741822 )
    return 0LL;
  return result;
}
