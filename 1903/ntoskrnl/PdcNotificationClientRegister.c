/*
 * XREFs of PdcNotificationClientRegister @ 0x1408D94E0
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140A08E50 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 *     PdcPortOpen @ 0x1408D916C (PdcPortOpen.c)
 *     PdcAcquireRwLockExclusive @ 0x1408D995C (PdcAcquireRwLockExclusive.c)
 *     PdcAllocate @ 0x1408D99C4 (PdcAllocate.c)
 *     PdcReleaseRwLockExclusive @ 0x1408D99E0 (PdcReleaseRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientRegister(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(), _QWORD *a4)
{
  unsigned int v6; // edi
  char *v8; // rax
  char *v9; // rbx
  ULONG_PTR v10; // r14
  __int128 v11; // xmm1
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  __int64 (__fastcall *v15)(); // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  *a4 = 0LL;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( !*(_QWORD *)(a2 + 8) )
      return (unsigned int)-1073741584;
  }
  else if ( *(_DWORD *)a2 != 2 || !*(_QWORD *)(a2 + 16) )
  {
    return (unsigned int)-1073741584;
  }
  v8 = (char *)PdcAllocate(a1, 128LL, 1315136592LL);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x80uLL);
    *(_DWORD *)v9 = 1315136592;
    *((_DWORD *)v9 + 8) = 103;
    v10 = (ULONG_PTR)(v9 + 8);
    v9[88] = 1;
    *(_OWORD *)(v9 + 56) = *(_OWORD *)a2;
    v11 = *(_OWORD *)(a2 + 16);
    *((_QWORD *)v9 + 6) = PopDirectedDripsState;
    v15 = PdcpNotificationClientCallback;
    *(_OWORD *)(v9 + 72) = v11;
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    PdcAcquireRwLockExclusive(v9 + 8);
    v6 = PdcPortOpen(0x67u, 0, (__int64)v9, (__int64 *)&v15, v12, v13, v14, (_QWORD *)v9 + 5);
    if ( !v6 )
    {
      *a4 = v9;
      v9 = 0LL;
    }
    PdcReleaseRwLockExclusive(v10);
    if ( v9 )
      RtlpSysVolFree(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
