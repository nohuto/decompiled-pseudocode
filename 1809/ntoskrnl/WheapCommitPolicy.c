/*
 * XREFs of WheapCommitPolicy @ 0x1408DD49C
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x140321A68 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1406C8900 (RtlCheckRegistryKey.c)
 *     RtlCreateRegistryKey @ 0x140761620 (RtlCreateRegistryKey.c)
 *     WheapPfaReset @ 0x1408DE008 (WheapPfaReset.c)
 */

__int64 WheapCommitPolicy()
{
  NTSTATUS RegistryKey; // ebx
  char v1; // bp
  _BYTE *v2; // rdi
  unsigned int v3; // esi
  wchar_t **i; // r14

  RegistryKey = RtlCheckRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  if ( RegistryKey < 0 )
  {
    RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA");
    if ( RegistryKey >= 0 )
      RegistryKey = RtlCreateRegistryKey(2u, (PWSTR)L"WHEA\\Policy");
  }
  if ( RegistryKey >= 0 )
  {
    v1 = 0;
    v2 = WheaRegPolicyTableChanged;
    v3 = 0;
    for ( i = &WheaRegPolicyTable; ; i += 3 )
    {
      if ( *v2 )
      {
        v1 = 1;
        RegistryKey = RtlWriteRegistryValue(2u, L"WHEA\\Policy", *i, 4u, i[1], 4u);
        if ( RegistryKey < 0 )
          break;
      }
      ++v3;
      ++v2;
      if ( v3 >= 7 )
      {
        if ( v1 )
          WheapPfaReset();
        return (unsigned int)RegistryKey;
      }
    }
  }
  return (unsigned int)RegistryKey;
}
