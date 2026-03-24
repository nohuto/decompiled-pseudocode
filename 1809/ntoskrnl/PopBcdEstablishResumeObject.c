/*
 * XREFs of PopBcdEstablishResumeObject @ 0x140711888
 * Callers:
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x140745C90 (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140712310 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x140712704 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140712E24 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A260 (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int ElementDataWithFlags; // edi
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  int v10; // eax
  char v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch]
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF

  v12 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &v12);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  v13 = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(v12, 587202563, v6, (unsigned int)v16, (__int64)&v13);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(a1, v16, &v15);
    v3 = v15;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v15, 1LL, &v13, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v14 & 0xF0000000) == 0x10000000 && (v14 & 0xF00000) == 0x200000 && (v14 & 0xFFFFF) == 4 )
        {
          v13 = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 637534211, v8, (unsigned int)&v11, (__int64)&v13);
          if ( ElementDataWithFlags < 0 || !v11 )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, v12);
          goto LABEL_10;
        }
        ElementDataWithFlags = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v15 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(a1, v12, &v15);
    v3 = v15;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( v12 )
    BcdCloseObject(v12);
  if ( ElementDataWithFlags < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementDataWithFlags;
    goto LABEL_16;
  }
  if ( !a2 )
  {
LABEL_16:
    BcdCloseObject(v3);
    return (unsigned int)ElementDataWithFlags;
  }
  *a2 = v3;
  return (unsigned int)ElementDataWithFlags;
}
