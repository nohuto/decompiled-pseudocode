/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x18006C730
 * Callers:
 *     <none>
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18009B46C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v11; // r10d
  struct tagRECT *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  char IsEmpty; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  char v22; // al
  __int64 v23; // rdx
  char v24; // r8
  unsigned int top; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 36)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 37) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x1D2u);
      goto LABEL_9;
    }
  }
  if ( !*((_DWORD *)this + 14) )
    goto LABEL_9;
  if ( *((_BYTE *)this + 196) || *((_DWORD *)this + 48) != *((_DWORD *)this + 22) )
  {
    *((_DWORD *)this + 46) = 0;
    *((_BYTE *)this + 196) = 0;
  }
  if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 36) && a2->bottom - a2->top == *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 46) = 0;
  }
  else
  {
    v11 = *((_DWORD *)this + 46);
    if ( v11 )
    {
      if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(*((_QWORD *)this + 22)) )
        goto LABEL_9;
    }
    else
    {
      *((_DWORD *)this + 47) = *((_DWORD *)this + 22);
    }
    if ( v11 >= 5 )
    {
      do
      {
        v13 = *((_QWORD *)this + 22);
        *((_DWORD *)this + 46) = v11 - 1;
        TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v13);
        IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v14);
        if ( v18 )
        {
          if ( IsEmpty )
          {
            *(_QWORD *)(v16 + 8) = 0LL;
            *(_QWORD *)v16 = 0LL;
          }
          else
          {
            *(_OWORD *)v16 = *(_OWORD *)v17;
          }
        }
        else if ( !IsEmpty )
        {
          if ( *(_DWORD *)v17 < *(_DWORD *)v16 )
            *(_DWORD *)v16 = *(_DWORD *)v17;
          v19 = *(_DWORD *)(v17 + 4);
          if ( v19 < *(_DWORD *)(v16 + 4) )
            *(_DWORD *)(v16 + 4) = v19;
          v20 = *(_DWORD *)(v17 + 8);
          if ( v20 > *(_DWORD *)(v16 + 8) )
            *(_DWORD *)(v16 + 8) = v20;
          v21 = *(_DWORD *)(v17 + 12);
          if ( v21 > *(_DWORD *)(v16 + 12) )
            *(_DWORD *)(v16 + 12) = v21;
        }
        v11 = *((_DWORD *)this + 46);
      }
      while ( v11 > 1 );
      TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(*((_QWORD *)this + 22));
      v22 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2);
      if ( v24 )
      {
        if ( v22 )
        {
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)v23 = 0LL;
        }
        else
        {
          *(struct tagRECT *)v23 = *a2;
        }
      }
      else if ( !v22 )
      {
        if ( a2->left < *(_DWORD *)v23 )
          *(_DWORD *)v23 = a2->left;
        top = a2->top;
        if ( top < *(_DWORD *)(v23 + 4) )
          *(_DWORD *)(v23 + 4) = top;
        v26 = a2->right;
        if ( v26 > *(_DWORD *)(v23 + 8) )
          *(_DWORD *)(v23 + 8) = v26;
        v27 = a2->bottom;
        if ( v27 > *(_DWORD *)(v23 + 12) )
          *(_DWORD *)(v23 + 12) = v27;
      }
    }
    else
    {
      v12 = (struct tagRECT *)*((_QWORD *)this + 22);
      if ( !v12 )
      {
        v12 = (struct tagRECT *)HeapAlloc(WPF::g_processHeap, 0, 0x50uLL);
        *((_QWORD *)this + 22) = v12;
        if ( !v12 )
        {
          v4 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x214u);
          goto LABEL_9;
        }
        v11 = *((_DWORD *)this + 46);
      }
      v12[v11] = *a2;
      ++*((_DWORD *)this + 46);
    }
  }
LABEL_9:
  v7 = *((_DWORD *)this + 22);
  v8 = v7 == -1;
  v9 = v7 + 1;
  *((_DWORD *)this + 22) = v9;
  if ( v8 )
  {
    *((_DWORD *)this + 22) = 1;
    v9 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 46) = 0;
  else
    *((_DWORD *)this + 48) = v9;
  return (unsigned int)v4;
}
