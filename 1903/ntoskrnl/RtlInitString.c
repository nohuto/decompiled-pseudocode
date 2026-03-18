/*
 * XREFs of RtlInitString @ 0x1400EBCC0
 * Callers:
 *     PopEmModuleAddressMatchCallback @ 0x140301D60 (PopEmModuleAddressMatchCallback.c)
 *     PopAvlGetPowerRequestKey @ 0x14069F44C (PopAvlGetPowerRequestKey.c)
 *     SepInitializationPhase1 @ 0x140758140 (SepInitializationPhase1.c)
 *     NtQuerySystemEnvironmentValue @ 0x140912840 (NtQuerySystemEnvironmentValue.c)
 *     AslStringAnsiToUnicode @ 0x140925EE0 (AslStringAnsiToUnicode.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
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
