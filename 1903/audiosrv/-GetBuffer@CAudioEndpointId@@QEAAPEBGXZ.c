/*
 * XREFs of ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x180039550
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180039340 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800CD3C0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800CF004 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800234C0 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

const unsigned __int16 *__fastcall CAudioEndpointId::GetBuffer(const void **this)
{
  const unsigned __int16 *result; // rax
  ATL::CAtlException *v3; // [rsp+28h] [rbp-10h] BYREF

  try
  {
    if ( *((int *)*this - 2) > 1 )
      ATL::CSimpleStringT<unsigned short,0>::Fork(this, *((_DWORD *)*this - 4));
    result = (const unsigned __int16 *)*this;
  }
  catch ( ATL::CAtlException *v3 )
  {
    if ( *(_DWORD *)v3 == -1073741571 )
      _o__resetstkoflw();
    return 0LL;
  }
  return result;
}
