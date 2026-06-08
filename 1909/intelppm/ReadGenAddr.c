/*
 * XREFs of ReadGenAddr @ 0x1C00082E0
 * Callers:
 *     MWaitIdleCheck @ 0x1C00079F0 (MWaitIdleCheck.c)
 *     ReadGenAddrHidden @ 0x1C0008338 (ReadGenAddrHidden.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00083A4 (ReadGenAddrMaybeHidden.c)
 *     GetCpcDifferentialFeedback @ 0x1C0008BF0 (GetCpcDifferentialFeedback.c)
 *     C2Idle @ 0x1C000D3D0 (C2Idle.c)
 *     C3Idle @ 0x1C000D490 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000D570 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1C000D5F0 (IoHaltC1Idle.c)
 *     SetPerfStateIO @ 0x1C000E630 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00083CC (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw(a1);
  v3 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(a1 + 2);
    if ( v5 )
      v3 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(a1 + 1);
    if ( v6 < 0x40u )
      v3 &= (1LL << v6) - 1;
  }
  return v3;
}
