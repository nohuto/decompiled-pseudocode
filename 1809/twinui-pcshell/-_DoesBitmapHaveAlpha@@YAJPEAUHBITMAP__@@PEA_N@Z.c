/*
 * XREFs of ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x1802E6FC0
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1802E65F8 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005C57C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall _DoesBitmapHaveAlpha(HBITMAP hbm, bool *a2)
{
  signed int Error; // ebx
  unsigned __int64 v5; // rcx
  UINT v6; // edi
  HDC DC; // rax
  char *lpvBits; // rsi
  HDC v9; // r14
  bool v10; // al
  signed int v11; // edx
  _BYTE *v12; // rcx
  LPVOID v14; // [rsp+40h] [rbp-29h] BYREF
  _BYTE pv[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v16; // [rsp+4Ch] [rbp-1Dh]
  UINT cLines; // [rsp+50h] [rbp-19h]
  __int16 v18; // [rsp+58h] [rbp-11h]
  __int16 v19; // [rsp+5Ah] [rbp-Fh]
  struct tagBITMAPINFO bmi; // [rsp+68h] [rbp-1h] BYREF

  *a2 = 0;
  if ( GetObjectW(hbm, 32, pv) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  if ( v18 == 1 && v19 == 32 )
  {
    v5 = cLines * (unsigned __int64)v16;
    v6 = -1;
    if ( v5 <= 0xFFFFFFFF )
      v6 = cLines * v16;
    Error = v5 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v5 <= 0xFFFFFFFF )
    {
      v14 = 0LL;
      if ( is_mul_ok(v6, 4uLL) )
      {
        Error = CTCoAllocPolicy::Alloc((void *)v6, 1, 4LL * v6, &v14);
        if ( Error >= 0 )
        {
          DC = GetDC(0LL);
          lpvBits = (char *)v14;
          v9 = DC;
          if ( DC )
          {
            memset_0(&bmi, 0, sizeof(bmi));
            bmi.bmiHeader.biCompression = 0;
            bmi.bmiHeader.biWidth = v16;
            bmi.bmiHeader.biSize = 40;
            bmi.bmiHeader.biHeight = cLines;
            *(_DWORD *)&bmi.bmiHeader.biPlanes = 2097153;
            if ( GetDIBits(v9, hbm, 0, cLines, lpvBits, &bmi, 0) )
            {
              Error = 0;
              v10 = 0;
              v11 = 0;
              if ( (int)v6 > 0 )
              {
                v12 = lpvBits + 3;
                do
                {
                  if ( v10 )
                    break;
                  v10 = *v12 != 0;
                  ++v11;
                  v12 += 4;
                }
                while ( v11 < (int)v6 );
              }
              *a2 = v10;
            }
            else
            {
              Error = -2147467259;
            }
            ReleaseDC(0LL, v9);
          }
          else
          {
            Error = -2147467259;
          }
          CoTaskMemFree(lpvBits);
        }
      }
      else
      {
        return (unsigned int)-2147024362;
      }
    }
  }
  return (unsigned int)Error;
}
