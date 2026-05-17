/*
 * XREFs of RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968
 * Callers:
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E48E8 (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A0540 (ZwEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x1800A0920 (NtEnumerateKey.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E4968 (RtlpIsEmptyImageFileOptionsKey.c)
 */

bool __fastcall RtlpIsEmptyImageFileOptionsKey(__int64 a1)
{
  int v2; // edi
  int inited; // ebx
  unsigned __int16 v4; // si
  unsigned __int64 v5; // rsi
  int i; // esi
  int v7; // edi
  char IsEmptyImageFileOptionsKey; // bl
  unsigned __int16 v10; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v11; // [rsp+42h] [rbp-BEh]
  unsigned __int16 *v12; // [rsp+48h] [rbp-B8h]
  unsigned __int16 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  __int128 v21; // [rsp+90h] [rbp-70h]
  unsigned __int16 v22; // [rsp+A8h] [rbp-58h]
  unsigned __int16 v23[2]; // [rsp+ACh] [rbp-54h] BYREF
  char v24; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0;
  while ( 1 )
  {
    inited = ZwEnumerateValueKey();
    if ( inited >= 0 )
    {
      if ( v2 )
        break;
      v4 = v22;
      v10 = v22;
      v11 = v22;
      v12 = v23;
      if ( (int)RtlInitUnicodeStringEx((__int64)&v13, (__int64)L"UseFilter") < 0 )
        break;
      inited = RtlInitUnicodeStringEx((__int64)&v15, (__int64)L"FilterFullPath");
      if ( inited < 0 )
        break;
      v5 = (unsigned __int64)v4 >> 1;
      if ( (unsigned int)RtlCompareUnicodeStrings(v23, v5, v14, (unsigned __int64)v13 >> 1, 1) )
      {
        if ( (unsigned int)RtlCompareUnicodeStrings(v23, v5, v16, (unsigned __int64)v15 >> 1, 1) )
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
          v7 = NtEnumerateKey();
          if ( v7 >= 0 )
          {
            v10 = v23[0];
            v11 = v23[0];
            v17 = 48;
            v12 = (unsigned __int16 *)&v24;
            v18 = a1;
            v19 = &v10;
            v20 = 576;
            v21 = 0LL;
            v7 = NtOpenKey();
            if ( v7 >= 0 )
            {
              IsEmptyImageFileOptionsKey = RtlpIsEmptyImageFileOptionsKey(0LL);
              NtClose(0LL);
              if ( !IsEmptyImageFileOptionsKey )
                break;
            }
          }
          if ( v7 < 0 )
            return v7 == -2147483622;
        }
      }
      return 0;
    }
  }
  return 0;
}
