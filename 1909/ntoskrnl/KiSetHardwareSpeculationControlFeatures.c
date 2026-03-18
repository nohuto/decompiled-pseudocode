/*
 * XREFs of KiSetHardwareSpeculationControlFeatures @ 0x14018BE20
 * Callers:
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x14018BF94 (KiDetectHardwareSpecControlFeatures.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiSetHardwareSpeculationControlFeatures(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // t1
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]
  char v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  result = KiDetectHardwareSpecControlFeatures(a1, a2, &v7, &v9);
  v4 = v7;
  if ( (v7 & 0x20) != 0 )
    *(_BYTE *)(a1 + 249) |= 4u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v6 = *(_WORD *)&KeNumberProcessorsGroup0[2];
    v5 = v6;
    if ( v6 != v4 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, v5, v4, 0LL);
  }
  else
  {
    LOWORD(KiSpeculationFeatures) = 0;
    LODWORD(KiSpeculationFeatures) = v4 | (unsigned int)KiSpeculationFeatures;
    result = v8;
    *(_WORD *)&KeNumberProcessorsGroup0[2] = v4;
    *((_QWORD *)&KiSpeculationFeatures + 1) = v8;
    KiSsbdBit = v8;
    DWORD1(KiSpeculationFeatures) = HIDWORD(v7);
    KiSsbdMsr = HIDWORD(v7);
  }
  if ( v9 )
    KiMicrocodeTrackerEnabled = 1;
  return result;
}
