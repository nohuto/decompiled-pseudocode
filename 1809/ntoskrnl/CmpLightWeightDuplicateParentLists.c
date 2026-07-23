/*
 * XREFs of CmpLightWeightDuplicateParentLists @ 0x14080512C
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x14080505C (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDuplicateIndex @ 0x1407FFC98 (CmpDuplicateIndex.c)
 *     CmpMarkEntireIndexDirty @ 0x140800E84 (CmpMarkEntireIndexDirty.c)
 */

__int64 __fastcall CmpLightWeightDuplicateParentLists(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v7; // esi
  _DWORD *v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int16 v14; // [rsp+44h] [rbp+Ch]
  __int16 v15; // [rsp+46h] [rbp+Eh]

  v15 = 0;
  v13 = -1;
  v14 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v13);
  v6 = 0;
  if ( !v5 )
    return (unsigned int)-1073741670;
  v7 = 0;
  v8 = (_DWORD *)(a3 + 12);
  v9 = v5 - a3;
  while ( 1 )
  {
    v10 = *(_DWORD *)((char *)v8 + v9 + 16);
    if ( v10 == -1 )
      goto LABEL_8;
    if ( !CmpMarkEntireIndexDirty(BugCheckParameter2, v10) )
      break;
    v11 = CmpDuplicateIndex(BugCheckParameter2, v10, v7);
    *v8 = v11;
    if ( v11 == -1 )
    {
      v6 = -1073741670;
      goto LABEL_12;
    }
    *(v8 - 2) = *(_DWORD *)((char *)v8 + v9 + 8);
LABEL_8:
    ++v7;
    ++v8;
    if ( v7 >= 2 )
      goto LABEL_12;
  }
  v6 = -1073741443;
LABEL_12:
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v13);
  return v6;
}
