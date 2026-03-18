/*
 * XREFs of MiMapDummyPages @ 0x140A1FD20
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiComputeHash64 @ 0x140146310 (MiComputeHash64.c)
 */

ULONG_PTR MiMapDummyPages()
{
  ULONG_PTR result; // rax
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  int v3; // r8d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  int v7; // r8d
  char v8; // r11
  bool v9; // zf
  bool v10; // zf

  result = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)2);
  v1 = result;
  if ( !result )
    return result;
  MiMakeValidPte(result, qword_140466560, 536870913);
  if ( MiPteInShadowRange(v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v3 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_3;
      v9 = (v8 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_3;
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)v1 = v2;
  if ( v3 )
    MiWritePteShadow(v1);
  qword_140466568 = (__int64)(v1 << 25) >> 16;
  v4 = MiComputeHash64((__int64)(v1 << 25) >> 16);
  v5 = v1 + 8;
  qword_140466578 = v4;
  if ( !MiPteInShadowRange(v5) )
    goto LABEL_6;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v7 = 1;
    if ( !HIBYTE(word_1404658EC) )
    {
      v10 = (v6 & 1) == 0;
      goto LABEL_22;
    }
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
  {
    v10 = (v6 & 1) == 0;
LABEL_22:
    if ( !v10 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *(_QWORD *)v5 = v6;
  if ( v7 )
    MiWritePteShadow(v5);
  qword_140466570 = (__int64)(v5 << 25) >> 16;
  qword_140466580 = MiComputeHash64(qword_140466570);
  return 1LL;
}
