/*
 * XREFs of SetDesktopPattern @ 0x1C00E29E4
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1C00E2B54 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x1C011BBA0 (RecolorDeskPattern.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C0211740 (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 SolidBrush; // rdi
  HBRUSH v6; // rcx
  _WORD *v8; // r9
  __int64 v9; // r10
  wchar_t v10; // ax
  __int16 v11; // r8
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // cx
  HBITMAP Bitmap; // rax
  _QWORD v15[2]; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v17[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset(v17, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &word_1C02D83A8, v17, 260, 0) )
      return v4;
    a2 = v17;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v17[0] && _wcsicmp(a2, Str2) )
  {
    v8 = v15;
    v15[0] = 0LL;
    v15[1] = 0LL;
    v9 = 8LL;
    v10 = *a2;
    do
    {
      v11 = 0;
      v12 = v10;
      if ( v10 )
      {
        v13 = v10;
        do
        {
          if ( v13 >= 0x30u )
          {
            v12 = v13;
            if ( v13 <= 0x39u )
              break;
          }
          v10 = *++a2;
          v13 = *a2;
          v12 = *a2;
        }
        while ( *a2 );
      }
      if ( v12 >= 0x30u )
      {
        do
        {
          if ( v12 > 0x39u )
            break;
          ++a2;
          v11 = v12 + 2 * (5 * v11 - 24);
          v10 = *a2;
          v12 = *a2;
        }
        while ( *a2 >= 0x30u );
      }
      *v8++ = v11;
      --v9;
    }
    while ( v9 );
    Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL, 1LL, v15);
    if ( Bitmap )
    {
      SetGlobalDesktopPattern(Bitmap);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(gpsi + 4572LL));
    if ( SolidBrush )
    {
      v6 = *(HBRUSH *)(gpsi + 4704LL);
      if ( v6 )
      {
        GreMarkDeletableBrush(v6);
        GreDeleteObject(*(_QWORD *)(gpsi + 4704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(gpsi + 4704LL) = SolidBrush;
    }
  }
  return v4;
}
