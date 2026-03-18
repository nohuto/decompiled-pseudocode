/*
 * XREFs of ObQueryDeviceMapInformation @ 0x1405D1260
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400EBE80 (PsGetCurrentServerSiloGlobals.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpReferenceDeviceMap @ 0x1405D10D0 (ObpReferenceDeviceMap.c)
 *     ObfDereferenceDeviceMap @ 0x1405D16F0 (ObfDereferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  char v6; // r12
  int v7; // ebx
  __int64 v8; // r14
  __int64 ProcessServerSilo; // rax
  __int64 *ServerSiloGlobals; // rax
  __int64 *v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r10d
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 *v35; // rax
  _OWORD v36[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v36, 0, 0x28uLL);
  v6 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v7 = a3 & 1;
  if ( a1 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
      return 3221225485LL;
  }
  v8 = ObpReferenceDeviceMap(0);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  }
  v11 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v11 + 15), 0LL);
  if ( v8 )
  {
    v6 = 1;
  }
  else
  {
    v35 = (__int64 *)&a1[1].ActiveProcessors.Bitmap[7];
    if ( !a1 )
      v35 = v11;
    v8 = *v35;
  }
  if ( v8 )
  {
    v13 = 0;
    v14 = v8;
    v15 = *(_QWORD *)(v8 + 8);
    if ( v15 && *(_QWORD *)(v15 + 304) )
      v14 = *(_QWORD *)(v15 + 304);
    v16 = *(_DWORD *)(v8 + 28);
    LODWORD(v36[0]) = v16;
    v17 = 1;
    v18 = 2;
    do
    {
      *((_BYTE *)v36 + v18 + 2) = *(_BYTE *)(v8 + v18 - 2 + 32);
      if ( (v16 & v17) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 2) = *(_BYTE *)(v18 - 2 + v14 + 32);
        LODWORD(v36[0]) |= v17 & *(_DWORD *)(v14 + 28);
      }
      v19 = 2 * v17;
      *((_BYTE *)v36 + v18 + 3) = *(_BYTE *)(v8 + v18 - 1 + 32);
      if ( (v16 & v19) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 3) = *(_BYTE *)(v18 - 1 + v14 + 32);
        LODWORD(v36[0]) |= v19 & *(_DWORD *)(v14 + 28);
      }
      v20 = 2 * v19;
      *((_BYTE *)v36 + v18 + 4) = *(_BYTE *)(v8 + v18 + 32);
      if ( (v16 & v20) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 4) = *(_BYTE *)(v18 + v14 + 32);
        LODWORD(v36[0]) |= v20 & *(_DWORD *)(v14 + 28);
      }
      v21 = 2 * v20;
      *((_BYTE *)v36 + v18 + 5) = *(_BYTE *)(v8 + v18 + 1 + 32);
      if ( (v16 & v21) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 5) = *(_BYTE *)(v18 + 1 + v14 + 32);
        LODWORD(v36[0]) |= v21 & *(_DWORD *)(v14 + 28);
      }
      v22 = 2 * v21;
      *((_BYTE *)v36 + v18 + 6) = *(_BYTE *)(v8 + v18 + 2 + 32);
      if ( (v16 & v22) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 6) = *(_BYTE *)(v18 + 2 + v14 + 32);
        LODWORD(v36[0]) |= v22 & *(_DWORD *)(v14 + 28);
      }
      v23 = 2 * v22;
      *((_BYTE *)v36 + v18 + 7) = *(_BYTE *)(v8 + v18 + 3 + 32);
      if ( (v16 & v23) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 7) = *(_BYTE *)(v18 + 3 + v14 + 32);
        LODWORD(v36[0]) |= v23 & *(_DWORD *)(v14 + 28);
      }
      v24 = 2 * v23;
      *((_BYTE *)v36 + v18 + 8) = *(_BYTE *)(v8 + v18 + 4 + 32);
      if ( (v16 & v24) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 8) = *(_BYTE *)(v18 + 4 + v14 + 32);
        LODWORD(v36[0]) |= v24 & *(_DWORD *)(v14 + 28);
      }
      v25 = 2 * v24;
      *((_BYTE *)v36 + v18 + 9) = *(_BYTE *)(v8 + v18 + 5 + 32);
      if ( (v16 & v25) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 9) = *(_BYTE *)(v18 + 5 + v14 + 32);
        LODWORD(v36[0]) |= v25 & *(_DWORD *)(v14 + 28);
      }
      v26 = 2 * v25;
      *((_BYTE *)v36 + v18 + 10) = *(_BYTE *)(v8 + v18 + 6 + 32);
      if ( (v16 & v26) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 10) = *(_BYTE *)(v18 + 6 + v14 + 32);
        LODWORD(v36[0]) |= v26 & *(_DWORD *)(v14 + 28);
      }
      v27 = 2 * v26;
      *((_BYTE *)v36 + v18 + 11) = *(_BYTE *)(v8 + v18 + 7 + 32);
      if ( (v16 & v27) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 11) = *(_BYTE *)(v18 + 7 + v14 + 32);
        LODWORD(v36[0]) |= v27 & *(_DWORD *)(v14 + 28);
      }
      v28 = 2 * v27;
      *((_BYTE *)v36 + v18 + 12) = *(_BYTE *)(v8 + v18 + 8 + 32);
      if ( (v16 & v28) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 12) = *(_BYTE *)(v18 + 8 + v14 + 32);
        LODWORD(v36[0]) |= v28 & *(_DWORD *)(v14 + 28);
      }
      v29 = 2 * v28;
      *((_BYTE *)v36 + v18 + 13) = *(_BYTE *)(v8 + v18 + 9 + 32);
      if ( (v16 & v29) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 13) = *(_BYTE *)(v18 + 9 + v14 + 32);
        LODWORD(v36[0]) |= v29 & *(_DWORD *)(v14 + 28);
      }
      v30 = 2 * v29;
      *((_BYTE *)v36 + v18 + 14) = *(_BYTE *)(v8 + v18 + 10 + 32);
      if ( (v16 & v30) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 14) = *(_BYTE *)(v18 + 10 + v14 + 32);
        LODWORD(v36[0]) |= v30 & *(_DWORD *)(v14 + 28);
      }
      v31 = 2 * v30;
      *((_BYTE *)v36 + v18 + 15) = *(_BYTE *)(v8 + v18 + 11 + 32);
      if ( (v16 & v31) == 0 && !v7 )
      {
        *((_BYTE *)v36 + v18 + 15) = *(_BYTE *)(v18 + 11 + v14 + 32);
        LODWORD(v36[0]) |= v31 & *(_DWORD *)(v14 + 28);
      }
      v32 = 2 * v31;
      *((_BYTE *)&v36[1] + v18) = *(_BYTE *)(v8 + v18 + 12 + 32);
      if ( (v16 & v32) == 0 && !v7 )
      {
        *((_BYTE *)&v36[1] + v18) = *(_BYTE *)(v18 + 12 + v14 + 32);
        LODWORD(v36[0]) |= v32 & *(_DWORD *)(v14 + 28);
      }
      v33 = 2 * v32;
      *((_BYTE *)&v36[1] + v18 + 1) = *(_BYTE *)(v8 + v18 + 13 + 32);
      if ( (v16 & v33) == 0 && !v7 )
      {
        *((_BYTE *)&v36[1] + v18 + 1) = *(_BYTE *)(v18 + 13 + v14 + 32);
        LODWORD(v36[0]) |= v33 & *(_DWORD *)(v14 + 28);
      }
      v17 = 2 * v33;
      v18 += 16;
    }
    while ( v18 - 2 < 0x20 );
    ExReleasePushLockEx((ULONG_PTR)(v11 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v6 == 1 )
      ObfDereferenceDeviceMap((PVOID)v8);
    *(_OWORD *)a2 = v36[0];
    *(_OWORD *)(a2 + 16) = v36[1];
    *(_DWORD *)(a2 + 32) = v36[2];
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)(v11 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741807;
  }
  return v13;
}
