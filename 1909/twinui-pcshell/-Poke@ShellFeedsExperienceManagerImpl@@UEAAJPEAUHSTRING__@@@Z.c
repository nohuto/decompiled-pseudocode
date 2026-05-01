/*
 * XREFs of ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x180094270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_Poke@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z @ 0x1800923A0 (--$ShellFeedsExperienceManagerImpl_Poke@PEBG@ShellFeedsTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x180095F98 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::Poke(ShellFeedsExperienceManagerImpl *this, HSTRING a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWSTR StringRawBuffer; // [rsp+50h] [rbp+18h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_Poke<unsigned short const *>(&StringRawBuffer);
  v4 = ShellFeedsExperienceManagerImpl::_Show(this, a2, 0LL);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
