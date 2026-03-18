/*
 * XREFs of DoesLowBoxAppHaveOutputDuplCapability @ 0x1C00FD5E4
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00FD980 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

char DoesLowBoxAppHaveOutputDuplCapability()
{
  int v0; // eax
  char v1; // dl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, L"screenDuplication");
  v0 = RtlCapabilityCheck(0LL, &DestinationString, &v4);
  v1 = 0;
  if ( v0 >= 0 )
    return v4;
  return v1;
}
