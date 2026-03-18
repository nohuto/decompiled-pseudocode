/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x1408B60EC
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14073D8C0 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14073E530 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdQueryObject @ 0x14073E940 (BcdQueryObject.c)
 *     PopBcdReadElement @ 0x14073EAA4 (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 *     BcdSetElementData @ 0x14092E6F4 (BcdSetElementData.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(__int64 a1, __int64 a2, __int64 *a3)
{
  PVOID v5; // rsi
  int Object; // ebx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v11; // [rsp+24h] [rbp-4Ch] BYREF
  PVOID P; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  PVOID v14; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v15[2]; // [rsp+40h] [rbp-30h] BYREF
  GUID v16; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-18h] BYREF

  v15[0] = 1;
  P = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v16 = (GUID)0LL;
  v14 = 0LL;
  v15[1] = 270532612;
  Object = BcdCreateObject(a1, 0LL, v15, &v13, 0LL);
  if ( Object < 0 )
  {
    v7 = v13;
  }
  else
  {
    Object = PopBcdReadElement(a2, 301989892, &P, &v10);
    if ( Object < 0 )
    {
      v7 = v13;
    }
    else
    {
      PopBcdReadElement(a2, 301989893, &v14, &v11);
      v7 = v13;
      v8 = BcdSetElementData(v13, 301989892LL, P, v10);
      v5 = v14;
      Object = v8;
      if ( v8 >= 0 )
      {
        if ( !v14 || (Object = BcdSetElementData(v7, 301989893LL, v14, v11), Object >= 0) )
        {
          Object = PopBcdSetDefaultResumeObjectElements(v7, a2);
          if ( Object >= 0 )
          {
            v16 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            Object = BcdSetElementData(v7, 335544326LL, &v16, 16LL);
            if ( Object >= 0 )
            {
              Object = BcdQueryObject(v7, 0, 0LL, (__int64)v17);
              if ( Object >= 0 )
              {
                Object = BcdSetElementData(a2, 587202563LL, v17, 16LL);
                if ( Object >= 0 )
                {
                  *a3 = v7;
                  v7 = 0LL;
                }
              }
            }
          }
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  if ( v7 )
  {
    if ( Object < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject(v7);
  }
  return (unsigned int)Object;
}
