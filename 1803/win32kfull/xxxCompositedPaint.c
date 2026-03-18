/*
 * XREFs of xxxCompositedPaint @ 0x1C01FAF90
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0064D10 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UpdateSprite @ 0x1C007B160 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C01FADEC (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  __int64 v2; // rdx
  int v3; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v5; // rbx
  struct tagRECT *v6; // r14
  BOOL v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edi
  __int64 EmptyRgnPublic; // rax
  HRGN v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  _DWORD *v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v22; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v23; // [rsp+98h] [rbp+10h] BYREF
  char v24; // [rsp+A0h] [rbp+18h] BYREF

  SetOrClrWF(1, (__int64)a1, 2832, 1);
  v3 = xxxCompositedTraverse(a1, v2);
  SetOrClrWF(0, (__int64)a1, 2832, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
  Prop = (const struct tagRECT *)RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomLayer, 1LL);
  v5 = Prop;
  if ( Prop )
  {
    v6 = (struct tagRECT *)&Prop[1];
    v7 = IsRectEmptyInl(Prop + 1);
    v12 = v7;
    if ( !v3 && !v7 )
    {
      EmptyRgnPublic = *(_QWORD *)&v5[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(v9, v8, v10, v11), (*(_QWORD *)&v5[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v6);
          GreCombineRgn(*(_QWORD *)&v5[2].right, *(_QWORD *)&v5[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v5[2].right = 1LL;
      }
      v12 = 1;
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
    v14 = *(HRGN *)&v5[2].right;
    if ( v14 )
    {
      xxxInternalInvalidate(a1, v14, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v5[2].right);
      *(_QWORD *)&v5[2].right = 0LL;
    }
    if ( !v12 )
    {
      v15 = *(_QWORD *)&v5->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v23 = 0LL;
        v16 = GreSelectBitmap(ghdcMem, v15);
        v17 = (_DWORD *)*((_QWORD *)a1 + 5);
        v18 = v16;
        v22.cx = v17[24] - v17[22];
        v22.cy = v17[25] - v17[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v17,
          0LL,
          0LL,
          &v22,
          ghdcMem,
          &v23,
          0,
          0LL,
          0x40000000u,
          v6);
        v19 = v18;
      }
      else
      {
        v20 = GreSelectBitmap(ghdcMem, v15);
        SetOrClrWF(0, (__int64)a1, 2848, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v6->left,
          v6->top,
          v6->right - v6->left,
          v6->bottom - v6->top,
          ghdcMem,
          v6->left,
          v6->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, (__int64)a1, 2848, 1);
        v19 = v20;
      }
      GreSelectBitmap(ghdcMem, v19);
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
}
