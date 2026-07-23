/*
 * XREFs of ?ExtractDeviceStrings@SC_DEVICE@@AEAAJXZ @ 0x14032B728
 * Callers:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14032B8F0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x1406D05A0 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall SC_DEVICE::ExtractDeviceStrings(SC_DEVICE *this)
{
  _DWORD *v1; // rbx
  int v2; // edi
  char *v3; // rcx
  unsigned int v4; // r10d
  __int64 v5; // r11
  struct _UNICODE_STRING *v6; // rdx
  _OWORD **v7; // rdx
  __int64 v8; // r9
  _OWORD *v9; // r8
  char *v10; // rcx
  char v12[4]; // [rsp+20h] [rbp-29h] BYREF
  int v13; // [rsp+24h] [rbp-25h]
  int v14; // [rsp+28h] [rbp-21h]
  int v15; // [rsp+2Ch] [rbp-1Dh]
  _QWORD v16[4]; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v17[64]; // [rsp+50h] [rbp+7h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 20);
  v2 = 0;
  *(_DWORD *)v12 = v1[3];
  v13 = v1[4];
  v14 = v1[5];
  v15 = v1[6];
  v16[0] = (char *)this + 24;
  v16[1] = (char *)this + 40;
  v16[2] = (char *)this + 56;
  v16[3] = (char *)this + 72;
  memset(v17, 0, sizeof(v17));
  v3 = v12;
  v4 = v1[1] - 1;
  v5 = 4LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( *(_DWORD *)v3 >= 0x24u && *(_DWORD *)v3 <= v4 )
    {
      v2 = ScAnsiToUnicodeString(v3, v6);
      if ( v2 < 0 )
        break;
    }
    v6 = (struct _UNICODE_STRING *)(unsigned int)((_DWORD)v6 + 1);
    v3 += v5;
    if ( (unsigned int)v6 >= (unsigned int)v5 )
    {
      v7 = (_OWORD **)v16;
      v8 = v5;
      v9 = v17;
      v10 = v12;
      do
      {
        if ( *(_DWORD *)v10 >= 0x24u && *(_DWORD *)v10 <= v4 )
          **v7 = *v9;
        v10 += v5;
        ++v9;
        ++v7;
        --v8;
      }
      while ( v8 );
      return (unsigned int)v2;
    }
  }
  return (unsigned int)v2;
}
