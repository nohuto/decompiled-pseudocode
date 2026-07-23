/*
 * XREFs of LocalGetStringForControl @ 0x1408A73F0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     wcsncpy_s @ 0x14019BFB0 (wcsncpy_s.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForControl(unsigned __int16 a1, int a2, wchar_t **a3)
{
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  unsigned int i; // esi
  unsigned int v9; // ecx
  wchar_t *v10; // rax
  wchar_t Src[256]; // [rsp+20h] [rbp-238h] BYREF

  v6 = 0;
  if ( !a3 )
    return 87LL;
  *a3 = 0LL;
  v7 = &unk_140354D5C;
  for ( i = 0; i < 6; ++i )
  {
    if ( (a2 & v7[1]) == a2 )
    {
      v9 = *(v7 - 1);
      if ( v9 + v6 >= 0x100 )
        return 87LL;
      if ( (a1 & *v7) != 0 )
      {
        wcsncpy_s(&Src[v6], 256LL - v6, *(const wchar_t **)(v7 - 3), v9);
        v6 += *(v7 - 1);
      }
    }
    v7 += 6;
  }
  if ( 2 * (unsigned __int64)v6 >= 0x200 )
    _report_rangecheckfailure();
  Src[v6] = 0;
  if ( !v6 )
    return 0LL;
  v10 = (wchar_t *)SddlpAlloc(2LL * (v6 + 1));
  *a3 = v10;
  if ( v10 )
  {
    wcscpy_s(v10, v6 + 1, Src);
    return 0LL;
  }
  return 8LL;
}
