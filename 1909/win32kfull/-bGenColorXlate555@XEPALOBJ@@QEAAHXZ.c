/*
 * XREFs of ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C014FD04
 * Callers:
 *     ?pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ @ 0x1C014FCB4 (-pGetRGBXlate@XEPALOBJ@@QEAAPEAEXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D04D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00D0548 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 */

__int64 __fastcall XEPALOBJ::bGenColorXlate555(XEPALOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v3; // ebx
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // rcx

  v1 = *(_QWORD *)this;
  v3 = 0;
  v4 = *(unsigned __int8 **)(*(_QWORD *)this + 104LL);
  if ( !v4 || v4 == gpRGBXlate )
  {
    *(_QWORD *)(*(_QWORD *)this + 104LL) = PALLOCMEM2(0x8000uLL, 1650946631LL, 0);
    v1 = *(_QWORD *)this;
  }
  v5 = *(unsigned __int8 **)(v1 + 104);
  if ( v5 )
  {
    MakeITable(v5, *(struct RGBX **)(v1 + 112), *(_DWORD *)(v1 + 28));
    v3 = 1;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = XEPALOBJ::ulTime(this);
  }
  return v3;
}
