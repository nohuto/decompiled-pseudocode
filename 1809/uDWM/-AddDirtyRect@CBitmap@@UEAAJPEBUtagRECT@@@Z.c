/*
 * XREFs of ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x1800B2870
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::AddDirtyRect(CBitmap *this, const struct tagRECT *a2)
{
  int v4; // esi
  LONG right; // eax
  LONG bottom; // eax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int left; // edx
  unsigned int *v10; // rax
  unsigned int v11; // r10d
  unsigned int top; // r9d
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  unsigned int *v15; // rdx
  int v16; // r9d
  unsigned int v17; // r8d
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int *v22; // rcx
  int v23; // r8d
  unsigned int v24; // edx
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  bool v31; // zf
  int v32; // eax

  v4 = 0;
  if ( a2 )
  {
    if ( a2->left < 0
      || a2->top < 0
      || (right = a2->right, right <= a2->left)
      || (unsigned int)right > *((_DWORD *)this + 40)
      || (bottom = a2->bottom, bottom <= a2->top)
      || (unsigned int)bottom > *((_DWORD *)this + 41) )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
      goto LABEL_71;
    }
  }
  if ( !*((_DWORD *)this + 14) )
    goto LABEL_71;
  if ( *((_BYTE *)this + 212) || *((_DWORD *)this + 52) != *((_DWORD *)this + 36) )
  {
    *((_DWORD *)this + 50) = 0;
    *((_BYTE *)this + 212) = 0;
  }
  if ( !a2 || a2->right - a2->left == *((_DWORD *)this + 40) && a2->bottom - a2->top == *((_DWORD *)this + 41) )
  {
    *((_DWORD *)this + 50) = 0;
    goto LABEL_71;
  }
  v7 = *((_DWORD *)this + 50);
  if ( v7 )
  {
    v8 = a2->right;
    left = a2->left;
    v10 = (unsigned int *)*((_QWORD *)this + 24);
    if ( v8 <= left )
      goto LABEL_71;
    v11 = a2->bottom;
    top = a2->top;
    if ( v11 <= top || left >= *v10 && top >= v10[1] && v8 <= v10[2] && v11 <= v10[3] )
      goto LABEL_71;
  }
  else
  {
    *((_DWORD *)this + 51) = *((_DWORD *)this + 36);
  }
  if ( v7 < 5 )
  {
    v29 = *((_QWORD *)this + 24);
    if ( !v29 )
    {
      v29 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              80LL);
      *((_QWORD *)this + 24) = v29;
      if ( !v29 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x205u);
        goto LABEL_71;
      }
      v7 = *((_DWORD *)this + 50);
    }
    *(struct tagRECT *)(v29 + 16LL * v7) = *a2;
    ++*((_DWORD *)this + 50);
  }
  else
  {
    do
    {
      v13 = v7 - 1;
      v14 = (unsigned int *)*((_QWORD *)this + 24);
      *((_DWORD *)this + 50) = v13;
      v15 = &v14[4 * v13];
      if ( v14[2] <= *v14 || (v16 = 0, v14[3] <= v14[1]) )
        v16 = 1;
      v17 = *v15;
      if ( v15[2] <= *v15 || (v18 = 0, v15[3] <= v15[1]) )
        v18 = 1;
      if ( v16 )
      {
        if ( v18 )
        {
          *((_QWORD *)v14 + 1) = 0LL;
          *(_QWORD *)v14 = 0LL;
        }
        else
        {
          *(_OWORD *)v14 = *(_OWORD *)v15;
        }
      }
      else if ( !v18 )
      {
        if ( v17 < *v14 )
          *v14 = v17;
        v19 = v15[1];
        if ( v19 < v14[1] )
          v14[1] = v19;
        v20 = v15[2];
        if ( v20 > v14[2] )
          v14[2] = v20;
        v21 = v15[3];
        if ( v21 > v14[3] )
          v14[3] = v21;
      }
      v7 = *((_DWORD *)this + 50);
    }
    while ( v7 > 1 );
    v22 = (unsigned int *)*((_QWORD *)this + 24);
    if ( v22[2] <= *v22 || (v23 = 0, v22[3] <= v22[1]) )
      v23 = 1;
    v24 = a2->left;
    if ( a2->right <= (unsigned int)a2->left || (v25 = 0, a2->bottom <= (unsigned int)a2->top) )
      v25 = 1;
    if ( v23 )
    {
      if ( v25 )
      {
        *((_QWORD *)v22 + 1) = 0LL;
        *(_QWORD *)v22 = 0LL;
      }
      else
      {
        *(struct tagRECT *)v22 = *a2;
      }
    }
    else if ( !v25 )
    {
      if ( v24 < *v22 )
        *v22 = v24;
      v26 = a2->top;
      if ( v26 < v22[1] )
        v22[1] = v26;
      v27 = a2->right;
      if ( v27 > v22[2] )
        v22[2] = v27;
      v28 = a2->bottom;
      if ( v28 > v22[3] )
        v22[3] = v28;
    }
  }
LABEL_71:
  v30 = *((_DWORD *)this + 36);
  v31 = v30 == -1;
  v32 = v30 + 1;
  *((_DWORD *)this + 36) = v32;
  if ( v31 )
  {
    *((_DWORD *)this + 36) = 1;
    v32 = 1;
  }
  if ( v4 < 0 )
    *((_DWORD *)this + 50) = 0;
  else
    *((_DWORD *)this + 52) = v32;
  return (unsigned int)v4;
}
