/*
 * XREFs of sub_18008AC6C @ 0x18008AC6C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiFreeLangRegistryInfo @ 0x180005F10 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_1800085C8 @ 0x1800085C8 (sub_1800085C8.c)
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 sub_18008AC6C()
{
  int v0; // ebx
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !qword_180166098 || *(_DWORD *)(qword_180166098 + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0LL;
    v0 = sub_1800085C8(&v3);
    if ( v0 >= 0 )
    {
      sub_180012D4C();
      RtlEnterCriticalSection((__int64)&unk_180163D00);
      if ( qword_180166098 && *(_DWORD *)(qword_180166098 + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_QWORD *)(v3 + 104) = qword_180166098;
        if ( qword_180166098 )
          *(_QWORD *)(v1 + 72) = *(_QWORD *)(qword_180166098 + 72);
        qword_180166098 = v1;
      }
      RtlLeaveCriticalSection((__int64)&unk_180163D00);
    }
  }
  return (unsigned int)v0;
}
