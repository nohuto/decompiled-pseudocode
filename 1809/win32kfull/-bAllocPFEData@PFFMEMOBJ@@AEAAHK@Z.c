/*
 * XREFs of ?bAllocPFEData@PFFMEMOBJ@@AEAAHK@Z @ 0x1C00CAD38
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00CA1C0 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C0162480 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 */

__int64 __fastcall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  unsigned int v5; // ecx

  v3 = 0;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = gcfsCharSetTable + 140;
  *(_DWORD *)(*(_QWORD *)this + 216LL) = (*(_DWORD *)(*(_QWORD *)this + 216LL) + 7) & 0xFFFFFFF8;
  v4 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 216LL);
  if ( a2 > 0xFFFFFFFF / v5 )
    *(_QWORD *)(v4 + 224) = 0LL;
  else
    *(_QWORD *)(*(_QWORD *)this + 224LL) = PALLOCMEM2(a2 * v5, 1701212231LL, 1);
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 224LL) != 0LL;
  return v3;
}
