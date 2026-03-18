/*
 * XREFs of xxxCompositedPaint @ 0x1C023B694
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C009A430 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009AB80 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023B460 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v7; // rbx
  struct tagRECT *v8; // r14
  BOOL v9; // eax
  int v10; // edi
  __int64 EmptyRgnPublic; // rax
  HRGN v12; // rdx
  _DWORD *v13; // r8
  HDC DCEx; // rdi
  struct tagSIZE v15; // [rsp+98h] [rbp+10h] BYREF
  struct tagPOINT v16; // [rsp+A0h] [rbp+18h] BYREF
  char v17; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, (__int64)a1, 0xB10u, 1);
  v5 = xxxCompositedTraverse(a1, v2, v3, v4);
  SetOrClrWF(0, (__int64)a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v7 = Prop;
  if ( Prop )
  {
    v8 = (struct tagRECT *)&Prop[1];
    v9 = IsRectEmptyInl(Prop + 1);
    v10 = v9;
    if ( !v5 && !v9 )
    {
      EmptyRgnPublic = *(_QWORD *)&v7[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v7[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v8);
          GreCombineRgn(*(_QWORD *)&v7[2].right, *(_QWORD *)&v7[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v7[2].right = 1LL;
      }
      v10 = 1;
      *(_QWORD *)&v8->left = 0LL;
      *(_QWORD *)&v8->right = 0LL;
    }
    v12 = *(HRGN *)&v7[2].right;
    if ( v12 )
    {
      xxxInternalInvalidate(a1, v12, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v7[2].right);
      *(_QWORD *)&v7[2].right = 0LL;
    }
    if ( !v10 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v15 = 0LL;
        v16 = 0LL;
        GreSelectBitmap(ghdcMem);
        v13 = (_DWORD *)*((_QWORD *)a1 + 5);
        v15.cx = v13[24] - v13[22];
        v15.cy = v13[25] - v13[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v13,
          0LL,
          0LL,
          &v15,
          ghdcMem,
          &v16,
          0,
          0LL,
          0x40000000u,
          v8);
      }
      else
      {
        GreSelectBitmap(ghdcMem);
        SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v8->left,
          v8->top,
          v8->right - v8->left,
          v8->bottom - v8->top,
          ghdcMem,
          v8->left,
          v8->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, (__int64)a1, 0xB20u, 1);
      }
      GreSelectBitmap(ghdcMem);
      *(_QWORD *)&v8->left = 0LL;
      *(_QWORD *)&v8->right = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
}
