/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801764F8
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800D67E8 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DDB9C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800DDC60 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // ebx
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  CCursorVisualReference *v6; // rsi
  __int64 v7; // rax

  v2 = *((_DWORD *)this + 234);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 912);
    do
    {
      v5 = (unsigned int)(v2 - 1);
      v6 = *(CCursorVisualReference **)(*v4 + 8 * v5);
      v7 = *((_QWORD *)v6 + 1);
      if ( !*(_QWORD *)(v7 + 16) || *(struct CVisual **)(v7 + 16) == a2 )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt((__int64)v4, v5);
        CCursorVisualReference::`scalar deleting destructor'(v6);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
