/*
 * XREFs of ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801A9C70
 * Callers:
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_HWNDBITMAP@@@Z @ 0x180214EA0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_HWNDBITMAP@@@Z.c)
 * Callees:
 *     ??2CWindowAssociationMapEntry@@SAPEAX_K@Z @ 0x18004D248 (--2CWindowAssociationMapEntry@@SAPEAX_K@Z.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18004D26C (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18007BAC4 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800AE1DC (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1801A9B9C (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 */

__int64 __fastcall CWindowManager::AddHwndBitmap(CWindowManager *this, struct CHwndBitmap *a2)
{
  __int64 v3; // rdx
  struct CWindowAssociationMapEntry *v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // r8
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rcx
  signed int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-28h]
  unsigned int v24; // [rsp+20h] [rbp-28h]
  struct CWindowAssociationMapEntry *v25; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((_QWORD *)a2 + 12);
  v25 = 0LL;
  if ( (int)CWindowManager::FindEntry(this, v3, &v25) < 0 )
  {
    v11 = CWindowAssociationMapEntry::operator new();
    v13 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v25 = (struct CWindowAssociationMapEntry *)v13;
    if ( !v13 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0xB6u, 0LL);
      return v10;
    }
    *v13 = *((_QWORD *)a2 + 12);
    v14 = v13[2];
    if ( (v14 & 2) != 0 )
      v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v15 = v13[2] & 1LL;
    v16 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(v13 + 2), (unsigned __int64)a2, v15);
    v10 = v16;
    if ( v16 < 0 )
    {
      v24 = 185;
    }
    else
    {
      v16 = CHwndBitmap::SetVisual(a2, 0LL);
      v10 = v16;
      if ( v16 >= 0 )
      {
        v18 = *((unsigned int *)this + 10);
        v26 = v13;
        v19 = v18 + 1;
        if ( (int)v18 + 1 >= (unsigned int)v18 )
        {
          if ( v19 <= *((_DWORD *)this + 9) )
          {
            v10 = 0;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v18) = v26;
            *((_DWORD *)this + 10) = v19;
            return v10;
          }
          v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &v26);
          v10 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21, 0xC3u, 0LL);
        }
        else
        {
          v10 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        }
        if ( (v10 & 0x80000000) == 0 )
          return v10;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v10, 0xBCu, 0LL);
LABEL_32:
        SAFE_DELETE<CWindowAssociationMapEntry>(&v25);
        return v10;
      }
      v24 = 186;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v24, 0LL);
    goto LABEL_32;
  }
  v5 = v25;
  v6 = *((_QWORD *)v25 + 2);
  if ( (v6 & 2) != 0 )
    v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v7 = *((_QWORD *)v25 + 2) & 1LL;
  v8 = CPtrArrayBase::InsertAt((struct CWindowAssociationMapEntry *)((char *)v25 + 16), (unsigned __int64)a2, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    v23 = 176;
    goto LABEL_9;
  }
  v8 = CHwndBitmap::SetVisual(a2, *((struct CVisual **)v5 + 1));
  v10 = v8;
  if ( v8 < 0 )
  {
    v23 = 177;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v23, 0LL);
  }
  return v10;
}
