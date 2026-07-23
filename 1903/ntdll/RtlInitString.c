/*
 * XREFs of RtlInitString @ 0x180021100
 * Callers:
 *     sub_18002105C @ 0x18002105C (sub_18002105C.c)
 *     sub_18002113C @ 0x18002113C (sub_18002113C.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_180069410 @ 0x180069410 (sub_180069410.c)
 *     sub_18006F388 @ 0x18006F388 (sub_18006F388.c)
 *     sub_1800D99A4 @ 0x1800D99A4 (sub_1800D99A4.c)
 *     sub_1800DA834 @ 0x1800DA834 (sub_1800DA834.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (PCHAR)SourceString;
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
