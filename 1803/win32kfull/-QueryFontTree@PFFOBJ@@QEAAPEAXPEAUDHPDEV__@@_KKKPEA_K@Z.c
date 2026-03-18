/*
 * XREFs of ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C008094C
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z @ 0x1C0119BD8 (-cKernPairs@PFEOBJ@@QEAAKPEAPEAU_FD_KERNINGPAIR@@@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02898D4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290320 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::QueryFontTree(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v10)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-98h] BYREF

  v6 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct DHPDEV__ *, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)this + 88LL)
                                                                                                 + 2896LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, this);
    v6 = v10(a2, a3, a4, a5, a6);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v6;
}
