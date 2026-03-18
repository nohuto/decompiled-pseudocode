/*
 * XREFs of xxxCompositedPaint @ 0x1C023B074
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C003B200 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C003B950 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     UpdateSprite @ 0x1C00311F0 (UpdateSprite.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023AE40 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v6; // rbx
  struct tagRECT *v7; // r14
  BOOL v8; // eax
  int v9; // edi
  __int64 EmptyRgnPublic; // rax
  HRGN v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v19; // [rsp+98h] [rbp+10h] BYREF
  struct tagPOINT v20; // [rsp+A0h] [rbp+18h] BYREF
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, (__int64)a1, 0xB10u, 1);
  v4 = xxxCompositedTraverse(a1, v2, v3);
  SetOrClrWF(0, (__int64)a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v6 = Prop;
  if ( Prop )
  {
    v7 = (struct tagRECT *)&Prop[1];
    v8 = IsRectEmptyInl(Prop + 1);
    v9 = v8;
    if ( !v4 && !v8 )
    {
      EmptyRgnPublic = *(_QWORD *)&v6[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v6[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v7);
          GreCombineRgn(*(_QWORD *)&v6[2].right, *(_QWORD *)&v6[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v6[2].right = 1LL;
      }
      v9 = 1;
      *(_QWORD *)&v7->left = 0LL;
      *(_QWORD *)&v7->right = 0LL;
    }
    v11 = *(HRGN *)&v6[2].right;
    if ( v11 )
    {
      xxxInternalInvalidate(a1, v11, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v6[2].right);
      *(_QWORD *)&v6[2].right = 0LL;
    }
    if ( !v9 )
    {
      v12 = *(_QWORD *)&v6->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v19 = 0LL;
        v20 = 0LL;
        v13 = GreSelectBitmap(ghdcMem, v12);
        v14 = (_DWORD *)*((_QWORD *)a1 + 5);
        v15 = v13;
        v19.cx = v14[24] - v14[22];
        v19.cy = v14[25] - v14[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v14,
          0LL,
          0LL,
          &v19,
          ghdcMem,
          &v20,
          0,
          0LL,
          0x40000000u,
          v7);
        v16 = v15;
      }
      else
      {
        v17 = GreSelectBitmap(ghdcMem, v12);
        SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v7->left,
          v7->top,
          v7->right - v7->left,
          v7->bottom - v7->top,
          ghdcMem,
          v7->left,
          v7->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, (__int64)a1, 0xB20u, 1);
        v16 = v17;
      }
      GreSelectBitmap(ghdcMem, v16);
      *(_QWORD *)&v7->left = 0LL;
      *(_QWORD *)&v7->right = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
}
