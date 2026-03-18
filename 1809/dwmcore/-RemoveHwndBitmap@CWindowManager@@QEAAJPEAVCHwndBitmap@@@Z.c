/*
 * XREFs of ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152568
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x180076A98 (--1CHwndBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18005B468 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800683AC (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18009135C (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180095D24 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct CWindowAssociationMapEntry *v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 12), &v13);
  if ( Entry >= 0 )
  {
    v5 = v13;
    CPtrArrayBase::Remove((struct CWindowAssociationMapEntry *)((char *)v13 + 16), (__int64)a2);
    v6 = CHwndBitmap::SetVisual(a2, 0LL);
    Entry = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xEAu);
    }
    else if ( !*((_QWORD *)v5 + 1) )
    {
      v8 = *((_QWORD *)v5 + 2);
      if ( (v8 & 2) != 0 )
        v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v9 = *((_QWORD *)v5 + 2) & 1LL;
      if ( !v9 )
      {
        v10 = CWindowManager::RemoveEntry(this, *((_QWORD *)a2 + 12));
        Entry = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xF2u);
      }
    }
  }
  return (unsigned int)Entry;
}
