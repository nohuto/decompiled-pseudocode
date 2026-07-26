/*
 * XREFs of ?DeleteValue@KRegKey@@QEAAJPEB_W@Z @ 0x1C0123F34
 * Callers:
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01072CC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KRegKey::DeleteValue(KRegKey *this, const wchar_t *a2)
{
  __int64 v2; // rdx
  const wchar_t *v3; // rax
  NTSTATUS result; // eax
  __int16 v5; // r8
  _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v2 = 0x7FFFLL;
  v3 = L"NetCfgInstanceId";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  result = v2 == 0 ? 0xC000000D : 0;
  if ( v2 )
    v5 = 0x7FFF - v2;
  else
    v5 = 0;
  if ( v2 )
  {
    ValueName.Buffer = L"NetCfgInstanceId";
    ValueName.Length = 2 * v5;
    ValueName.MaximumLength = 2 * v5 + 2;
    return ZwDeleteValueKey(this->m_ptr, &ValueName);
  }
  return result;
}
