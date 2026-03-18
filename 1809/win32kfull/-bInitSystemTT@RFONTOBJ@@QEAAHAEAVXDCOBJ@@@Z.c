/*
 * XREFs of ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028A810
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C4EB8 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000321C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00074D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bInitSystemTT(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  int v6; // ebx
  struct PFE *v7; // r8
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  _BYTE v11[32]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  v10 = 0;
  v9 = 0LL;
  v6 = *(_DWORD *)(v2 + 844);
  memset(v11, 0, sizeof(v11));
  RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v11, a2);
  v7 = *(struct PFE **)((char *)&gappfeSystemDBCS + (v6 != 0 ? 8 : 0));
  if ( !v7 )
    v7 = gappfeSystemDBCS;
  RFONTOBJ::vInit((RFONTOBJ *)&v9, a2, v7, (struct _EUDCLOGFONT *)v11);
  if ( v9 )
    *(_QWORD *)(*(_QWORD *)this + 720LL) = v9;
  LOBYTE(v3) = *(_QWORD *)(*(_QWORD *)this + 720LL) != 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  return v3;
}
