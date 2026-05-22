/*
 * XREFs of wil::init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___ @ 0x1800B13E0
 * Callers:
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800B1500 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 wil::init_once_nothrow__lambda_15c18fd34087e847390382b1ce5907ca___()
{
  const char *v0; // r9
  _QWORD *v2; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  fPending = 0;
  if ( !InitOnceBeginInitialize(&InitOnce, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x1C6, (__int64)"wil", v0);
  if ( fPending )
  {
    qword_1801E1378 = 0LL;
    v2 = RefCountedObject::operator new(0x10uLL);
    if ( !v2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
        (const char *)0x8007000ELL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraytelemetry.cpp",
        (const char *)0x8007000ELL);
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x1CB, (__int64)"wil", (const char *)0x8007000ELL);
      InitOnceComplete(&InitOnce, 4u, 0LL);
      return 2147942414LL;
    }
    v2[1] = 0LL;
    *v2 = &RefCountedObject::`vftable';
    *v2 = &LampArrayTelemetry::`vftable';
    *((_DWORD *)v2 + 2) = 1;
    qword_1801E1378 = (RefCountedObject *)v2;
    InitOnceComplete(&InitOnce, 0, 0LL);
  }
  return 0LL;
}
