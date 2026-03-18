/*
 * XREFs of GreOffsetRgn @ 0x1C0015600
 * Callers:
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C003C510 (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C007B360 (UserSetDCVisRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C009B42C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     NtGdiOffsetRgn @ 0x1C00A0C30 (NtGdiOffsetRgn.c)
 *     EngOffsetRgn @ 0x1C0131680 (EngOffsetRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0015978 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00159E0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0026BE0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreOffsetRgn(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  struct _POINTL v10; // [rsp+68h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v8, a1, 0);
  v10.x = a2;
  v5 = 0;
  v6 = v8[0];
  v10.y = a3;
  if ( v8[0] )
  {
    if ( (unsigned int)RGNOBJ::bOffset((RGNOBJ *)v8, &v10) )
      v5 = RGNOBJ::iComplexity((RGNOBJ *)v8);
    v6 = v8[0];
  }
  if ( !v9 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)v8);
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
  return v5;
}
