/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x18005D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800D3EF7 (memcpy_0.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        __int64 a1,
        _QWORD *a2,
        HWND a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  size_t v8; // rdx
  _QWORD *v9; // rsi
  void *v11; // rsi
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  WCHAR pString[264]; // [rsp+40h] [rbp-248h] BYREF

  a2[2] = 0LL;
  a2[3] = 7LL;
  *(_WORD *)a2 = 0;
  if ( InternalGetWindowText(a3, pString, 261) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( pString[v4] );
    v5 = a2[3];
    if ( v4 <= v5 )
    {
      v11 = a2;
      if ( v5 >= 8 )
        v11 = (void *)*a2;
      a2[2] = v4;
      memmove_0(v11, pString, 2 * v4);
      *((_WORD *)v11 + v4) = 0;
    }
    else
    {
      v6 = 0x7FFFFFFFFFFFFFFELL;
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( (v4 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v7 = v5 >> 1;
        if ( v5 <= 0x7FFFFFFFFFFFFFFELL - (v5 >> 1) )
        {
          v6 = v7 + v5;
          if ( (v4 | 7) >= v7 + v5 )
            v6 = v4 | 7;
        }
      }
      v8 = 2 * (v6 + 1);
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        v8 = -1LL;
      if ( v8 >= 0x1000 )
      {
        v12 = v8 + 39;
        if ( v8 + 39 < v8 )
          v12 = -1LL;
        v13 = operator new(v12);
        if ( !v13 )
        {
          _o__invalid_parameter_noinfo_noreturn(v14);
          JUMPOUT(0x18010C064LL);
        }
        v9 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v9 - 1) = v13;
      }
      else if ( v8 )
      {
        v9 = operator new(v8);
      }
      else
      {
        v9 = 0LL;
      }
      a2[2] = v4;
      a2[3] = v6;
      memcpy_0(v9, pString, 2 * v4);
      *((_WORD *)v9 + v4) = 0;
      if ( v5 >= 8 )
        std::_Deallocate<16,0>(*a2, 2 * v5 + 2);
      *a2 = v9;
    }
  }
  return a2;
}
