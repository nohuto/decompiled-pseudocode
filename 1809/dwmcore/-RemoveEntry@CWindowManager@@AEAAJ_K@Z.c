/*
 * XREFs of ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800683AC
 * Callers:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180068320 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152568 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18006842C (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveEntry(CWindowManager *this, __int64 a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // r11
  CWindowAssociationMapEntry *v6; // r10
  unsigned int v7; // edx
  __int64 i; // rcx

  v3 = -2147467259;
  v4 = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v5 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v6 = *(CWindowAssociationMapEntry **)(v5 + 8 * v4);
      if ( *(_QWORD *)v6 == a2 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
        return v3;
    }
    v7 = *((_DWORD *)this + 10);
    for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
    {
      if ( v6 == *(CWindowAssociationMapEntry **)(v5 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v7 )
    {
      while ( (unsigned int)i < v7 - 1 )
      {
        *(_QWORD *)(v5 + 8 * i) = *(_QWORD *)(v5 + 8LL * (unsigned int)(i + 1));
        i = (unsigned int)(i + 1);
        v7 = *((_DWORD *)this + 10);
      }
      *((_DWORD *)this + 10) = v7 - 1;
    }
    CWindowAssociationMapEntry::`scalar deleting destructor'(v6, v7);
    return 0;
  }
  return v3;
}
