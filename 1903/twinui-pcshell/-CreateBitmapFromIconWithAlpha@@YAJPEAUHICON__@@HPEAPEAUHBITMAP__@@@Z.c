/*
 * XREFs of ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x180346FE0
 * Callers:
 *     ?ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z @ 0x180346E90 (-ConvertIconToBitmap@CIconLoadingFunctions@@UEAAJPEAUHICON__@@AEBUtagSIZE@@PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x180347990 (-_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z.c)
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x180347B40 (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 *     CreateBitmapFromIcon @ 0x180347C9C (CreateBitmapFromIcon.c)
 */

__int64 __fastcall CreateBitmapFromIconWithAlpha(HICON hicon, unsigned int a2, HBITMAP *a3)
{
  signed int Error; // ebx
  HBITMAP hbmColor; // rcx
  char v8; // al
  signed int HaveAlpha; // eax
  int v10; // eax
  int v11; // ecx
  HBITMAP v12; // rax
  signed int BitmapFromIcon; // eax
  ICONINFO piconinfo; // [rsp+30h] [rbp-40h] BYREF
  _BYTE pv[4]; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  unsigned int v19; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+A4h] [rbp+34h]

  *a3 = 0LL;
  if ( GetIconInfo(hicon, &piconinfo) || (Error = ResultFromKnownLastError(), Error >= 0) )
  {
    hbmColor = piconinfo.hbmColor;
    v8 = 0;
    LOBYTE(v19) = 0;
    if ( piconinfo.hbmColor )
    {
      HaveAlpha = _DoesBitmapHaveAlpha(piconinfo.hbmColor, (bool *)&v19);
      hbmColor = piconinfo.hbmColor;
      Error = HaveAlpha;
      v8 = v19;
    }
    else
    {
      Error = 0;
    }
    if ( Error < 0 )
      goto LABEL_21;
    if ( !v8 )
    {
      v19 = a2;
      v20 = a2;
      BitmapFromIcon = CreateBitmapFromIcon(hicon, (__int64)a3);
      goto LABEL_19;
    }
    if ( GetObjectW(hbmColor, 32, pv) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
      {
        v10 = 0;
        v11 = 0;
        goto LABEL_13;
      }
    }
    v10 = v17;
    v11 = v18;
LABEL_13:
    if ( Error < 0 )
    {
LABEL_20:
      hbmColor = piconinfo.hbmColor;
LABEL_21:
      if ( hbmColor )
        DeleteObject(hbmColor);
      goto LABEL_23;
    }
    if ( v10 == v11 && a2 == v10 )
    {
      v12 = piconinfo.hbmColor;
      piconinfo.hbmColor = 0LL;
      *a3 = v12;
LABEL_23:
      DeleteObject(piconinfo.hbmMask);
      return (unsigned int)Error;
    }
    BitmapFromIcon = _ScaleBitmap(piconinfo.hbmColor, a2, a3);
LABEL_19:
    Error = BitmapFromIcon;
    goto LABEL_20;
  }
  return (unsigned int)Error;
}
