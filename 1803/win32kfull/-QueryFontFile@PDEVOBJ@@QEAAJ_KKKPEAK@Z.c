/*
 * XREFs of ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C00CEE64
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C023F5F8 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C023F958 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02901F0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 *     GetFontResourceInfoInternalW @ 0x1C02AB8E8 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryFontFile(
        PDEVOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, unsigned int *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+68h] [rbp-50h]
  int v13; // [rsp+70h] [rbp-48h]
  char v14; // [rsp+74h] [rbp-44h]

  v6 = -1;
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)this + 3088LL);
  if ( gpepCSRSS )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    ATTACHOBJ::Initialize(&ApcState, this);
    v6 = v9(a2, a3, a4, a5);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v6;
}
