/*
 * XREFs of ?FindAdjacentBlocksOnFreeList@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@PEAPEAU2@1@Z @ 0x1C0060EDC
 * Callers:
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0060E00 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007E6C0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::FindAdjacentBlocksOnFreeList(
        VIDMM_LINEAR_POOL *this,
        struct _VIDMM_POOL_BLOCK *a2,
        struct _VIDMM_POOL_BLOCK **a3,
        struct _VIDMM_POOL_BLOCK **a4)
{
  char *v4; // rax
  __int64 v6; // rdi
  char *v7; // r8
  char *v8; // rdx
  char v9; // bl
  __int64 v10; // r11
  char v11; // dl
  VIDMM_LINEAR_POOL *v12; // rdx
  struct _VIDMM_POOL_BLOCK *v13; // r8
  __int64 v14; // rdx
  struct _VIDMM_POOL_BLOCK *v15; // r8
  bool v16; // zf
  struct _VIDMM_POOL_BLOCK *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax

  v4 = (char *)*((_QWORD *)a2 + 5);
  v6 = *((_QWORD *)a2 + 6);
  v7 = (char *)this + 72;
  while ( v4 != v7 && (char *)v6 != v7 )
  {
    v8 = v4 - 40;
    v4 = *(char **)v4;
    v9 = v8[56];
    v10 = v6 - 40;
    v6 = *(_QWORD *)(v6 + 8);
    if ( v9 != 3 && (unsigned __int8)(v9 - 5) > 2u )
    {
      *a4 = (struct _VIDMM_POOL_BLOCK *)v8;
      v14 = *((_QWORD *)v8 + 4);
      v15 = 0LL;
      v16 = v14 == (_QWORD)this + 40;
      v17 = (struct _VIDMM_POOL_BLOCK *)(v14 - 24);
      goto LABEL_12;
    }
    v11 = *(_BYTE *)(v10 + 56);
    if ( v11 != 3 && (unsigned __int8)(v11 - 5) > 2u )
    {
      v12 = *(VIDMM_LINEAR_POOL **)(v10 + 24);
      v13 = 0LL;
      *a3 = (struct _VIDMM_POOL_BLOCK *)v10;
      if ( v12 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        v13 = (VIDMM_LINEAR_POOL *)((char *)v12 - 24);
      goto LABEL_9;
    }
  }
  v18 = (_QWORD *)((char *)this + 40);
  if ( v4 == v7 )
  {
    v19 = (_QWORD *)*((_QWORD *)this + 6);
    v15 = 0LL;
    *a4 = 0LL;
    v16 = v19 == v18;
    v17 = (struct _VIDMM_POOL_BLOCK *)(v19 - 3);
LABEL_12:
    if ( !v16 )
      v15 = v17;
    *a3 = v15;
  }
  else
  {
    v20 = (_QWORD *)*v18;
    v13 = 0LL;
    *a3 = 0LL;
    if ( v20 == v18 )
    {
LABEL_9:
      *a4 = v13;
      return;
    }
    *a4 = (struct _VIDMM_POOL_BLOCK *)(v20 - 3);
  }
}
