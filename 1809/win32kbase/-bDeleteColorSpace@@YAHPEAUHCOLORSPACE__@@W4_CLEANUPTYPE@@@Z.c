/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00ABCF8
 * Callers:
 *     ?vCleanupLCSPs@@YAXK@Z @ 0x1C0080270 (-vCleanupLCSPs@@YAXK@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00AC624 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C0105C50 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C001D600 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C001D830 (FreeObject.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00AA958 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v2; // ebx
  void *v3; // rax

  v2 = 0;
  if ( a1 == (struct HOBJ__ *)ghStockColorSpace )
    return a2 != 3;
  if ( a2 )
  {
    if ( a2 != 3 )
    {
LABEL_8:
      EngSetLastError(0x57u);
      return v2;
    }
    v3 = HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v3 = HmgRemoveObject(a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v3 )
    goto LABEL_8;
  FreeObject((__int64)v3, 9);
  return 1;
}
