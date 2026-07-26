/*
 * XREFs of ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01072CC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C002D984 (ndisPnPAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0032B80 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0107334 (-ndisIsNetSetupV2Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z @ 0x1C0117C58 (-ndisIsNetSetupV1Interface@@YA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C0123F34 (-DeleteValue@KRegKey@@QEAAJPEB_W@Z.c)
 */

__int64 __fastcall ndisCheckIfDeviceNeedsPseudoMigration(KRegKey *this, const struct _UNICODE_STRING **a2, _BYTE *a3)
{
  const UNICODE_STRING *v7; // rcx
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  __int16 v10; // ax
  const wchar_t *v11; // rdx
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  __int16 v14; // bx
  void *m_ptr; // rcx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-30h] BYREF
  int Data; // [rsp+40h] [rbp-20h] BYREF
  GUID Guid; // [rsp+48h] [rbp-18h] BYREF

  if ( ndisIsNetSetupV2Interface(*a2) || !ndisIsNetSetupV1Interface(*a2) )
  {
    *a3 = 0;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        0xDu,
        0x38u,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (*a2)->Buffer);
    v7 = *a2;
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
    if ( RtlGUIDFromString(v7, &Guid) >= 0 )
    {
      *(_QWORD *)&ValueName.Length = 0LL;
      v8 = 0x7FFFLL;
      ValueName.Buffer = 0LL;
      v9 = L"SuggestedInstanceId";
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      v10 = v8 ? 0x7FFF - v8 : 0;
      if ( v8 )
      {
        ValueName.Buffer = L"SuggestedInstanceId";
        ValueName.Length = 2 * v10;
        ValueName.MaximumLength = 2 * v10 + 2;
        ZwSetValueKey(this->m_ptr, &ValueName, 0, 3u, &Guid, 0x10u);
      }
    }
    v11 = L"MigratedFromNetSetupV1";
    *(_QWORD *)&ValueName.Length = 0LL;
    v12 = L"MigratedFromNetSetupV1";
    ValueName.Buffer = 0LL;
    v13 = 0x7FFFLL;
    do
    {
      if ( !*v12 )
        break;
      ++v12;
      --v13;
    }
    while ( v13 );
    if ( v13 )
      v14 = 0x7FFF - v13;
    else
      v14 = 0;
    if ( v13 )
    {
      ValueName.Buffer = L"MigratedFromNetSetupV1";
      ValueName.Length = 2 * v14;
      ValueName.MaximumLength = 2 * v14 + 2;
      m_ptr = this->m_ptr;
      Data = 1;
      ZwSetValueKey(m_ptr, &ValueName, 0, 4u, &Data, 4u);
    }
    KRegKey::DeleteValue(this, v11);
    *a3 = 1;
  }
  return 0LL;
}
