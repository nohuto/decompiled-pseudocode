/*
 * XREFs of ReadGenAddr @ 0x1C0003898
 * Callers:
 *     SetPerfStateIO @ 0x1C0002E90 (SetPerfStateIO.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00039F8 (ReadGenAddrMaybeHidden.c)
 *     ReadGenAddrHidden @ 0x1C0003A5C (ReadGenAddrHidden.c)
 *     GetCpcDifferentialFeedback @ 0x1C0004760 (GetCpcDifferentialFeedback.c)
 *     IoHaltC1Idle @ 0x1C0004ED0 (IoHaltC1Idle.c)
 *     C2Idle @ 0x1C0004F20 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0004FE0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0005060 (C3Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0003668 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v4; // cl
  unsigned __int8 v5; // cl

  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw(a1);
  v2 = IoMemRaw;
  if ( IoMemRaw )
  {
    v4 = *(_BYTE *)(a1 + 2);
    if ( v4 )
      v2 = IoMemRaw >> v4;
    v5 = *(_BYTE *)(a1 + 1);
    if ( v5 < 0x40u )
      v2 &= (1LL << v5) - 1;
  }
  return v2;
}
