/*
 * XREFs of RtlAppendUnicodeToString @ 0x180015120
 * Callers:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     sub_180012E38 @ 0x180012E38 (sub_180012E38.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_18005A3AC @ 0x18005A3AC (sub_18005A3AC.c)
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D9678 @ 0x1800D9678 (sub_1800D9678.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 *     sub_1800E053C @ 0x1800E053C (sub_1800E053C.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  WCHAR *v5; // r14

  if ( !Source )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( Source[v3] );
  if ( v3 <= 0x7FFE )
  {
    v4 = (unsigned __int16)(2 * v3);
    if ( Destination->Length + v4 <= Destination->MaximumLength )
    {
      v5 = &Destination->Buffer[(unsigned __int64)Destination->Length >> 1];
      memmove(v5, Source, (unsigned __int16)(2 * v3));
      Destination->Length += v4;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[(unsigned __int64)v4 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
