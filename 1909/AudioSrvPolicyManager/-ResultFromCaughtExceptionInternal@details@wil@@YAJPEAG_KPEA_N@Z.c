/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YAJPEAG_KPEA_N@Z @ 0x180002600
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180035987 (_CxxThrowException_0.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(
        wil::details *this,
        unsigned __int16 *a2,
        _BYTE *a3,
        bool *a4)
{
  _BYTE *v5; // rbp
  wil *v6; // rcx
  unsigned __int16 *v7; // rdx
  __int64 v8; // rbx
  const struct wil::FailureInfo *v9; // r9
  _BYTE *v10; // rbp
  wchar_t *v11; // rbx
  __int64 v12; // rax
  _BYTE *v13; // rbp
  int v14; // eax
  _BYTE *v15; // rbp
  wil *v16; // rcx
  unsigned __int16 *v17; // rdx
  __int64 v18; // rbx
  const struct wil::FailureInfo *v19; // r9
  _BYTE *v20; // rbp
  wchar_t *v21; // rbx
  __int64 v22; // rax
  _BYTE *v23; // rbp
  wchar_t *v24; // rbx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  _BYTE *v27; // rdx
  _BYTE *v28; // rdx
  _BYTE *v29; // rdx
  _BYTE *v30; // rdx
  _BYTE *v31; // rdx
  _BYTE v32[32]; // [rsp+0h] [rbp-78h] BYREF
  wil::details *v33; // [rsp+20h] [rbp-58h]
  unsigned __int16 *v34; // [rsp+28h] [rbp-50h]
  _BYTE *v35; // [rsp+30h] [rbp-48h]
  const wil::ResultException *v36; // [rsp+38h] [rbp-40h] BYREF
  const wil::ResultException *v37[2]; // [rsp+40h] [rbp-38h] BYREF
  const std::bad_alloc *v38; // [rsp+50h] [rbp-28h] BYREF
  const std::bad_alloc *v39; // [rsp+58h] [rbp-20h] BYREF
  std::exception *v40; // [rsp+60h] [rbp-18h] BYREF

  v37[1] = (const wil::ResultException *)-2LL;
  v33 = this;
  v34 = a2;
  v35 = a3;
  if ( this )
    *(_WORD *)this = 0;
  *a3 = 0;
  if ( !g_pfnResultFromCaughtException_WinRt )
  {
    if ( !wil::g_pfnResultFromCaughtException )
    {
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v37 )
      {
        v29 = v32;
        v15 = v29;
        **((_BYTE **)v29 + 6) = 1;
        v16 = (wil *)*((_QWORD *)v29 + 4);
        if ( v16 && (v17 = (unsigned __int16 *)*((_QWORD *)v15 + 5)) != 0LL )
        {
          v18 = *((_QWORD *)v15 + 8);
          wil::GetFailureLogString(v16, v17, v18 + 24, v19);
        }
        else
        {
          v18 = *((_QWORD *)v15 + 8);
        }
        *((_DWORD *)v15 + 8) = *(_DWORD *)(v18 + 28);
        return (unsigned int)v33;
      }
      catch ( const std::bad_alloc *v39 )
      {
        v30 = v32;
        v20 = v30;
        v21 = (wchar_t *)*((_QWORD *)v30 + 4);
        if ( v21 )
        {
          v22 = (*(__int64 (**)(void))(**((_QWORD **)v20 + 11) + 8LL))();
          StringCchPrintfW(v21, *((_QWORD *)v20 + 5), L"std::exception: %hs", v22);
        }
        return 2147942414LL;
      }
      catch ( std::exception *v40 )
      {
        v31 = v32;
        v23 = v31;
        v24 = (wchar_t *)*((_QWORD *)v31 + 4);
        if ( v24 )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v23 + 12) + 8LL))(*((_QWORD *)v23 + 12));
          StringCchPrintfW(v24, *((_QWORD *)v23 + 5), L"std::exception: %hs", v25);
        }
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v36 )
    {
      v26 = v32;
      v5 = v26;
      **((_BYTE **)v26 + 6) = 1;
      v6 = (wil *)*((_QWORD *)v26 + 4);
      if ( v6 && (v7 = (unsigned __int16 *)*((_QWORD *)v5 + 5)) != 0LL )
      {
        v8 = *((_QWORD *)v5 + 7);
        wil::GetFailureLogString(v6, v7, v8 + 24, v9);
      }
      else
      {
        v8 = *((_QWORD *)v5 + 7);
      }
      *((_DWORD *)v5 + 8) = *(_DWORD *)(v8 + 28);
      return (unsigned int)v33;
    }
    catch ( const std::bad_alloc *v38 )
    {
      v27 = v32;
      v10 = v27;
      v11 = (wchar_t *)*((_QWORD *)v27 + 4);
      if ( v11 )
      {
        v12 = (*(__int64 (**)(void))(**((_QWORD **)v10 + 10) + 8LL))();
        StringCchPrintfW(v11, *((_QWORD *)v10 + 5), L"std::exception: %hs", v12);
      }
      return 2147942414LL;
    }
    catch ( ... )
    {
      v28 = v32;
      v13 = v28;
      v14 = wil::details::RecognizeCaughtExceptionFromCallback(
              *((wil::details **)v28 + 4),
              *((unsigned __int16 **)v28 + 5));
      *((_DWORD *)v13 + 8) = v14;
      if ( v14 < 0 )
        return (unsigned int)v33;
      return 0LL;
    }
  }
  return g_pfnResultFromCaughtException_WinRt(this, a2, a3, 0LL);
}
