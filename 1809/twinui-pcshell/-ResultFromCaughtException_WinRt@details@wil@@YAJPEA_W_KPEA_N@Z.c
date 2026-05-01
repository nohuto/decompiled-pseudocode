/*
 * XREFs of ?ResultFromCaughtException_WinRt@details@wil@@YAJPEA_W_KPEA_N@Z @ 0x18007A520
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

// Absent C++ exception handlers: #catch=2
void __fastcall __noreturn wil::details::ResultFromCaughtException_WinRt(
        wil::details *this,
        wchar_t *a2,
        __int64 a3,
        bool *a4)
{
  unsigned __int64 v4; // r9
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  _QWORD *v10; // rdx
  _QWORD v11[5]; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  const std::bad_alloc *v14; // [rsp+38h] [rbp-30h] BYREF
  const wil::ResultException *v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  const std::bad_alloc *v17; // [rsp+50h] [rbp-18h] BYREF
  std::exception *v18; // [rsp+58h] [rbp-10h] BYREF
  const struct wil::ResultException *v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+8h]
  const struct wil::ResultException *v21; // [rsp+70h] [rbp+8h]
  __int64 v22; // [rsp+70h] [rbp+8h]
  const struct std::exception *v23; // [rsp+70h] [rbp+8h]
  wchar_t *v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+78h] [rbp+10h]
  wchar_t *v26; // [rsp+78h] [rbp+10h]
  __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned __int16 *v28; // [rsp+78h] [rbp+10h]
  _BYTE *v29; // [rsp+80h] [rbp+18h]
  _BYTE *v30; // [rsp+80h] [rbp+18h]

  v11[4] = -2LL;
  if ( !wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v15 )
    {
      wil::details::MaybeGetExceptionString(v15, v21, v26, v8);
      return;
    }
    catch ( Platform::Exception *v16 )
    {
      *v30 = 1;
      wil::details::MaybeGetExceptionString(v16, v22, v27);
      return;
    }
    catch ( const std::bad_alloc *v17 )
    {
      __eh34_catch_handler_absent(2, 2, wil::details::ResultFromCaughtException_WinRt_::_1_::catch_6);
      return;
    }
    catch ( std::exception *v18 )
    {
      wil::details::MaybeGetExceptionString(v18, v23, v28, v9);
      return;
    }
    catch ( ... )
    {
      return;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v12 )
  {
    wil::details::MaybeGetExceptionString(v12, v19, v24, v4);
    return;
  }
  catch ( Platform::Exception *v13 )
  {
    *v29 = 1;
    wil::details::MaybeGetExceptionString(v13, v20, v25);
    return;
  }
  catch ( const std::bad_alloc *v14 )
  {
    __eh34_catch_handler_absent(0, 2, wil::details::ResultFromCaughtException_WinRt_::_1_::catch_2);
    return;
  }
  catch ( ... )
  {
    v10 = v11;
    v5 = v10;
    v7 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v10[14], (unsigned __int16 *)v10[15], v6);
    *((_DWORD *)v5 + 34) = v7;
    if ( v7 < 0 )
      return;
    return;
  }
}
