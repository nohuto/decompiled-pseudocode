/*
 * XREFs of sub_1800E1C18 @ 0x1800E1C18
 * Callers:
 *     sub_1800E1B98 @ 0x1800E1B98 (sub_1800E1B98.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x18009C940 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 */

bool __fastcall sub_1800E1C18(__int64 a1)
{
  int v2; // edi
  int inited; // ebx
  int i; // esi
  int v5; // edi
  char v6; // bl
  unsigned __int16 v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v9; // [rsp+32h] [rbp-CEh]
  unsigned __int16 *v10; // [rsp+38h] [rbp-C8h]
  __int64 v11; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v13[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v16; // [rsp+80h] [rbp-80h]
  int v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  unsigned __int16 v19; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v20; // [rsp+ACh] [rbp-54h] BYREF
  char v21; // [rsp+B0h] [rbp-50h] BYREF

  v11 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateValueKey();
    if ( inited >= 0 )
    {
      if ( v2 )
        break;
      v8 = v19;
      v9 = v19;
      v10 = &v20;
      if ( (int)RtlInitUnicodeStringEx((__int64)v12, (__int64)L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx((__int64)v13, (__int64)L"FilterFullPath");
      if ( inited < 0
        || (unsigned int)RtlCompareUnicodeString(&v8, v12, 1) && (unsigned int)RtlCompareUnicodeString(&v8, v13, 1) )
      {
        break;
      }
    }
    ++v2;
    if ( inited < 0 )
    {
      if ( inited == -2147483622 )
      {
        for ( i = 0; ; ++i )
        {
          v5 = ZwEnumerateKey();
          if ( v5 >= 0 )
          {
            v8 = v20;
            v9 = v20;
            v14 = 48;
            v10 = (unsigned __int16 *)&v21;
            v15 = a1;
            v16 = &v8;
            v17 = 576;
            v18 = 0LL;
            v5 = ZwOpenKey();
            if ( v5 >= 0 )
            {
              v6 = sub_1800E1C18(v11);
              ZwClose();
              if ( !v6 )
                break;
            }
          }
          if ( v5 < 0 )
            return v5 == -2147483622;
        }
      }
      return 0;
    }
  }
  return 0;
}
