/*
 * XREFs of ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00CE0A0
 * Callers:
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C00C6DA4 (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEAGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C00CC97C (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02898D4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290320 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::Free(PDEVOBJ *this, void *a2, __int64 a3)
{
  void (__fastcall *v5)(void *, __int64); // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+60h] [rbp-28h]
  char v9; // [rsp+64h] [rbp-24h]

  v5 = *(void (__fastcall **)(void *, __int64))(*(_QWORD *)this + 3016LL);
  if ( gpepCSRSS )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    ATTACHOBJ::Initialize(&ApcState, this);
    v5(a2, a3);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
}
