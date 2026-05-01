/*
 * XREFs of ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x18033DD88
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180027F40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_a4c092b385a4fac3af45bae97c388695_::operator() @ 0x18033BE28 (_lambda_a4c092b385a4fac3af45bae97c388695_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___ @ 0x18033A93C (wil--ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___.c)
 */

__int64 __fastcall CDesktopPositioner::PositionViewForPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5)
{
  __int64 v8; // [rsp+20h] [rbp-31h] BYREF
  _QWORD v9[5]; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v10[16]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v11; // [rsp+60h] [rbp+Fh]
  __m128i si128; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+27h]
  __int64 v14; // [rsp+B8h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+77h] BYREF

  v15 = a4;
  v14 = a2;
  v8 = a3;
  memset_0(v10, 0, 0x30uLL);
  v11 = 0LL;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 128LL))(a3, v10);
  v9[0] = a1;
  v9[1] = &v14;
  v9[2] = &a5;
  v9[3] = &v15;
  v9[4] = &v8;
  wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___((__int64)v9);
  return 0LL;
}
