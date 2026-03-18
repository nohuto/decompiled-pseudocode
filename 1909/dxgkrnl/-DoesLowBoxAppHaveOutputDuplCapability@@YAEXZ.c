/*
 * XREFs of ?DoesLowBoxAppHaveOutputDuplCapability@@YAEXZ @ 0x1C02720DC
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C0275990 (DxgkCreateOutputDupl.c)
 * Callees:
 *     <none>
 */

char DoesLowBoxAppHaveOutputDuplCapability(void)
{
  int v0; // eax
  char v1; // dl
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"screenDuplication");
  v0 = RtlCapabilityCheck(0LL, &DestinationString, &v4);
  v1 = 0;
  if ( v0 >= 0 )
    return v4;
  return v1;
}
