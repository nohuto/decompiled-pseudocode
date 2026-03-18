/*
 * XREFs of ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C00F3630
 * Callers:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C00F35E8 (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C015A904 (-bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C02C7528 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WIDEPATHOBJ::bGrowPath(WIDEPATHOBJ *this)
{
  _QWORD *v1; // r9
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  LODWORD(v2) = 0;
  v4 = v1[3];
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 8) + 24LL;
    v9 = v4 + *(unsigned int *)(v4 + 16);
    if ( v9 > v8 )
      v2 = (__int64)(v9 - v8) >> 3;
  }
  if ( (unsigned int)v2 < 8 )
  {
    result = newpathalloc();
    v4 = result;
    if ( !result )
      return result;
    *(_QWORD *)result = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = result;
    v1 = (_QWORD *)*((_QWORD *)this + 1);
    v2 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
  }
  v6 = (_QWORD *)v1[5];
  v7 = *(_QWORD *)(v4 + 8);
  if ( v6 )
  {
    *v6 = v7;
    v6 = *(_QWORD **)(*((_QWORD *)this + 1) + 40LL);
  }
  else
  {
    v1[4] = v7;
  }
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v7;
  *(_QWORD *)v7 = 0LL;
  *(_DWORD *)(v7 + 20) = 0;
  *((_QWORD *)this + 16) = v7 + 24;
  result = 1LL;
  *((_QWORD *)this + 17) = v7 + 8LL * (unsigned int)v2 + 24;
  return result;
}
