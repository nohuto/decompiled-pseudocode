/*
 * XREFs of WPP_SF_Sg @ 0x1800D2084
 * Callers:
 *     _lambda_c68382dcc9c1d77abb9bed51bdc308c6_::operator() @ 0x180021BC0 (_lambda_c68382dcc9c1d77abb9bed51bdc308c6_--operator().c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800267E0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x1800289C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x180044280 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004D2B4 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sg(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, a2, a4);
}
