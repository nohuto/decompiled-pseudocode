/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x180048E80
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180048D5C (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(int a1, int *a2)
{
  unsigned int v2; // ebx
  int v4; // r8d
  int v5; // eax
  int v6; // edx
  bool v7; // zf
  int v8; // eax
  int v9; // r8d
  void *v11; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v4 = 2;
  if ( a1 > 20 )
  {
    if ( a1 > 27 )
    {
      v5 = 28;
      if ( a1 == 69 )
        goto LABEL_7;
    }
    else if ( a1 != 27 && a1 != 21 && a1 != 22 )
    {
      if ( a1 == 23 )
      {
        v5 = 11;
        goto LABEL_7;
      }
      if ( a1 == 26 )
      {
        v5 = 2;
        goto LABEL_7;
      }
    }
  }
  else
  {
    if ( a1 == 20 )
    {
      v5 = 24;
      goto LABEL_7;
    }
    if ( a1 <= 13 )
    {
      if ( a1 < 12 && a1 >= 8 )
      {
        if ( a1 == 8 )
        {
          v5 = 61;
          goto LABEL_7;
        }
        if ( a1 != 9 && a1 != 10 )
        {
          v5 = 49;
          goto LABEL_7;
        }
      }
    }
    else
    {
      if ( a1 == 14 )
      {
        v5 = 88;
        goto LABEL_7;
      }
      if ( (unsigned int)(a1 - 15) <= 1 )
      {
        v5 = 87;
        goto LABEL_7;
      }
    }
  }
  v5 = 0;
LABEL_7:
  *a2 = v5;
  if ( !v5 )
  {
    v2 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292288, 0x328u, v11);
    return v2;
  }
  v6 = 1;
  if ( a1 > 21 )
  {
    if ( a1 > 23 && (a1 <= 24 || a1 > 26) )
      goto LABEL_25;
    goto LABEL_26;
  }
  if ( a1 >= 17 || a1 <= 0 )
    goto LABEL_25;
  if ( a1 <= 4 )
  {
LABEL_26:
    v7 = a1 == 16;
    goto LABEL_14;
  }
  if ( a1 <= 14 )
  {
LABEL_25:
    v8 = 3;
    goto LABEL_16;
  }
  v7 = a1 == 16;
LABEL_14:
  if ( v7 || a1 == 23 || a1 == 26 )
    v8 = 1;
  else
    v8 = 2;
LABEL_16:
  a2[1] = v8;
  if ( a1 > 23 )
  {
    if ( a1 <= 27 )
      goto LABEL_21;
    if ( (unsigned int)(a1 - 68) <= 1 )
      goto LABEL_20;
LABEL_50:
    v2 = -2003292344;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292344, 0x33Cu, v11);
    return v2;
  }
  if ( a1 >= 20 )
  {
LABEL_20:
    v4 = 1;
    goto LABEL_21;
  }
  if ( a1 <= 0 )
    goto LABEL_50;
  if ( a1 <= 16 )
    goto LABEL_20;
LABEL_21:
  v9 = v4 - 1;
  if ( !v9 || v9 != 1 )
    v6 = 0;
  a2[2] = v6;
  return v2;
}
