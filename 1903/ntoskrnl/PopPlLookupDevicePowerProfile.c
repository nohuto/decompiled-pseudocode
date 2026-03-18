/*
 * XREFs of PopPlLookupDevicePowerProfile @ 0x140305124
 * Callers:
 *     PopPlRegisterDevice @ 0x140191988 (PopPlRegisterDevice.c)
 *     PopPlActivateDeviceIterator @ 0x140304F20 (PopPlActivateDeviceIterator.c)
 *     PopPlIdleDeviceIterator @ 0x140305070 (PopPlIdleDeviceIterator.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

PCUNICODE_STRING __fastcall PopPlLookupDevicePowerProfile(__int64 a1, const UNICODE_STRING *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v5; // rdi
  PCUNICODE_STRING *i; // rsi
  PCUNICODE_STRING v7; // r14

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    for ( i = *(PCUNICODE_STRING **)(a1 + 56); ; ++i )
    {
      v7 = *i;
      if ( RtlEqualUnicodeString(a2, *i, 1u) )
        break;
      if ( ++v5 >= v2 )
        return (PCUNICODE_STRING)v3;
    }
    return v7;
  }
  return (PCUNICODE_STRING)v3;
}
