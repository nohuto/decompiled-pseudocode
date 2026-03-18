/*
 * XREFs of ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C009290C
 * Callers:
 *     _lambda_cf148b6edee2a97f1c16d0ea33321dda_::operator() @ 0x1C00913A8 (_lambda_cf148b6edee2a97f1c16d0ea33321dda_--operator().c)
 *     GreMakeFontDir @ 0x1C029CE1C (GreMakeFontDir.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02A3CC0 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::LoadFontFile(
        PDEVOBJ *this,
        unsigned int a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned int *a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7,
        unsigned int a8)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, void **, unsigned int *, struct tagDESIGNVECTOR *, unsigned int, unsigned int))(*(_QWORD *)this + 3048LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
