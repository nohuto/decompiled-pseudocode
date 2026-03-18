/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0120640
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1C01207C8 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1C0167F50 (-ValidateGlyphBitsBuffer@@YA_NKJJKK@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void __fastcall QueryFontDataRequest::CaptureUsermodeParameters(QueryFontDataRequest *this, _QWORD *a2)
{
  struct _FONTOBJ *v3; // rax
  _OWORD *v4; // rdi
  const void *v5; // r14
  int v6; // esi
  _OWORD *v7; // rax
  const void **v8; // rcx
  void *v9; // rcx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // r10d
  unsigned int v15; // r9d
  unsigned int v16; // r9d

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
        *v8 = (const void *)*((_QWORD *)this + 9);
      else
        *v8 = 0LL;
    }
    else if ( v4 )
    {
      return;
    }
    v9 = (void *)*((_QWORD *)this + 9);
    if ( !v9 )
      goto LABEL_26;
    v10 = *((_DWORD *)this + 20);
    if ( !v10 )
      goto LABEL_26;
    v11 = *((_DWORD *)this + 12);
    if ( v11 == 2 )
      goto LABEL_26;
    if ( v6 <= v10 && (v11 != 3 || v6 == 124) )
    {
      memmove(v9, v5, *((unsigned int *)this + 20));
      v12 = *((_DWORD *)this + 12);
      if ( v12 != 3 )
      {
        v13 = (_DWORD *)*((_QWORD *)this + 8);
        if ( v13 )
        {
          v14 = v13[10] - v13[8];
          v15 = 0;
          if ( v12 == 5 )
          {
            v16 = ((unsigned int)(v14 + 7) >> 3) + 3;
          }
          else
          {
            if ( v12 != 6 && (unsigned int)(v12 - 8) > 1 )
            {
LABEL_25:
              if ( !ValidateGlyphBitsBuffer(*((_DWORD *)this + 20), v14, v13[11] - v13[9], v15, 0) )
                return;
              goto LABEL_26;
            }
            v16 = v14 + 3;
          }
          v15 = v16 & 0xFFFFFFFC;
          goto LABEL_25;
        }
      }
LABEL_26:
      *((_DWORD *)this + 21) = v6;
    }
  }
}
