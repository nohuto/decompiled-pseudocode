/*
 * XREFs of ?GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803FF400
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180032CA0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180395684 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall CPlaceModeButtonAcc::GetPropertyValue(CPlaceModeButtonAcc *this, int a2, struct tagVARIANT *a3)
{
  unsigned int inited; // edi
  __int64 v6; // r8
  const unsigned __int16 *v7; // rcx
  const unsigned __int16 *v8; // rcx
  unsigned int v10; // eax
  double v11; // xmm1_8
  __m128i v12; // xmm0
  int v13; // eax
  DOUBLE prgn; // [rsp+20h] [rbp-38h] BYREF
  double v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  double v18; // [rsp+38h] [rbp-20h]

  inited = 0;
  a3->vt = 0;
  if ( !*((_BYTE *)this + 40) )
    return inited;
  switch ( a2 )
  {
    case 30001:
      v10 = *((_DWORD *)this + 14) - *((_DWORD *)this + 12);
      v11 = (double)*((int *)this + 13);
      prgn = (double)*((int *)this + 12);
      v12 = _mm_cvtsi32_si128(v10);
      v13 = *((_DWORD *)this + 15) - *((_DWORD *)this + 13);
      v16 = v11;
      v17 = *(_OWORD *)&_mm_cvtepi32_pd(v12);
      v18 = (double)v13;
      return (unsigned int)InitVariantFromDoubleArray(&prgn, 4u, a3);
    case 30003:
      a3->lVal = 50000;
      a3->vt = 3;
      return inited;
    case 30005:
      v8 = &szAgent;
      if ( *((_QWORD *)this + 9) )
        v8 = (const unsigned __int16 *)*((_QWORD *)this + 9);
      return (unsigned int)InitVariantFromString(v8, a3);
  }
  if ( a2 > 30008 )
  {
    if ( a2 <= 30010 )
    {
LABEL_11:
      a3->vt = 11;
      a3->iVal = -1;
      return inited;
    }
    switch ( a2 )
    {
      case 30011:
        v6 = (unsigned int)(*((_DWORD *)this + 11) + 1);
        prgn = 0.0;
        v16 = 0.0;
        v17 = 0LL;
        inited = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                   (__int64)&prgn,
                   L"PlaceModeButton %d",
                   v6);
        if ( (inited & 0x80000000) == 0 )
        {
          v7 = &szAgent;
          if ( prgn != 0.0 )
            v7 = *(const unsigned __int16 **)&prgn;
          inited = InitVariantFromString(v7, a3);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&prgn);
        break;
      case 30016:
        goto LABEL_11;
      case 30017:
        a3->iVal = 0;
        a3->vt = 11;
        return inited;
      case 30031:
        goto LABEL_11;
    }
  }
  return inited;
}
