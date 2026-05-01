/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEA_W_K@Z @ 0x1802B3524
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$3 @ 0x1802B36D4 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$3.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

int __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, wchar_t *a2)
{
  int result; // eax
  _QWORD *v4; // rbp
  int v5; // eax
  int v6; // ecx
  _QWORD *v7; // rdx
  _QWORD v8[5]; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+50h] [rbp+18h]

  v8[4] = -2LL;
  result = wil::g_pfnResultFromCaughtException();
  if ( result >= 0 )
    goto LABEL_14;
  while ( this )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( std::exception *v9 )
    {
      v7 = v8;
      v4 = v7;
      wil::details::MaybeGetExceptionString((wil::details *)v7[5], (wchar_t *)v7[8], (wchar_t *)v7[9]);
      v5 = *((_DWORD *)v4 + 20);
      v6 = -2147024322;
      if ( v5 >= 0 )
        v5 = v6;
      *((_DWORD *)v4 + 20) = v5;
      return v10;
    }
    catch ( ... )
    {
      return v10;
    }
  }
  return result;
}
