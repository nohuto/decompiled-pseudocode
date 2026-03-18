/*
 * XREFs of CreateFontFromUserProfile @ 0x1C00546D4
 * Callers:
 *     UserSetFont @ 0x1C005466C (UserSetFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01A403C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     GreSetLFONTOwner @ 0x1C00547A8 (GreSetLFONTOwner.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00547E0 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GreMarkDeletableFont @ 0x1C0054A2C (GreMarkDeletableFont.c)
 *     GreCreateFontIndirectW @ 0x1C00CA7E0 (GreCreateFontIndirectW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

struct HLFONT__ *__fastcall CreateFontFromUserProfile(struct _UNICODE_STRING *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // rdi
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  HBRUSH FontIndirectW; // rax
  struct HLFONT__ *v10; // rbx
  _OWORD v12[5]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v13; // [rsp+70h] [rbp-39h]
  int v14; // [rsp+78h] [rbp-31h]
  struct tagLOGFONTW v15; // [rsp+80h] [rbp-29h] BYREF

  v3 = a2;
  if ( !a2 )
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v15, a1, a3);
    v3 = v12;
    v5 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v12[0] = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v6 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v12[1] = v5;
    v7 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v12[2] = v6;
    v8 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v12[3] = v7;
    *(_QWORD *)&v7 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    LODWORD(LogFontFromUserProfile) = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v12[4] = v8;
    v13 = v7;
    v14 = (int)LogFontFromUserProfile;
  }
  FontIndirectW = (HBRUSH)GreCreateFontIndirectW(v3, 128LL);
  v10 = (struct HLFONT__ *)FontIndirectW;
  if ( FontIndirectW )
  {
    if ( (unsigned int)GreExtGetObjectW(FontIndirectW, 92LL, (char *)&v15) && v15.lfHeight == *v3 )
    {
      GreSetLFONTOwner(v10, 0LL);
    }
    else
    {
      GreMarkDeletableFont(v10);
      GreDeleteObject(v10);
      return 0LL;
    }
  }
  return v10;
}
