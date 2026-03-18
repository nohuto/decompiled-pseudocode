/*
 * XREFs of ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00C5098
 * Callers:
 *     ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00BAB60 (-Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00BC760 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00BEADC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1C007CD64 (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00C60B8 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  int v6; // r12d
  __int64 v7; // rbx
  char *v8; // r14
  char *v9; // r10
  int v10; // r9d
  __int64 *v11; // rsi
  char *v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // al
  char v18; // al
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  char **v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  char v26; // r15
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  int v32; // eax
  unsigned __int64 v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+28h] [rbp-40h]
  __int64 v35; // [rsp+78h] [rbp+10h]
  char v36; // [rsp+78h] [rbp+10h]
  int v37; // [rsp+80h] [rbp+18h]
  unsigned __int64 v38; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)a2;
  v38 = v4;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 4);
  v33 = v5;
  if ( v4 == v5 )
  {
    v7 = v35;
    goto LABEL_78;
  }
  v7 = v4;
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = (char *)*((_QWORD *)this + 10);
  }
  else
  {
    v8 = (char *)*((_QWORD *)this + 9);
  }
  v9 = (char *)this + 72;
  if ( v8 == (char *)this + 72 )
  {
LABEL_74:
    v15 = *((_QWORD *)this + 1);
    *((_QWORD *)a2 + 10) = v15;
    goto LABEL_75;
  }
  v10 = v35;
  v37 = v35;
  while ( 1 )
  {
    v11 = (__int64 *)(v8 - 40);
    v12 = v8;
    if ( v6 )
      v8 = (char *)*((_QWORD *)v8 + 1);
    else
      v8 = *(char **)v8;
    v13 = *v11;
    v14 = *v11 + v11[1];
    if ( v14 <= v4 )
    {
      if ( v6 )
        goto LABEL_12;
      goto LABEL_70;
    }
    if ( v13 >= v5 )
      break;
    v16 = *v11 + v11[1];
    if ( v6 )
      v16 = *v11;
    *((_QWORD *)a2 + 10) = v16;
    v17 = *((_BYTE *)v11 + 56);
    if ( v17 == 2 )
    {
      v10 = 2;
    }
    else
    {
      if ( v17 <= 2u )
        goto LABEL_25;
      if ( v17 <= 4u )
      {
        v18 = (*((__int64 (__fastcall **)(__int64))a2 + 4))(v11[2]);
        v4 = v38;
        v9 = (char *)this + 72;
        v5 = v33;
        v10 = v18 == 0;
      }
      else
      {
        if ( v17 > 7u )
        {
LABEL_25:
          if ( g_IsInternalRelease )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v4);
            v19[5] = 0LL;
            v19[6] = 0LL;
            v19[7] = 0LL;
            v19[3] = 270LL;
            v19[4] = 9LL;
            WdLogEvent5_WdCriticalError(v19);
            v4 = v38;
            v9 = (char *)this + 72;
            v5 = v33;
            v10 = v37;
          }
          goto LABEL_29;
        }
        v10 = 1;
      }
    }
    v37 = v10;
LABEL_29:
    if ( !v10 )
    {
      v26 = 0;
      v34 = v11[2];
      v36 = 0;
      if ( (*((unsigned __int8 (__fastcall **)(__int64, unsigned __int64, unsigned __int64))a2 + 5))(v34, v4, v5) )
      {
        if ( v6 )
        {
          if ( v7 - v11[1] >= v14 )
            goto LABEL_53;
          if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
          {
            v7 = v14;
            goto LABEL_53;
          }
          goto LABEL_52;
        }
        if ( v7 + v11[1] > (unsigned __int64)*v11 )
        {
          if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
          {
            v7 = *v11;
            goto LABEL_53;
          }
LABEL_52:
          v26 = 1;
        }
      }
LABEL_53:
      v27 = (*((__int64 (__fastcall **)(__int64))a2 + 7))(v11[2]);
      v28 = v27 - 1LL;
      if ( v27 )
      {
        v29 = ~v28;
        if ( v6 )
          v7 = v11[1] + (v29 & (v7 - v11[1]));
        else
          v7 = v29 & (v28 + v7);
      }
      if ( (*((_DWORD *)a2 + 16) & 1) != 0
        && (*((unsigned __int8 (__fastcall **)(__int64, __int64))a2 + 6))(v34, v28)
        && (v7 != *v11 || (*((_DWORD *)a2 + 16) & 2) != 0) )
      {
        *((_QWORD *)a2 + 11) = v34;
        *((_QWORD *)a2 + 12) = *v11;
        *((_BYTE *)a2 + 112) = v26;
        *((_QWORD *)a2 + 13) = v7;
        goto LABEL_78;
      }
      v30 = *v11;
      if ( v6 )
      {
        v7 -= v11[1];
        if ( v30 != v7 )
        {
          *v11 = v7;
          v30 = v7;
          v36 = 1;
        }
      }
      else
      {
        if ( v30 != v7 )
        {
          *v11 = v7;
          v30 = v7;
          v36 = 1;
        }
        v7 += v11[1];
      }
      if ( v36 )
        (*((void (__fastcall **)(__int64, __int64))a2 + 3))(v11[2], v30);
LABEL_69:
      v10 = v37;
      v9 = (char *)this + 72;
      goto LABEL_70;
    }
    if ( v10 != 1 )
    {
      if ( v10 == 2 )
      {
        if ( v14 == v5 )
        {
          v7 = v5;
          if ( *v11 == v4 )
            goto LABEL_78;
        }
        v21 = *(_QWORD *)v12;
        if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
          goto LABEL_72;
        v22 = (char **)*((_QWORD *)v12 + 1);
        if ( *v22 != v12
          || (*v22 = (char *)v21,
              *(_QWORD *)(v21 + 8) = v22,
              v23 = v11 + 3,
              *(_QWORD *)v12 = 0LL,
              v11[6] = 0LL,
              v24 = v11[3],
              *(__int64 **)(v24 + 8) != v11 + 3)
          || (v25 = (__int64 *)v11[4], (_QWORD *)*v25 != v23) )
        {
LABEL_72:
          __fastfail(3u);
        }
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        *v23 = 0LL;
        v11[4] = 0LL;
        VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v11);
      }
      else
      {
        if ( !g_IsInternalRelease )
          goto LABEL_70;
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v10 - 1), v4);
        v20[5] = 0LL;
        v20[6] = 0LL;
        v20[7] = 0LL;
        v20[3] = 270LL;
        v20[4] = 9LL;
        WdLogEvent5_WdCriticalError(v20);
      }
      goto LABEL_69;
    }
    if ( v6 )
      v7 = *v11;
    else
      v7 = *v11 + v11[1];
LABEL_70:
    if ( v8 == v9 )
      goto LABEL_74;
    v4 = v38;
    v5 = v33;
  }
  if ( v6 )
    goto LABEL_70;
LABEL_12:
  if ( v8 == v9 )
    goto LABEL_74;
  v15 = *((_QWORD *)a2 + 10);
LABEL_75:
  v31 = *((_QWORD *)a2 + 1);
  if ( v15 > v31 )
    *((_QWORD *)a2 + 10) = v31;
LABEL_78:
  v32 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v7;
  if ( (v32 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(this, v38, *((_QWORD *)this + 1));
}
