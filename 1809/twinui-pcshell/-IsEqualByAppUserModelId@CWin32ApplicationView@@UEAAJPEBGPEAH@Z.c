/*
 * XREFs of ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x1800302A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::IsEqualByAppUserModelId(
        CWin32ApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  int v6; // ebx
  int v7; // r9d
  const WCHAR *v8; // r10
  __int64 v9; // rax
  LPCWCH lpString1; // [rsp+38h] [rbp-20h] BYREF
  int cchCount1[2]; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  *a3 = 0;
  lpString1 = 0LL;
  *(_QWORD *)cchCount1 = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  *(_QWORD *)cchCount1 = -1LL;
  v13 = -1LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, LPCWCH *))(**((_QWORD **)this + 27) + 32LL))(
         *((_QWORD *)this + 27),
         &lpString1);
  if ( v6 >= 0 )
  {
    v7 = -(a2 != 0LL);
    v8 = &word_180411F30;
    if ( !a2 )
      a2 = &word_180411F30;
    LODWORD(v9) = cchCount1[0];
    if ( *(_QWORD *)cchCount1 == -1LL )
    {
      if ( lpString1 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( lpString1[v9] );
      }
      else
      {
        LODWORD(v9) = 0;
      }
    }
    if ( lpString1 )
      v8 = lpString1;
    *a3 = CompareStringOrdinal(v8, v9, a2, v7, 1) == 2;
    v6 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  return (unsigned int)v6;
}
