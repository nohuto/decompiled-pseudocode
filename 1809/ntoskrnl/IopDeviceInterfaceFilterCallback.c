/*
 * XREFs of IopDeviceInterfaceFilterCallback @ 0x1406BA000
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140596FCC (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

char __fastcall IopDeviceInterfaceFilterCallback(__int64 a1, const WCHAR *a2, int a3, __int64 a4)
{
  char v4; // bl
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  LOBYTE(v11) = 0;
  if ( a3 == 3
    && a4
    && (!*(_QWORD *)a4
     || RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)a4) >= 0
     && RtlInitUnicodeStringEx(&String2, a2) >= 0
     && RtlEqualUnicodeString(&DestinationString, &String2, 1u) != 1)
    && (int)PiPnpRtlApplyMandatoryFilters(a1, (__int64)a2, 3, 0LL, (struct _SECURITY_SUBJECT_CONTEXT *)(a4 + 8), &v11) >= 0 )
  {
    return v11;
  }
  return v4;
}
