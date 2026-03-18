/*
 * XREFs of ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C014FCB4
 * Callers:
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C014FC64 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D04D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C014FD04 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 */

unsigned __int8 *__fastcall XEPALOBJ::pGetRGBXlate(XEPALOBJ *this)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v4; // r8

  v1 = 0LL;
  if ( *(_QWORD *)this )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 104LL) || (v3 = XEPALOBJ::ulTime(this), *(_DWORD *)(v4 + 36) != v3) )
    {
      if ( (unsigned int)XEPALOBJ::bGenColorXlate555(this) )
        return *(unsigned __int8 **)(*(_QWORD *)this + 104LL);
      else
        return 0LL;
    }
  }
  return (unsigned __int8 *)v1;
}
