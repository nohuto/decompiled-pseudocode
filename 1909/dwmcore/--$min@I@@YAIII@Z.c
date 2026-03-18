/*
 * XREFs of ??$min@I@@YAIII@Z @ 0x18015A208
 * Callers:
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015C780 (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall min<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 >= a2 )
    return a2;
  return a1;
}
