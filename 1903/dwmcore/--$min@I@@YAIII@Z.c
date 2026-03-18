/*
 * XREFs of ??$min@I@@YAIII@Z @ 0x18015B8E8
 * Callers:
 *     ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18015DE5C (-PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall min<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 >= a2 )
    return a2;
  return a1;
}
