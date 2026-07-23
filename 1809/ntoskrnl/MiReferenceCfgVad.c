/*
 * XREFs of MiReferenceCfgVad @ 0x14067BCA4
 * Callers:
 *     MiCfgInitializeProcess @ 0x140678F10 (MiCfgInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // rsi
  _KPROCESS *Process; // r14
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v13; // rcx
  __int16 v14; // cx
  int v15; // [rsp+50h] [rbp+18h] BYREF

  v6 = 32LL * a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)&Process[1].IdealGlobalNode;
  v9 = MiObtainReferencedVadEx(a2, 2, &v15);
  v10 = *(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32);
  *(_QWORD *)(v6 + v8 + 408) = v9;
  *(_QWORD *)(v6 + v8 + 392) = a2;
  v11 = 0;
  *(_DWORD *)(v6 + v8 + 416) = 0;
  *(_QWORD *)(v6 + v8 + 400) = ((v10 + 1) << 12) - a2;
  if ( a3 == 1 )
  {
    v13 = Process[1].ActiveProcessors.Bitmap[7];
    if ( !v13 || (v14 = *(_WORD *)(v13 + 8)) == 0 )
      v14 = -31132;
    LOBYTE(v11) = v14 == 452;
    *(_DWORD *)(v6 + v8 + 416) = v11;
  }
  return MiUnlockVadShared(a1, v9);
}
