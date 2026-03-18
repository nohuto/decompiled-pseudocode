/*
 * XREFs of RtlInitString @ 0x140105320
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x140301810 (PopEmModuleAddressMatchCallback.c)
 *     PopAvlGetPowerRequestKey @ 0x1406B418C (PopAvlGetPowerRequestKey.c)
 *     SepInitializationPhase1 @ 0x14075C9D4 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409122A0 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140925940 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
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
