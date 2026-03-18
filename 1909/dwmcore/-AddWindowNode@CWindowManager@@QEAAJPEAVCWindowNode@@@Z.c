/*
 * XREFs of ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18004D160
 * Callers:
 *     ?WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z @ 0x18004CF00 (-WindowManagerAddRemove@CWindowNode@@AEAAJ_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x18004D248 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18004D26C (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800AE1DC (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1801A9B9C (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddWindowNode(CWindowManager *this, struct CWindowNode *a2)
{
  unsigned __int64 v4; // rcx
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rax
  struct CWindowAssociationMapEntry *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v11; // eax
  unsigned int v12; // ecx
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
      v17 = (CHwndBitmap *)CPtrArrayBase::operator[]((__int64 *)v13 + 2, i);
      v18 = CHwndBitmap::SetVisual(v17, a2);
      Entry = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x56u, 0LL);
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
    if ( !v7 )
    {
      Entry = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x5Eu, 0LL);
      return (unsigned int)Entry;
    }
    *(_QWORD *)v7 = *((_QWORD *)a2 + 80);
    *((_QWORD *)v7 + 1) = a2;
    v8 = *((_DWORD *)this + 10);
    v21 = v7;
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      Entry = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v9 <= *((_DWORD *)this + 9) )
      {
        Entry = 0;
        *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v8) = v21;
        *((_DWORD *)this + 10) = v9;
        return (unsigned int)Entry;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 8LL, 1LL, &v21);
      Entry = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
    }
    if ( Entry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Entry, 0x63u, 0LL);
      SAFE_DELETE<CWindowAssociationMapEntry>(&v20);
    }
  }
  return (unsigned int)Entry;
}
