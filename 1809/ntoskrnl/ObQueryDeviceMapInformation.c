/*
 * XREFs of ObQueryDeviceMapInformation @ 0x140672700
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x140672C70 (ObpReferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  char v5; // r12
  int v6; // ebx
  __int64 v7; // r14
  __int64 ProcessServerSilo; // rax
  __int64 *ServerSiloGlobals; // rax
  __int64 *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r10d
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // eax
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
  __int64 *v34; // rax
  _OWORD v35[2]; // [rsp+20h] [rbp-48h]
  int v36; // [rsp+40h] [rbp-28h]

  v5 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v6 = a3 & 1;
  if ( a1 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
      return 3221225485LL;
  }
  v7 = ObpReferenceDeviceMap(0LL);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  }
  v10 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v10 + 15), 0LL);
  if ( v7 )
  {
    v5 = 1;
  }
  else
  {
    v34 = (__int64 *)&a1[1].ActiveProcessors.Bitmap[8];
    if ( !a1 )
      v34 = v10;
    v7 = *v34;
  }
  if ( v7 )
  {
    v12 = 0;
    v13 = v7;
    v14 = *(_QWORD *)(v7 + 8);
    if ( v14 && *(_QWORD *)(v14 + 304) )
      v13 = *(_QWORD *)(v14 + 304);
    v15 = *(_DWORD *)(v7 + 28);
    LODWORD(v35[0]) = v15;
    v16 = 1;
    v17 = 2;
    do
    {
      *((_BYTE *)v35 + v17 + 2) = *(_BYTE *)(v7 + v17 - 2 + 32);
      if ( (v15 & v16) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 2) = *(_BYTE *)(v17 - 2 + v13 + 32);
        LODWORD(v35[0]) |= v16 & *(_DWORD *)(v13 + 28);
      }
      v18 = 2 * v16;
      *((_BYTE *)v35 + v17 + 3) = *(_BYTE *)(v7 + v17 - 1 + 32);
      if ( (v15 & v18) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 3) = *(_BYTE *)(v17 - 1 + v13 + 32);
        LODWORD(v35[0]) |= v18 & *(_DWORD *)(v13 + 28);
      }
      v19 = 2 * v18;
      *((_BYTE *)v35 + v17 + 4) = *(_BYTE *)(v7 + v17 + 32);
      if ( (v15 & v19) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 4) = *(_BYTE *)(v17 + v13 + 32);
        LODWORD(v35[0]) |= v19 & *(_DWORD *)(v13 + 28);
      }
      v20 = 2 * v19;
      *((_BYTE *)v35 + v17 + 5) = *(_BYTE *)(v7 + v17 + 1 + 32);
      if ( (v15 & v20) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 5) = *(_BYTE *)(v17 + 1 + v13 + 32);
        LODWORD(v35[0]) |= v20 & *(_DWORD *)(v13 + 28);
      }
      v21 = 2 * v20;
      *((_BYTE *)v35 + v17 + 6) = *(_BYTE *)(v7 + v17 + 2 + 32);
      if ( (v15 & v21) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 6) = *(_BYTE *)(v17 + 2 + v13 + 32);
        LODWORD(v35[0]) |= v21 & *(_DWORD *)(v13 + 28);
      }
      v22 = 2 * v21;
      *((_BYTE *)v35 + v17 + 7) = *(_BYTE *)(v7 + v17 + 3 + 32);
      if ( (v15 & v22) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 7) = *(_BYTE *)(v17 + 3 + v13 + 32);
        LODWORD(v35[0]) |= v22 & *(_DWORD *)(v13 + 28);
      }
      v23 = 2 * v22;
      *((_BYTE *)v35 + v17 + 8) = *(_BYTE *)(v7 + v17 + 4 + 32);
      if ( (v15 & v23) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 8) = *(_BYTE *)(v17 + 4 + v13 + 32);
        LODWORD(v35[0]) |= v23 & *(_DWORD *)(v13 + 28);
      }
      v24 = 2 * v23;
      *((_BYTE *)v35 + v17 + 9) = *(_BYTE *)(v7 + v17 + 5 + 32);
      if ( (v15 & v24) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 9) = *(_BYTE *)(v17 + 5 + v13 + 32);
        LODWORD(v35[0]) |= v24 & *(_DWORD *)(v13 + 28);
      }
      v25 = 2 * v24;
      *((_BYTE *)v35 + v17 + 10) = *(_BYTE *)(v7 + v17 + 6 + 32);
      if ( (v15 & v25) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 10) = *(_BYTE *)(v17 + 6 + v13 + 32);
        LODWORD(v35[0]) |= v25 & *(_DWORD *)(v13 + 28);
      }
      v26 = 2 * v25;
      *((_BYTE *)v35 + v17 + 11) = *(_BYTE *)(v7 + v17 + 7 + 32);
      if ( (v15 & v26) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 11) = *(_BYTE *)(v17 + 7 + v13 + 32);
        LODWORD(v35[0]) |= v26 & *(_DWORD *)(v13 + 28);
      }
      v27 = 2 * v26;
      *((_BYTE *)v35 + v17 + 12) = *(_BYTE *)(v7 + v17 + 8 + 32);
      if ( (v15 & v27) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 12) = *(_BYTE *)(v17 + 8 + v13 + 32);
        LODWORD(v35[0]) |= v27 & *(_DWORD *)(v13 + 28);
      }
      v28 = 2 * v27;
      *((_BYTE *)v35 + v17 + 13) = *(_BYTE *)(v7 + v17 + 9 + 32);
      if ( (v15 & v28) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 13) = *(_BYTE *)(v17 + 9 + v13 + 32);
        LODWORD(v35[0]) |= v28 & *(_DWORD *)(v13 + 28);
      }
      v29 = 2 * v28;
      *((_BYTE *)v35 + v17 + 14) = *(_BYTE *)(v7 + v17 + 10 + 32);
      if ( (v15 & v29) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 14) = *(_BYTE *)(v17 + 10 + v13 + 32);
        LODWORD(v35[0]) |= v29 & *(_DWORD *)(v13 + 28);
      }
      v30 = 2 * v29;
      *((_BYTE *)v35 + v17 + 15) = *(_BYTE *)(v7 + v17 + 11 + 32);
      if ( (v15 & v30) == 0 && !v6 )
      {
        *((_BYTE *)v35 + v17 + 15) = *(_BYTE *)(v17 + 11 + v13 + 32);
        LODWORD(v35[0]) |= v30 & *(_DWORD *)(v13 + 28);
      }
      v31 = 2 * v30;
      *((_BYTE *)&v35[1] + v17) = *(_BYTE *)(v7 + v17 + 12 + 32);
      if ( (v15 & v31) == 0 && !v6 )
      {
        *((_BYTE *)&v35[1] + v17) = *(_BYTE *)(v17 + 12 + v13 + 32);
        LODWORD(v35[0]) |= v31 & *(_DWORD *)(v13 + 28);
      }
      v32 = 2 * v31;
      *((_BYTE *)&v35[1] + v17 + 1) = *(_BYTE *)(v7 + v17 + 13 + 32);
      if ( (v15 & v32) == 0 && !v6 )
      {
        *((_BYTE *)&v35[1] + v17 + 1) = *(_BYTE *)(v17 + 13 + v13 + 32);
        LODWORD(v35[0]) |= v32 & *(_DWORD *)(v13 + 28);
      }
      v16 = 2 * v32;
      v17 += 16;
    }
    while ( v17 - 2 < 0x20 );
    ExReleasePushLockEx((ULONG_PTR)(v10 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v5 == 1 )
      ObfDereferenceDeviceMap((PVOID)v7);
    *(_OWORD *)a2 = v35[0];
    *(_OWORD *)(a2 + 16) = v35[1];
    *(_DWORD *)(a2 + 32) = v36;
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)(v10 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741807;
  }
  return v12;
}
