/*
 * XREFs of BiCreateObject @ 0x1408F0BA0
 * Callers:
 *     BcdCreateObject @ 0x1408F07E8 (BcdCreateObject.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22D8 (BiBindEfiEntryToBcdObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     ExUuidCreate @ 0x1406062C0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     BiCreateKey @ 0x140712FE4 (BiCreateKey.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
 *     BiIsObjectAliased @ 0x1407142A4 (BiIsObjectAliased.c)
 *     BiIsValidObject @ 0x1408F0EC8 (BiIsValidObject.c)
 *     BiSetObjectDescription @ 0x1408F0F5C (BiSetObjectDescription.c)
 */

NTSTATUS __fastcall BiCreateObject(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r9
  void *v8; // rsi
  void *v9; // rdi
  unsigned int v10; // r10d
  __int64 v11; // r11
  _QWORD *v12; // r11
  int v13; // ebx
  UUID *p_Uuid; // r11
  NTSTATUS result; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  bool v19; // [rsp+30h] [rbp-50h] BYREF
  void *v20; // [rsp+38h] [rbp-48h] BYREF
  void *v21; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+60h] [rbp-20h] BYREF
  UUID Uuid; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *a5 = 0LL;
  v6 = a3[1];
  UnicodeString.Buffer = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  BiLogMessage(2LL, L"Creating object. Version: %d. Type: 0x%08x", *a3, v6);
  if ( !(unsigned __int8)BiIsValidObject(a3, v11, v10) )
    return -1073741637;
  if ( v12 )
  {
    if ( BiIsObjectAliased(v12, &v24) )
      return -1073741773;
  }
  else
  {
    BiLogMessage(2LL, L"Generating object GUID.");
    result = ExUuidCreate(&Uuid);
    if ( result < 0 )
      return result;
    p_Uuid = &Uuid;
  }
  v13 = RtlStringFromGUIDEx(&p_Uuid->Data1, (__int64)&UnicodeString, 1);
  if ( v13 >= 0 )
  {
    BiLogMessage(2LL, L"Object GUID: %s", UnicodeString.Buffer);
    v17 = BiOpenKey(a1, L"Objects", v16 + 2, &v21);
    v8 = v21;
    v13 = v17;
    if ( v17 >= 0 )
    {
      v18 = BiCreateKey((__int64)v21, UnicodeString.Buffer, 0xF003Fu, 0, &v20, &v19);
      v9 = v20;
      v13 = v18;
      if ( v18 >= 0 )
      {
        v13 = BiSetObjectDescription(v20, a3);
        if ( v13 >= 0 )
        {
          v13 = BiCreateKey((__int64)v9, L"Elements", 0x20019u, 0, &v22, &v19);
          if ( v13 >= 0 )
          {
            *a5 = v9;
            v13 = 0;
          }
          if ( v22 )
            BiCloseKey(v22);
        }
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  if ( v13 < 0 && v9 )
    BiCloseKey(v9);
  if ( v8 )
    BiCloseKey(v8);
  return v13;
}
