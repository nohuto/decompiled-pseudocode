/*
 * XREFs of PiPnpRtlEnumeratorFilterCallback @ 0x1406FA8A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     _CmIsDevicePresent @ 0x14070B584 (_CmIsDevicePresent.c)
 */

char __fastcall PiPnpRtlEnumeratorFilterCallback(__int64 a1, const WCHAR *a2, unsigned int a3, __int64 a4)
{
  char v8; // di
  PCUNICODE_STRING v9; // rax
  __int64 (__fastcall *v10)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0;
  v13 = 0;
  if ( !*(_BYTE *)(a4 + 8) || (int)CmIsDevicePresent(a1, a2, &v13) >= 0 && v13 )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( !*(_QWORD *)a4
      || v9->Length < 2u
      || !*v9->Buffer
      || RtlInitUnicodeStringEx(&DestinationString, a2) >= 0
      && RtlPrefixUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
    {
      v10 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 16);
      v8 = 1;
      if ( v10 )
        return v10(a1, a2, a3, *(_QWORD *)(a4 + 24));
    }
  }
  return v8;
}
