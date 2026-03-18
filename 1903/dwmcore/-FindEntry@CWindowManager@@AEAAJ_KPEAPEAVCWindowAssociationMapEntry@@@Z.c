/*
 * XREFs of ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800460CC
 * Callers:
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180045FC0 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800C4704 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801AB530 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801AB73C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowManager::FindEntry(CWindowManager *this, __int64 a2, struct CWindowAssociationMapEntry **a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // rbx
  struct CWindowAssociationMapEntry *v7; // rcx

  v3 = *((_DWORD *)this + 10);
  v4 = 0LL;
  v5 = -2147023728;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v7 = *(struct CWindowAssociationMapEntry **)(v6 + 8 * v4);
      if ( *(_QWORD *)v7 == a2 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        return v5;
    }
    v5 = 0;
    *a3 = v7;
  }
  return v5;
}
