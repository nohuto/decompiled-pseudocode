/*
 * XREFs of MiReferenceCfgVad @ 0x1406BE04C
 * Callers:
 *     MiCfgInitializeProcess @ 0x14067980C (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x1406921D8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MiUnlockVadShared @ 0x140114C44 (MiUnlockVadShared.c)
 */

__int64 __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rsi
  _KPROCESS *Process; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v13; // rcx
  __int16 v14; // cx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v6 = 32LL * a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)&Process[1].IdealNode[14];
  v9 = MiObtainReferencedVadEx(a2, 2, &v15);
  v10 = *(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32);
  *(_QWORD *)(v6 + v8 + 456) = v9;
  *(_QWORD *)(v6 + v8 + 440) = a2;
  v11 = 0;
  *(_DWORD *)(v6 + v8 + 464) = 0;
  *(_QWORD *)(v6 + v8 + 448) = ((v10 + 1) << 12) - a2;
  if ( a3 == 1 )
  {
    v13 = Process[1].ActiveProcessors.Bitmap[6];
    if ( !v13 || (v14 = *(_WORD *)(v13 + 8)) == 0 )
      v14 = -31132;
    LOBYTE(v11) = v14 == 452;
    *(_DWORD *)(v6 + v8 + 464) = v11;
  }
  return MiUnlockVadShared(a1, v9);
}
