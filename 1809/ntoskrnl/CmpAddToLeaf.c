/*
 * XREFs of CmpAddToLeaf @ 0x1405AFEC0
 * Callers:
 *     CmpAddSubKeyToList @ 0x1405AFCF4 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1405B0420 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     CmpCompareInIndex @ 0x1405D61D0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpAddToLeaf(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // r15d
  __int64 v7; // rax
  _WORD *v8; // rbx
  unsigned __int16 v9; // ax
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  _WORD *v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // r14
  int v15; // eax
  int v16; // ecx
  size_t v17; // r8
  _WORD *v18; // rdx
  _WORD *v19; // rcx
  int FastLeafHintForUnicodeString; // eax
  int v22; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+40h] [rbp-10h] BYREF

  v24[0] = 0xFFFFFFFFLL;
  v4 = BugCheckParameter3;
  v6 = 0;
  if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, BugCheckParameter3) )
    return 0xFFFFFFFFLL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, v24);
  v8 = (_WORD *)v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = *(_WORD *)(v7 + 2);
  if ( v9 == 0xFFFF )
    goto LABEL_33;
  v10 = -4 - *((_DWORD *)v8 - 1);
  if ( *v8 == 26988 )
  {
    v11 = 4;
    v12 = 0LL;
    v13 = v10 - 4 * v9 - 4;
  }
  else
  {
    v12 = v8;
    v11 = 8;
    v13 = v10 - 8 * v9 - 4;
  }
  v6 = v4;
  if ( v13 < v11 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
    v23 = 0LL;
    if ( (v10 >> 1) + v10 >= v10 + v11 )
      v11 = v10 >> 1;
    v6 = HvReallocateCell(BugCheckParameter2, v4, v10 + v11, 0, (__int64 *)&v23, v24);
    if ( v6 == -1 )
      return 0xFFFFFFFFLL;
    v8 = v23;
    if ( v12 )
      v12 = v23;
  }
  CmpFindSubKeyInLeafWithStatus(BugCheckParameter2, (_DWORD)v8, a4, 0, (__int64)&v22, (__int64)&v23);
  v14 = (unsigned int)v23;
  if ( (int)v23 < 0 || v22 != -1 )
  {
LABEL_33:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
    if ( v6 != v4 )
      HvFreeCell(BugCheckParameter2, v6);
    return 0xFFFFFFFFLL;
  }
  if ( (_DWORD)v23 != (unsigned __int16)v8[1] )
  {
    v15 = CmpCompareInIndex(BugCheckParameter2, a4, 0, (_DWORD)v23, (__int64)v8, (__int64)&v22);
    if ( v15 != 2 )
    {
      if ( v15 > 0 )
        v14 = (unsigned int)(v14 + 1);
      v16 = (unsigned __int16)v8[1];
      if ( (_DWORD)v14 != v16 )
      {
        if ( v12 )
        {
          v17 = 8LL * ((unsigned __int16)v12[1] - (unsigned int)v14);
          v18 = &v12[4 * v14 + 2];
          v19 = &v12[4 * (unsigned int)(v14 + 1) + 2];
        }
        else
        {
          v17 = 4LL * (unsigned int)(v16 - v14);
          v18 = &v8[2 * (unsigned int)v14 + 2];
          v19 = &v8[2 * (unsigned int)(v14 + 1) + 2];
        }
        memmove(v19, v18, v17);
      }
      goto LABEL_24;
    }
    goto LABEL_33;
  }
LABEL_24:
  if ( v12 )
  {
    *(_DWORD *)&v12[4 * v14 + 2] = a3;
    if ( *v12 == 26732 )
      FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
    else
      FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
    *(_DWORD *)&v12[4 * v14 + 4] = FastLeafHintForUnicodeString;
  }
  else
  {
    *(_DWORD *)&v8[2 * v14 + 2] = a3;
  }
  ++v8[1];
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v24);
  if ( v6 != v4 )
    HvFreeCell(BugCheckParameter2, v4);
  return v6;
}
