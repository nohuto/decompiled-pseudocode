/*
 * XREFs of ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800CD10C
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800CD280 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x1800CD7F8 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::GetAt(unsigned __int16 **a1)
{
  if ( *((int *)*a1 - 4) < 0 )
    ATL::AtlThrowImpl(-2147024809);
  return **a1;
}
