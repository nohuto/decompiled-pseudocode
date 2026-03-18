/*
 * XREFs of ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00C7F50
 * Callers:
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C00292C4 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007E6C0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C007E8C8 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::~VIDMM_LINEAR_POOL(VIDMM_LINEAR_POOL *this)
{
  char *v1; // rsi
  char *v3; // rdi
  struct _VIDMM_POOL_BLOCK *v4; // rdx
  VIDMM_LINEAR_POOL *v5; // rdi
  struct _VIDMM_POOL_BLOCK *v6; // rdx
  _QWORD *v7; // rcx
  VIDMM_LINEAR_POOL *v8; // rax
  __int64 v9; // rdx
  VIDMM_LINEAR_POOL **v10; // rcx
  VIDMM_LINEAR_POOL **v11; // r8
  struct _VIDMM_POOL_BLOCK *v12; // rdx
  VIDMM_LINEAR_POOL *v13; // rax
  void **v14; // rsi
  void *v15; // rdi
  void **v16; // rax

  v1 = (char *)this + 120;
  v3 = (char *)*((_QWORD *)this + 15);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDMM_POOL_BLOCK *)(v3 - 24);
    v3 = *(char **)v3;
    VIDMM_LINEAR_POOL::Free(this, v4);
  }
  v5 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 17);
  while ( v5 != (VIDMM_LINEAR_POOL *)((char *)this + 136) )
  {
    v6 = (VIDMM_LINEAR_POOL *)((char *)v5 - 24);
    v5 = *(VIDMM_LINEAR_POOL **)v5;
    VIDMM_LINEAR_POOL::Free(this, v6);
  }
  v7 = (_QWORD *)((char *)this + 40);
  v8 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  if ( v8 != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
  {
    if ( *((_QWORD **)v8 + 1) != v7
      || (v9 = *(_QWORD *)v8, *(VIDMM_LINEAR_POOL **)(*(_QWORD *)v8 + 8LL) != v8)
      || (*v7 = v9,
          *(_QWORD *)(v9 + 8) = v7,
          v10 = (VIDMM_LINEAR_POOL **)((char *)this + 72),
          v11 = (VIDMM_LINEAR_POOL **)*((_QWORD *)this + 9),
          v12 = (VIDMM_LINEAR_POOL *)((char *)v8 - 24),
          v11[1] != (VIDMM_LINEAR_POOL *)((char *)this + 72))
      || (v13 = *v11, *((VIDMM_LINEAR_POOL ***)*v11 + 1) != v11) )
    {
LABEL_18:
      __fastfail(3u);
    }
    *v10 = v13;
    *((_QWORD *)v13 + 1) = v10;
    VIDMM_LINEAR_POOL::FreeBlock(this, v12);
  }
  v14 = (void **)((char *)this + 104);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == v14 )
      break;
    if ( *((void ***)v15 + 1) != v14 )
      goto LABEL_18;
    v16 = *(void ***)v15;
    if ( *(void **)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_18;
    *v14 = v16;
    v16[1] = v14;
    operator delete(*((void **)v15 + 2));
    operator delete(v15);
  }
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 192));
}
