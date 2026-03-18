/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0082A70
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C0082EA4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall QueryFontDataRequest::CaptureUsermodeParameters(QueryFontDataRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rdi
  const void *v5; // r14
  int v6; // esi
  _OWORD *v7; // rax
  const void **v8; // rcx
  const void *v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // edx
  int v15; // r11d
  __int64 v16; // rcx
  unsigned int v17; // r10d
  __int64 v18; // rax
  int v19; // ecx
  _DWORD *v20; // r9
  unsigned int v21; // ecx
  unsigned __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax

  v3 = (struct _FONTOBJ *)a2[2];
  v4 = (_OWORD *)a2[3];
  v5 = (const void *)a2[4];
  v6 = *((_DWORD *)a2 + 11);
  if ( v3 == *((struct _FONTOBJ **)this + 11)
    && FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 7), v3)
    && v6 >= 0
    && v5 == *((const void **)this + 13) )
  {
    v7 = (_OWORD *)*((_QWORD *)this + 8);
    if ( v7 )
    {
      if ( v4 != *((_OWORD **)this + 12) )
        return;
      *v7 = *v4;
      v7[1] = v4[1];
      v7[2] = v4[2];
      v7[3] = v4[3];
      v8 = (const void **)*((_QWORD *)this + 8);
      if ( *v8 == v5 )
        v9 = (const void *)*((_QWORD *)this + 9);
      else
        v9 = 0LL;
      *v8 = v9;
    }
    else if ( v4 )
    {
      return;
    }
    if ( !*((_QWORD *)this + 9) )
      goto LABEL_43;
    v10 = *((_DWORD *)this + 20);
    if ( !v10 )
      goto LABEL_43;
    v11 = *((_DWORD *)this + 12);
    if ( v11 == 2 )
      goto LABEL_43;
    if ( v6 > v10 )
      return;
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 2 && v6 != 124 )
        return;
    }
    else if ( (unsigned int)v6 < 0x14 )
    {
      return;
    }
    memmove(*((void **)this + 9), v5, *((unsigned int *)this + 20));
    v13 = *((_DWORD *)this + 12);
    if ( v13 == 3 )
    {
LABEL_43:
      *((_DWORD *)this + 21) = v6;
      return;
    }
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    if ( v13 == 1 )
    {
      v18 = *((_QWORD *)this + 9);
      v14 = *(_DWORD *)(v18 + 8);
      v15 = *(_DWORD *)(v18 + 12);
      v19 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
      if ( (v19 & 0x10000) != 0 )
      {
        if ( (v19 & 0x10000000) != 0 )
          v16 = (unsigned int)v14;
        else
          v16 = (unsigned int)(v14 + 1) >> 1;
      }
      else
      {
        v16 = (unsigned int)(v14 + 7) >> 3;
      }
      v17 = 16;
LABEL_36:
      if ( (_DWORD)v16 )
      {
        if ( v14 < 0 )
          return;
        if ( v15 < 0 )
          return;
        v22 = (unsigned int)v15 * v16;
        if ( v22 > 0xFFFFFFFF )
          return;
        v23 = (v22 + 3) & 0xFFFFFFFC;
        if ( v23 < (unsigned int)v22 )
          return;
        v24 = v17 + v23;
        if ( v24 < v17 || v24 > *((_DWORD *)this + 20) )
          return;
      }
      goto LABEL_43;
    }
    v20 = (_DWORD *)*((_QWORD *)this + 8);
    if ( !v20 )
      goto LABEL_36;
    v14 = v20[10] - v20[8];
    v15 = v20[11] - v20[9];
    if ( v13 == 5 )
    {
      v21 = ((unsigned int)(v14 + 7) >> 3) + 3;
    }
    else
    {
      if ( ((v13 - 6) & 0xFFFFFFFC) != 0 || v13 == 7 )
        goto LABEL_36;
      v21 = v14 + 3;
    }
    v16 = v21 & 0xFFFFFFFC;
    goto LABEL_36;
  }
}
