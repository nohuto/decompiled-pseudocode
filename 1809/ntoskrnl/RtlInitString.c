/*
 * XREFs of RtlInitString @ 0x140002070
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x1402E50F0 (PopEmModuleAddressMatchCallback.c)
 *     PopAvlGetPowerRequestKey @ 0x1405891B4 (PopAvlGetPowerRequestKey.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4FA0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x1408E9284 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
