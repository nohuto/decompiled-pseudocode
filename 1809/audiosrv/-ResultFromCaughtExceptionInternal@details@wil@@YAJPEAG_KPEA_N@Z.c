/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x1800ADB00
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18006888B (_CxxThrowException_0.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        bool *a4)
{
  const wil::ResultException *v5; // rbx
  _QWORD *v6; // rbp
  int v7; // eax
  const wil::ResultException *v8; // rbx
  _QWORD *v9; // rdx
  _QWORD v10[5]; // [rsp+0h] [rbp-58h] BYREF
  const wil::ResultException *v11; // [rsp+28h] [rbp-30h] BYREF
  const std::bad_alloc *v12; // [rsp+30h] [rbp-28h] BYREF
  const wil::ResultException *v13; // [rsp+38h] [rbp-20h] BYREF
  const std::bad_alloc *v14; // [rsp+40h] [rbp-18h] BYREF
  std::exception *v15; // [rsp+48h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h]
  const struct wil::ResultException *v17; // [rsp+60h] [rbp+8h]
  const struct std::exception *v18; // [rsp+60h] [rbp+8h]
  const struct wil::ResultException *v19; // [rsp+60h] [rbp+8h]
  const struct std::exception *v20; // [rsp+60h] [rbp+8h]
  const struct std::exception *v21; // [rsp+60h] [rbp+8h]
  unsigned __int16 *v22; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v23; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v24; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v25; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v26; // [rsp+68h] [rbp+10h]
  _BYTE *v27; // [rsp+70h] [rbp+18h]
  _BYTE *v28; // [rsp+70h] [rbp+18h]

  v10[4] = -2LL;
  if ( this )
    *(_WORD *)this = 0;
  *a3 = 0;
  if ( !g_pfnResultFromCaughtException_WinRt )
  {
    if ( wil::g_pfnResultFromCaughtException )
    {
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v11 )
      {
        *v27 = 1;
        v5 = v11;
        wil::details::MaybeGetExceptionString(v11, v17, v22);
        return *((unsigned int *)v5 + 7);
      }
      catch ( const std::bad_alloc *v12 )
      {
        wil::details::MaybeGetExceptionString(v12, v18, v23);
        return 2147942414LL;
      }
      catch ( ... )
      {
        v9 = v10;
        v6 = v9;
        v7 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v9[12], (unsigned __int16 *)v9[13]);
        *((_DWORD *)v6 + 24) = v7;
        if ( v7 < 0 )
          return (unsigned int)v16;
        return 0LL;
      }
    }
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v13 )
    {
      *v28 = 1;
      v8 = v13;
      wil::details::MaybeGetExceptionString(v13, v19, v24);
      return *((unsigned int *)v8 + 7);
    }
    catch ( const std::bad_alloc *v14 )
    {
      wil::details::MaybeGetExceptionString(v14, v20, v25);
      return 2147942414LL;
    }
    catch ( std::exception *v15 )
    {
      wil::details::MaybeGetExceptionString(v15, v21, v26);
      return 2147942974LL;
    }
    catch ( ... )
    {
      return 0LL;
    }
  }
  return g_pfnResultFromCaughtException_WinRt(this, a2, a3, 0LL);
}
