/*
 * XREFs of ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800CD600
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180039C0C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004D2B4 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DA40 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800CD540 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ATL::CComSafeArray<float,4>::Destroy(SAFEARRAY **a1)
{
  HRESULT result; // eax
  SAFEARRAY *v3; // rcx

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    result = SafeArrayUnlock(v3);
    if ( result >= 0 )
    {
      result = SafeArrayDestroy(*a1);
      if ( result >= 0 )
        *a1 = 0LL;
    }
  }
  return result;
}
