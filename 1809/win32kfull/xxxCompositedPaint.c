/*
 * XREFs of xxxCompositedPaint @ 0x1C02230E0
 * Callers:
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0030A40 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F74AC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0222EE0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
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
  int v10; // edi
  __int64 EmptyRgnPublic; // rax
  HRGN v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v20; // [rsp+98h] [rbp+10h] BYREF
  struct tagPOINT v21; // [rsp+A0h] [rbp+18h] BYREF
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, (__int64)a1, 0xB10u, 1);
  v3 = xxxCompositedTraverse(a1, v2);
  SetOrClrWF(0, (__int64)a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v5 = Prop;
  if ( Prop )
  {
    v6 = (struct tagRECT *)&Prop[1];
    v7 = IsRectEmptyInl(Prop + 1);
    v10 = v7;
    if ( !v3 && !v7 )
    {
      EmptyRgnPublic = *(_QWORD *)&v5[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(v9, v8), (*(_QWORD *)&v5[2].right = EmptyRgnPublic) != 0LL) )
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
      v10 = 1;
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
    v12 = *(HRGN *)&v5[2].right;
    if ( v12 )
    {
      xxxInternalInvalidate(a1, v12, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v5[2].right);
      *(_QWORD *)&v5[2].right = 0LL;
    }
    if ( !v10 )
    {
      v13 = *(_QWORD *)&v5->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v21 = 0LL;
        v14 = GreSelectBitmap(ghdcMem, v13);
        v15 = (_DWORD *)*((_QWORD *)a1 + 5);
        v16 = v14;
        v20.cx = v15[24] - v15[22];
        v20.cy = v15[25] - v15[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v15,
          0LL,
          0LL,
          &v20,
          ghdcMem,
          &v21,
          0,
          0LL,
          0x40000000u,
          v6);
        v17 = v16;
      }
      else
      {
        v18 = GreSelectBitmap(ghdcMem, v13);
        SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
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
        SetOrClrWF(1, (__int64)a1, 0xB20u, 1);
        v17 = v18;
      }
      GreSelectBitmap(ghdcMem, v17);
      *(_QWORD *)&v6->left = 0LL;
      *(_QWORD *)&v6->right = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
}
