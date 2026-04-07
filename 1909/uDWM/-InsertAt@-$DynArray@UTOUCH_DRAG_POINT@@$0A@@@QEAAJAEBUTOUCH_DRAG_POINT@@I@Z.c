/*
 * XREFs of ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18009CBF0
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009CCD4 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800175C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  char *v6; // r8
  char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a2;
  v3 = DynArrayImpl<0>::Grow((char **)a1, 0x1Cu, 1, 0, &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(char **)a1;
    *(_DWORD *)(a1 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v7 = &v6[28 * v5];
      do
      {
        LODWORD(v5) = v5 - 1;
        v8 = 28LL * (unsigned int)v5;
        v9 = *(_QWORD *)&v6[v8 + 16];
        v10 = *(_DWORD *)&v6[v8 + 24];
        *(_OWORD *)v7 = *(_OWORD *)&v6[v8];
        *((_QWORD *)v7 + 2) = v9;
        *((_DWORD *)v7 + 6) = v10;
        v7 -= 28;
      }
      while ( (_DWORD)v5 );
    }
    v11 = v13;
    if ( v13 >= (unsigned __int64)v6 && v13 < (unsigned __int64)&v6[28 * *(unsigned int *)(a1 + 24) - 28] )
      v11 = v13 + 28;
    *(_OWORD *)v6 = *(_OWORD *)v11;
    *((_QWORD *)v6 + 2) = *(_QWORD *)(v11 + 16);
    *((_DWORD *)v6 + 6) = *(_DWORD *)(v11 + 24);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1CDu);
  }
  return v4;
}
