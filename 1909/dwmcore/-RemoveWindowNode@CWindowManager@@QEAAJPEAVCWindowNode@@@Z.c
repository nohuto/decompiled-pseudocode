/*
 * XREFs of ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18004B31C
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18004CF00 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x18004B3A8 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18004D26C (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800AE1DC (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v4; // rdx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rsi
  __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 i; // rdi
  unsigned __int64 v14; // rax
  CHwndBitmap *v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  struct CWindowAssociationMapEntry *v18; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 80);
  v18 = 0LL;
  Entry = CWindowManager::FindEntry(this, v2, &v18);
  if ( Entry >= 0 )
  {
    v6 = v18;
    v7 = (__int64 *)((char *)v18 + 16);
    v8 = *((_QWORD *)v18 + 2);
    if ( (v8 & 2) != 0 )
      v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v9 = *((_QWORD *)v18 + 2) & 1LL;
    if ( v9 )
    {
      for ( i = 0LL; ; ++i )
      {
        v14 = (*v7 & 2) != 0 ? *(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCuLL) : *v7 & 1;
        if ( i >= v14 )
          break;
        v15 = (CHwndBitmap *)CPtrArrayBase::operator[](v7, i);
        v16 = CHwndBitmap::SetVisual(v15, 0LL);
        Entry = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x8Bu, 0LL);
          return (unsigned int)Entry;
        }
      }
      *((_QWORD *)v6 + 1) = 0LL;
    }
    else
    {
      v10 = CWindowManager::RemoveEntry(this, v4);
      Entry = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x92u, 0LL);
    }
  }
  return (unsigned int)Entry;
}
