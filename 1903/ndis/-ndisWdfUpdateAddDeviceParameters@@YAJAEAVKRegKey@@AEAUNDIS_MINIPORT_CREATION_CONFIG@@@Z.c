/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1C011840C
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D994 (ndisPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C009CBE4 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00FC308 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  struct _GUID *v2; // r14
  __int64 v4; // rdx
  NTSTATUS SubkeyName; // edi
  void *m_ptr; // r8
  HANDLE v7; // rbx
  const wchar_t *v8; // rax
  __int16 v9; // cx
  NTSTATUS v10; // eax
  ULONG i; // esi
  UNICODE_STRING *v12; // rbx
  UNICODE_STRING *v13; // rcx
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+38h] [rbp-31h] BYREF
  const wchar_t *v17; // [rsp+40h] [rbp-29h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  GUID Guid; // [rsp+78h] [rbp+Fh] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      58,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  }
  if ( IsIfBlockAvailable(v2) )
  {
    SubkeyName = 0;
  }
  else
  {
    m_ptr = a1->m_ptr;
    v7 = 0LL;
    GuidString = 0LL;
    v17 = 0LL;
    v4 = 0x7FFFLL;
    v8 = L"NetworkInterface";
    KeyHandle = 0LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v4;
    }
    while ( v4 );
    SubkeyName = v4 == 0 ? 0xC000000D : 0;
    if ( v4 )
      v9 = 0x7FFF - v4;
    else
      v9 = 0;
    if ( v4 )
    {
      v17 = L"NetworkInterface";
      LOWORD(GuidString) = 2 * v9;
      WORD1(GuidString) = 2 * v9 + 2;
      ObjectAttributes.RootDirectory = m_ptr;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&GuidString;
      KeyHandle = 0LL;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
      v7 = KeyHandle;
      SubkeyName = v10;
    }
    if ( SubkeyName >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        GuidString = 0LL;
        SubkeyName = KRegKey::GetSubkeyName(&KeyHandle, i, (void **)&GuidString);
        if ( SubkeyName < 0 )
          break;
        v12 = (UNICODE_STRING *)GuidString;
        *(_QWORD *)&Guid.Data1 = 0LL;
        *(_QWORD *)Guid.Data4 = 0LL;
        if ( RtlGUIDFromString(GuidString, &Guid) >= 0 && IsIfBlockAvailable(&Guid) )
        {
          SubkeyName = 0;
          *v2 = Guid;
          if ( !v12 )
            goto LABEL_29;
          v13 = v12;
          goto LABEL_28;
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0x7274534Bu);
      }
      v13 = (UNICODE_STRING *)GuidString;
      if ( !GuidString )
        goto LABEL_29;
LABEL_28:
      ExFreePoolWithTag(v13, 0x7274534Bu);
LABEL_29:
      if ( KeyHandle )
        ZwClose(KeyHandle);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v4,
          13,
          59,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
          SubkeyName);
      }
      if ( v7 )
        ZwClose(v7);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      60,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      SubkeyName);
  }
  return (unsigned int)SubkeyName;
}
