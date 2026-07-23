/*
 * XREFs of KiSetHardwareSpeculationControlFeatures @ 0x14017D720
 * Callers:
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x14017D8C4 (KiDetectHardwareSpecControlFeatures.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall KiSetHardwareSpeculationControlFeatures(__int64 a1, __int64 a2)
{
  unsigned int v3; // r8d
  char result; // al
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]
  char v7; // [rsp+3Ch] [rbp-1Ch]
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+60h] [rbp+8h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, a2, &BugCheckParameter3, &v9);
  v3 = BugCheckParameter3;
  if ( (BugCheckParameter3 & 0x20) != 0 )
    *(_BYTE *)(a1 + 1762) |= 4u;
  if ( *(_DWORD *)(a1 + 36) )
  {
    result = KiCpu0HardwareFlags;
    if ( (unsigned int)KiCpu0HardwareFlags != (unsigned __int64)v3 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned int)KiCpu0HardwareFlags, v3, 0LL);
  }
  else
  {
    LODWORD(KiCpu0HardwareFlags) = v3;
    result = v7;
    *(_QWORD *)&KiSpeculationFeatures = v3 | KiSpeculationFeatures & 0xFFFFFFFF00000000uLL;
    qword_140542338 = v8;
    KiSsbdBit = v8;
    DWORD2(KiSpeculationFeatures) = v6;
    BYTE12(KiSpeculationFeatures) = v7;
    KiSsbdMsr = v6;
  }
  if ( v9 )
    KiMicrocodeTrackerEnabled = 1;
  if ( (*(_QWORD *)&v3 & 0x400000LL) != 0 )
  {
    result = 0x80;
    *(_WORD *)(a1 + 1760) |= 0x80u;
  }
  return result;
}
