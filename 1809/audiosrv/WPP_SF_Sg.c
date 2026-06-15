/*
 * XREFs of WPP_SF_Sg @ 0x1800C3854
 * Callers:
 *     ?GetVolume@CAudioSession@@UEAAJPEAM@Z @ 0x1800033F0 (-GetVolume@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180010AF0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180010CF0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800462A4 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     _lambda_ce62a0462eef1ffdae6c0304eec1e9a4_::operator() @ 0x1800642F0 (_lambda_ce62a0462eef1ffdae6c0304eec1e9a4_--operator().c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, a2, a4);
}
