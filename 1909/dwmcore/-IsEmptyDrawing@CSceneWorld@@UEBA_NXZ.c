/*
 * XREFs of ?IsEmptyDrawing@CSceneWorld@@UEBA_NXZ @ 0x1802044C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneWorld::IsEmptyDrawing(CSceneWorld *this)
{
  return *((_QWORD *)this + 8) == 0LL;
}
