/*
 * XREFs of ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x180048DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18001FE20 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionMute(CPerStreamVolumeAudioStream *this, char a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 440) = a2;
  if ( !a3 )
    return 0LL;
  v4 = CAudioStream::RecalculateVolume(this, 0, 0LL);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B2,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
