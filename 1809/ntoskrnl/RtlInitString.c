/*
 * XREFs of RtlInitString @ 0x140002070
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x1402E53E0 (PopEmModuleAddressMatchCallback.c)
 *     PopAvlGetPowerRequestKey @ 0x14058A1B4 (PopAvlGetPowerRequestKey.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D6240 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x1408EA524 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
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
