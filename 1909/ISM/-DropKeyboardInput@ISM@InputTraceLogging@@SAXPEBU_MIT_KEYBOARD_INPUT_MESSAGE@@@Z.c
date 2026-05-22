/*
 * XREFs of ?DropKeyboardInput@ISM@InputTraceLogging@@SAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BC86C
 * Callers:
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800BDCA4 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180014BAC (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall InputTraceLogging::ISM::DropKeyboardInput(const struct _MIT_KEYBOARD_INPUT_MESSAGE *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  UINT32 cData; // r9d
  __int16 v5; // ax
  BOOL v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  BOOL *v8; // [rsp+60h] [rbp-38h]
  UINT32 v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v2 = (const struct _TlgProvider_t *)wil::details::static_lazy<InputTraceLogging>::get(
                                        (__int64)a1,
                                        lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v2 > 4u )
  {
    if ( TlgKeywordOn(v2, 0x200uLL) )
    {
      v5 = *((_WORD *)a1 + 135);
      v10 = 0;
      v9 = cData;
      v13 = 0;
      v6 = (v5 & 1) == 0;
      v8 = &v6;
      v11 = a1;
      v12 = 8;
      TlgWrite(v3, &unk_18019DB30, 0LL, 0LL, cData, &pData);
    }
  }
}
