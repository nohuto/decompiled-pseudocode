/*
 * XREFs of ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180095C10
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x180095FC8 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18009135C (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x180095D00 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180095D24 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1801522BC (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v4; // rcx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rax
  struct CWindowAssociationMapEntry *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  int v12; // eax
  struct CWindowAssociationMapEntry *v13; // rbp
  unsigned __int64 i; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  CHwndBitmap *v17; // rax
  int v18; // eax
  unsigned int v19; // ecx
  struct CWindowAssociationMapEntry *v20; // [rsp+58h] [rbp+10h] BYREF
  struct CWindowAssociationMapEntry *v21; // [rsp+60h] [rbp+18h] BYREF

  v20 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 80), &v20);
  if ( Entry >= 0 )
  {
    v13 = v20;
    for ( i = 0LL; ; ++i )
    {
      v15 = *((_QWORD *)v13 + 2);
      v16 = (v15 & 2) != 0 ? *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)v13 + 2) & 1LL;
      if ( i >= v16 )
        break;
      v17 = (CHwndBitmap *)CPtrArrayBase::operator[]((char *)v13 + 16, i);
      v18 = CHwndBitmap::SetVisual(v17, a2);
      Entry = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x63u);
        return (unsigned int)Entry;
      }
    }
    *((_QWORD *)v13 + 1) = a2;
  }
  else
  {
    v6 = (struct CWindowAssociationMapEntry *)CWindowAssociationMapEntry::operator new(v4);
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = 0LL;
      *((_QWORD *)v6 + 1) = 0LL;
      *((_QWORD *)v6 + 2) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    v20 = v7;
    if ( v7 )
    {
      *(_QWORD *)v7 = *((_QWORD *)a2 + 80);
      *((_QWORD *)v7 + 1) = a2;
      v8 = *((_DWORD *)this + 10);
      v21 = v7;
      v9 = v8 + 1;
      Entry = v8 + 1 < v8 ? 0x80070216 : 0;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, Entry, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)this + 9) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &v21);
        Entry = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        v10 = v8;
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v8) = v21;
        *((_DWORD *)this + 10) = v9;
      }
      if ( Entry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Entry, 0x70u);
        SAFE_DELETE<CWindowAssociationMapEntry>(&v20);
      }
    }
    else
    {
      Entry = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x6Bu);
    }
  }
  return (unsigned int)Entry;
}
