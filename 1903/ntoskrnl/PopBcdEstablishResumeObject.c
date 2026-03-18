/*
 * XREFs of PopBcdEstablishResumeObject @ 0x14073B9C0
 * Callers:
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     BcdGetElementData @ 0x14073BD08 (BcdGetElementData.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073C630 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14073CA40 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int ElementData; // edi
  int v6; // eax
  int v8; // eax
  _WORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF

  v9[0] = 0;
  v13 = 0LL;
  v3 = 0LL;
  v14[0] = 0LL;
  v12 = 0LL;
  v14[1] = 0LL;
  v11 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &v11);
  if ( ElementData < 0 )
    goto LABEL_10;
  v10 = 16;
  ElementData = BcdGetElementData(v11, 587202563LL, v14, &v10);
  if ( ElementData >= 0 )
  {
    v6 = BcdOpenObject(a1, v14, &v12);
    v3 = v12;
    ElementData = v6;
    if ( v6 >= 0 )
    {
      ElementData = BcdQueryObject(v12, 1LL, &v13, 0LL);
      if ( ElementData >= 0 )
      {
        if ( (HIDWORD(v13) & 0xF0000000) == 0x10000000
          && (HIDWORD(v13) & 0xF00000) == 0x200000
          && (HIDWORD(v13) & 0xFFFFF) == 4 )
        {
          v10 = 2;
          ElementData = BcdGetElementData(v3, 637534211LL, v9, &v10);
          if ( ElementData < 0 || !LOBYTE(v9[0]) )
            ElementData = PopBcdSetDefaultResumeObjectElements(v3, v11);
          goto LABEL_10;
        }
        ElementData = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v12 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v8 = PopBcdRegenerateResumeObject(a1, v11, &v12);
    v3 = v12;
    ElementData = v8;
  }
  if ( ElementData >= 0 )
    ElementData = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( v11 )
    BcdCloseObject(v11);
  if ( ElementData < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementData;
    goto LABEL_16;
  }
  if ( !a2 )
  {
LABEL_16:
    BcdCloseObject(v3);
    return (unsigned int)ElementData;
  }
  *a2 = v3;
  return (unsigned int)ElementData;
}
