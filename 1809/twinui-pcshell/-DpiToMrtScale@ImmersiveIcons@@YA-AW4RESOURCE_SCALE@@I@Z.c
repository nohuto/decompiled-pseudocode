/*
 * XREFs of ?DpiToMrtScale@ImmersiveIcons@@YA?AW4RESOURCE_SCALE@@I@Z @ 0x1803A98B8
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1803A9DBC (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

__int64 __fastcall ImmersiveIcons::DpiToMrtScale(unsigned int a1)
{
  _QWORD *v2; // rcx
  _DWORD v4[32]; // [rsp+0h] [rbp-39h] BYREF
  __int64 v5; // [rsp+80h] [rbp+47h] BYREF

  v4[3] = 0;
  v4[31] = 15;
  v4[0] = 76;
  v2 = v4;
  v4[1] = 3;
  v4[2] = 96;
  v4[4] = 115;
  v4[5] = 7;
  v4[6] = 120;
  v4[7] = 8;
  v4[8] = 134;
  v4[9] = 1;
  v4[10] = 144;
  v4[11] = 4;
  v4[12] = 153;
  v4[13] = 5;
  v4[14] = 172;
  v4[15] = 2;
  v4[16] = 192;
  v4[17] = 9;
  v4[18] = 211;
  v4[19] = 10;
  v4[20] = 216;
  v4[21] = 6;
  v4[22] = 230;
  v4[23] = 11;
  v4[24] = 240;
  v4[25] = 12;
  v4[26] = 288;
  v4[27] = 13;
  v4[28] = 384;
  v4[29] = 14;
  v4[30] = 480;
  while ( (unsigned int)*v2 < a1 )
  {
    if ( ++v2 == &v5 )
      return 15LL;
  }
  return HIDWORD(*v2);
}
