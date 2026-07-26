/*
 * XREFs of ndisWdfUpdateAddDeviceParameters @ 0x1C00F33CC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00C7EC0 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C0064A90 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B4068 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(void **a1, struct _GUID *a2)
{
  NTSTATUS SubkeyName; // edi
  void *v5; // r8
  HANDLE v6; // rbx
  const wchar_t *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // ax
  NTSTATUS v10; // eax
  HANDLE v11; // rcx
  ULONG i; // r14d
  UNICODE_STRING *v13; // rbx
  UNICODE_STRING *v14; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-29h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+28h] [rbp-21h] BYREF
  const wchar_t *v18; // [rsp+30h] [rbp-19h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-11h] BYREF
  GUID Guid; // [rsp+68h] [rbp+1Fh] BYREF

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x3Au, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  if ( IsIfBlockAvailable(a2) )
  {
    SubkeyName = 0;
    goto LABEL_33;
  }
  v5 = *a1;
  GuidString = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = L"NetworkInterface";
  KeyHandle = 0LL;
  v8 = 0x7FFFLL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  SubkeyName = -1073741811;
  if ( v8 )
  {
    SubkeyName = 0;
    v9 = 0x7FFF - v8;
  }
  else
  {
    v9 = 0;
  }
  if ( v8 )
  {
    v18 = L"NetworkInterface";
    LOWORD(GuidString) = 2 * v9;
    WORD1(GuidString) = 2 * v9 + 2;
    ObjectAttributes.RootDirectory = v5;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&GuidString;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    v6 = KeyHandle;
    SubkeyName = v10;
  }
  if ( SubkeyName < 0 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_D(0x3Bu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, SubkeyName);
    if ( v6 )
    {
      v11 = v6;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  for ( i = 0; ; ++i )
  {
    GuidString = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&KeyHandle, i, (void **)&GuidString);
    if ( SubkeyName < 0 )
      break;
    v13 = (UNICODE_STRING *)GuidString;
    if ( RtlGUIDFromString(GuidString, &Guid) < 0 )
    {
      if ( !v13 )
        continue;
LABEL_25:
      ExFreePoolWithTag(v13, 0x7274534Bu);
      continue;
    }
    if ( IsIfBlockAvailable(&Guid) )
    {
      SubkeyName = 0;
      *a2 = Guid;
      if ( !v13 )
        goto LABEL_31;
      v14 = v13;
      goto LABEL_30;
    }
    if ( v13 )
      goto LABEL_25;
  }
  v14 = (UNICODE_STRING *)GuidString;
  if ( !GuidString )
    goto LABEL_31;
LABEL_30:
  ExFreePoolWithTag(v14, 0x7274534Bu);
LABEL_31:
  v11 = KeyHandle;
  if ( KeyHandle )
LABEL_32:
    ZwClose(v11);
LABEL_33:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_D(0x3Cu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, SubkeyName);
  return (unsigned int)SubkeyName;
}
