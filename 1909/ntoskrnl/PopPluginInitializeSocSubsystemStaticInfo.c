/*
 * XREFs of PopPluginInitializeSocSubsystemStaticInfo @ 0x1408A66FC
 * Callers:
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408A5370 (PopFxInitializeSocSubsystemStaticInfo.c)
 * Callees:
 *     wcsncmp @ 0x1401A2770 (wcsncmp.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxValidateReturnedUnicodeString @ 0x1408A6464 (PopFxValidateReturnedUnicodeString.c)
 */

char __fastcall PopPluginInitializeSocSubsystemStaticInfo(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rsi
  const wchar_t **v4; // rdi
  char v5; // si
  __int128 v7; // [rsp+20h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-18h]

  v2 = (unsigned __int16 *)(a2 + 32);
  v8 = *(_OWORD *)(a2 + 32);
  v7 = *(_OWORD *)(a2 + 16);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(PopFxProcessorPlugin + 96))(37LL) )
    PopFxBugCheck(0x605uLL, 0x25uLL, PopFxProcessorPlugin, 0LL);
  if ( !PopFxValidateReturnedUnicodeString((unsigned __int16 *)(a2 + 16), *((__int64 *)&v7 + 1), WORD1(v7)) )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x504E616DuLL, a2 + 24);
  v4 = (const wchar_t **)(a2 + 40);
  v5 = PopFxValidateReturnedUnicodeString(v2, *((__int64 *)&v8 + 1), WORD1(v8));
  if ( !v5 )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x534E616DuLL, (ULONG_PTR)v4);
  if ( !wcsncmp(*v4, *(const wchar_t **)(a2 + 24), 0x40uLL) )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, (ULONG_PTR)v4);
  if ( *(_DWORD *)(a2 + 48) > 0x3E8u )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x4D436F75uLL, a2 + 48);
  return v5;
}
