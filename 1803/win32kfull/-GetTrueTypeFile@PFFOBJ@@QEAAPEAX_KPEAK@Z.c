/*
 * XREFs of ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C0290550
 * Callers:
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C0278330 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02783B0 (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0081670 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::GetTrueTypeFile(PFFOBJ *this, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v6)(__int64, unsigned int *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-78h] BYREF

  v3 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3080LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ(&ApcState, (unsigned __int64)this);
    *a3 = 0;
    if ( v6 )
      v3 = v6(a2, a3);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v3;
}
