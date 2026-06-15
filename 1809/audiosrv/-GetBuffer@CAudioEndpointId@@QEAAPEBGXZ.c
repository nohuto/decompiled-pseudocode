/*
 * XREFs of ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800069F0
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x1800067B0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800BEBD0 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C0864 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B700 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

const unsigned __int16 *__fastcall CAudioEndpointId::GetBuffer(CAudioEndpointId *this)
{
  const unsigned __int16 *result; // rax
  ATL::CAtlException *v3; // [rsp+28h] [rbp-10h] BYREF

  try
  {
    if ( *(int *)(*(_QWORD *)this - 8LL) > 1 )
      ATL::CSimpleStringT<unsigned short,0>::Fork(this, *(unsigned int *)(*(_QWORD *)this - 16LL));
    result = *(const unsigned __int16 **)this;
  }
  catch ( ATL::CAtlException *v3 )
  {
    if ( *(_DWORD *)v3 == -1073741571 )
      _o__resetstkoflw();
    return 0LL;
  }
  return result;
}
