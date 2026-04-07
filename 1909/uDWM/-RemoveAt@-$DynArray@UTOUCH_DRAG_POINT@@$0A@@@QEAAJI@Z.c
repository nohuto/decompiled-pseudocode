/*
 * XREFs of ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x18009D184
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x18009D420 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // xmm1_8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = 28LL * (v4 + 1);
        v8 = v4++;
        v9 = 28 * v8;
        v10 = *(_QWORD *)(v7 + v6 + 16);
        LODWORD(v8) = *(_DWORD *)(v7 + v6 + 24);
        *(_OWORD *)(v9 + v6) = *(_OWORD *)(v7 + v6);
        *(_QWORD *)(v9 + v6 + 16) = v10;
        *(_DWORD *)(v9 + v6 + 24) = v8;
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
  }
  return v3;
}
