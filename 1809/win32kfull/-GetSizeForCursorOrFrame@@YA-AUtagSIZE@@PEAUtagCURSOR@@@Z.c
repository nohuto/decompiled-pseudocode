/*
 * XREFs of ?GetSizeForCursorOrFrame@@YA?AUtagSIZE@@PEAUtagCURSOR@@@Z @ 0x1C00DEDF8
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall GetSizeForCursorOrFrame(struct tagCURSOR *a1)
{
  __int64 v2; // [rsp+8h] [rbp+8h]

  v2 = 0LL;
  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
      a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
    return *(struct tagSIZE *)((char *)a1 + 140);
  }
  return (struct tagSIZE)v2;
}
