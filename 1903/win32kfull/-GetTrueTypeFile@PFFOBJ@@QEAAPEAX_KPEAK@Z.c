/*
 * XREFs of ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1C02BADD4
 * Callers:
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C02A1990 (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02A1A10 (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00537CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0053D3C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PFFOBJ::GetTrueTypeFile(PFFOBJ *this, __int64 a2, unsigned int *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, unsigned int *); // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 3088LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v8, this);
  *a3 = 0;
  if ( v6 )
    v5 = v6(a2, a3);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v8);
  return v5;
}
