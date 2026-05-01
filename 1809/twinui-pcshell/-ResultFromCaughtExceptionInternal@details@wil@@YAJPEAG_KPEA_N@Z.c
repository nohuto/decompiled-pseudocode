/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x1800810C0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        bool *a4)
{
  const wil::ResultException *v5; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r9
  const wil::ResultException *v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r9
  _QWORD *v11; // rbp
  unsigned __int64 v12; // r8
  int v13; // eax
  unsigned __int64 v14; // r9
  _QWORD *v15; // rdx
  _QWORD v16[5]; // [rsp+0h] [rbp-58h] BYREF
  const wil::ResultException *v17; // [rsp+28h] [rbp-30h] BYREF
  const std::bad_alloc *v18; // [rsp+30h] [rbp-28h] BYREF
  const wil::ResultException *v19; // [rsp+38h] [rbp-20h] BYREF
  const std::bad_alloc *v20; // [rsp+40h] [rbp-18h] BYREF
  std::exception *v21; // [rsp+48h] [rbp-10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+8h]
  const struct wil::ResultException *v23; // [rsp+60h] [rbp+8h]
  const struct std::exception *v24; // [rsp+60h] [rbp+8h]
  const struct wil::ResultException *v25; // [rsp+60h] [rbp+8h]
  const struct std::exception *v26; // [rsp+60h] [rbp+8h]
  const struct std::exception *v27; // [rsp+60h] [rbp+8h]
  unsigned __int16 *v28; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v29; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v30; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v31; // [rsp+68h] [rbp+10h]
  unsigned __int16 *v32; // [rsp+68h] [rbp+10h]
  _BYTE *v33; // [rsp+70h] [rbp+18h]
  _BYTE *v34; // [rsp+70h] [rbp+18h]

  v16[4] = -2LL;
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
      catch ( const wil::ResultException *v17 )
      {
        *v33 = 1;
        v5 = v17;
        wil::details::MaybeGetExceptionString(v17, v23, v28, v6);
        return *((unsigned int *)v5 + 7);
      }
      catch ( const std::bad_alloc *v18 )
      {
        wil::details::MaybeGetExceptionString(v18, v24, v29, v7);
        return 2147942414LL;
      }
      catch ( ... )
      {
        v15 = v16;
        v11 = v15;
        v13 = wil::details::RecognizeCaughtExceptionFromCallback(
                (wil::details *)v15[12],
                (unsigned __int16 *)v15[13],
                v12);
        *((_DWORD *)v11 + 24) = v13;
        if ( v13 < 0 )
          return (unsigned int)v22;
        return 0LL;
      }
    }
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v19 )
    {
      *v34 = 1;
      v8 = v19;
      wil::details::MaybeGetExceptionString(v19, v25, v30, v9);
      return *((unsigned int *)v8 + 7);
    }
    catch ( const std::bad_alloc *v20 )
    {
      wil::details::MaybeGetExceptionString(v20, v26, v31, v10);
      return 2147942414LL;
    }
    catch ( std::exception *v21 )
    {
      wil::details::MaybeGetExceptionString(v21, v27, v32, v14);
      return 2147942974LL;
    }
    catch ( ... )
    {
      return 0LL;
    }
  }
  return g_pfnResultFromCaughtException_WinRt(this, a2, a3, 0LL);
}
