/*
 * XREFs of ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1803C2388
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800222B0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_eca460099de968d8064ce761a289067f_::operator() @ 0x1803C0378 (_lambda_eca460099de968d8064ce761a289067f_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___ @ 0x1803BEB90 (wil--ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___.c)
 */

__int64 __fastcall CDesktopPositioner::PositionViewForPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5)
{
  __int64 v7; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v8[5]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+B0h] [rbp+67h] BYREF
  int v13; // [rsp+C0h] [rbp+77h] BYREF

  v13 = a4;
  v12 = a2;
  v7 = a3;
  v11 = 0LL;
  memset(v9, 0, sizeof(v9));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a3 + 144LL))(a3, v9);
  v8[0] = a1;
  v8[1] = &v12;
  v8[2] = &a5;
  v8[3] = &v13;
  v8[4] = &v7;
  wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___((__int64)v8);
  return 0LL;
}
