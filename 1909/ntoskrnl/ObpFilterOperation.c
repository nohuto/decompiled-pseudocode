/*
 * XREFs of ObpFilterOperation @ 0x140013CE0
 * Callers:
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140653AD0 (ObCompleteObjectDuplication.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpFilterOperation(__int64 a1)
{
  return (*(_BYTE *)(a1 + 66) & 0x40) != 0 && *(_QWORD *)(a1 + 200) != a1 + 200;
}
