/*
 * XREFs of bEnableFontDriver @ 0x1C00EE0F0
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00ED380 (UmfdSessionInitialize.c)
 * Callees:
 *     ?FntCacheHDEV@@YAXPEAVPDEV@@K@Z @ 0x1C00EE1F0 (-FntCacheHDEV@@YAXPEAVPDEV@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall bEnableFontDriver(__int64 a1, unsigned int a2)
{
  struct _LDEV *Internal; // rax
  struct PDEV *v4; // rcx
  __int64 result; // rax
  struct PDEV *v6; // [rsp+90h] [rbp+18h] BYREF

  Internal = (struct _LDEV *)ldevLoadInternal(a1, 6LL);
  if ( Internal )
  {
    PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v6, Internal, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
    v4 = v6;
    if ( v6 )
    {
      if ( a2 == 1 )
      {
        gppdevTrueType = v6;
      }
      else
      {
        if ( a2 != 4 )
        {
          if ( a2 == 5 )
          {
            qword_1C032FD38 = v6;
            gufiLocalType1Rasterizer = 0x100000002LL;
          }
          goto LABEL_7;
        }
        gufiLocalType1Rasterizer = 0x100000002LL;
        gppdevATMFD = v6;
      }
      v4 = v6;
LABEL_7:
      FntCacheHDEV(v4, a2);
      result = 1LL;
      *((_DWORD *)v6 + 10) |= 0x2000u;
      return result;
    }
  }
  return 0LL;
}
