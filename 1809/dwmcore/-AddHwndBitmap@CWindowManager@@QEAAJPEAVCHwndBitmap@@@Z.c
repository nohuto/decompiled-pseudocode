/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152390
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x18019AAC0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18009135C (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x180095D00 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x180095D24 (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1801522BC (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  struct CWindowAssociationMapEntry *v4; // rdi
  __int64 v5; // r8
  unsigned __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-28h]
  unsigned int v23; // [rsp+20h] [rbp-28h]
  struct CWindowAssociationMapEntry *v24; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp+18h] BYREF

  v24 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, *((_QWORD *)a2 + 12), &v24) < 0 )
  {
    v10 = CWindowAssociationMapEntry::operator new();
    v12 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[2] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v24 = (struct CWindowAssociationMapEntry *)v12;
    if ( !v12 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xC3u);
      return v9;
    }
    *v12 = *((_QWORD *)a2 + 12);
    v13 = v12[2];
    if ( (v13 & 2) != 0 )
      v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v14 = v12[2] & 1LL;
    v15 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v12 + 2), (unsigned __int64)a2, v14);
    v9 = v15;
    if ( v15 < 0 )
    {
      v23 = 198;
    }
    else
    {
      v15 = CHwndBitmap::SetVisual(a2, 0LL);
      v9 = v15;
      if ( v15 >= 0 )
      {
        v17 = *((_DWORD *)this + 10);
        v25 = v12;
        v18 = v17 + 1;
        v9 = v17 + 1 < v17 ? 0x80070216 : 0;
        if ( v17 + 1 < v17 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v9, 0xB5u);
        }
        else if ( v18 > *((_DWORD *)this + 9) )
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &v25);
          v9 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0xC0u);
        }
        else
        {
          v19 = v17;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v17) = v25;
          *((_DWORD *)this + 10) = v18;
        }
        if ( (v9 & 0x80000000) == 0 )
          return v9;
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v9, 0xC9u);
LABEL_32:
        SAFE_DELETE<CWindowAssociationMapEntry>(&v24);
        return v9;
      }
      v23 = 199;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v23);
    goto LABEL_32;
  }
  v4 = v24;
  v5 = *((_QWORD *)v24 + 2);
  if ( (v5 & 2) != 0 )
    v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v6 = *((_QWORD *)v24 + 2) & 1LL;
  v7 = CPtrArrayBase::InsertAt((struct CWindowAssociationMapEntry *)((char *)v24 + 16), (unsigned __int64)a2, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 189;
    goto LABEL_9;
  }
  v7 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v4 + 1));
  v9 = v7;
  if ( v7 < 0 )
  {
    v22 = 190;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v22);
  }
  return v9;
}
