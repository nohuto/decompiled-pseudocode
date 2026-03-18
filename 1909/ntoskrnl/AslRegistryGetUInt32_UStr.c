/*
 * XREFs of AslRegistryGetUInt32_UStr @ 0x140925F58
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140924660 (SdbResolveDatabaseEx.c)
 *     AslRegistryGetUInt32 @ 0x140925ED8 (AslRegistryGetUInt32.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32_UStr(_DWORD *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  ULONG v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v7 = 0;
  v8 = 0LL;
  *a1 = 0;
  v9 = 0LL;
  v10 = 0;
  v4 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, &v8, 0x14u, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( HIDWORD(v8) == 4 && (_DWORD)v9 == 4 )
    {
      v5 = 0;
      *a1 = HIDWORD(v9);
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741788;
    }
  }
  else if ( v4 != -1073741772 )
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}
