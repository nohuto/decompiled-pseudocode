/*
 * XREFs of ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180017F54 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180018F20 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001E720 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800229C0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180020930 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x180024760 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18003CF68 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

void __fastcall RmpActivityHostUpdateDigests(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  struct _RM_ACTIVITY_HOST *v3; // rbp
  __int16 v4; // di
  __int16 v5; // bx
  struct _RM_ACTIVITY_HOST *v6; // rdx
  char *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r12
  char v10; // r9
  unsigned __int64 v11; // rdx
  __int16 v12; // r8
  __int16 v13; // r11
  unsigned __int64 v14; // rax
  bool v15; // r8
  __int16 v16; // ax
  char v17; // r10
  __int16 v18; // r9
  __int16 v19; // di
  __int16 v20; // ax
  __int16 v21; // di
  __int16 v22; // ax
  __int16 v23; // di
  __int16 v24; // di
  __int16 v25; // ax
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  __int16 v29; // di
  __int64 v30; // rax
  int v31; // ebx
  char *v32; // rax
  unsigned __int16 v33; // bx
  char *v34; // rcx
  char *v35; // r14
  unsigned __int16 v36; // ax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  char v41; // [rsp+68h] [rbp+10h]

  v3 = a1;
  v4 = 102;
  if ( (a2 & 1) != 0 )
  {
    v32 = (char *)a1 + 1056;
    v33 = 102;
    v34 = (char *)*((_QWORD *)a1 + 132);
    if ( v34 != v32 )
    {
      v35 = v34 - 1416;
      if ( v34 != (char *)1416 )
      {
        do
        {
          if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v35) )
          {
            v36 = RmpPolicyDigestCompute();
            v33 = RmpPolicyDigestMerge(v33, v36);
          }
          v37 = *((_QWORD *)v35 + 177);
          v38 = 3 * (*((int *)v35 + 362) + 44LL);
          v39 = *((_QWORD *)v35 + 180);
          v35 = 0LL;
          if ( v37 != v39 + 8 * v38 )
            v35 = (char *)(v37 - 1416);
        }
        while ( v35 );
      }
    }
    *((_WORD *)v3 + 552) = v33;
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = *((_WORD *)v3 + 553);
    v6 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v3 + 135);
    v41 = v5;
    v7 = 0LL;
    if ( v6 != (struct _RM_ACTIVITY_HOST *)((char *)v3 + 1080) )
      v7 = (char *)v6 - 1416;
    if ( v7 )
    {
      v8 = 0x8800001000LL;
      v9 = 0x11000002000LL;
      do
      {
        if ( *((_DWORD *)v7 + 350) == 2 || (v7[1452] & 4) != 0 )
        {
          v10 = v7[1498];
          if ( (v10 & 8) != 0 || (v11 = *((int *)v7 + 364), (unsigned int)v11 <= 0x27) && _bittest64(&v8, v11) )
          {
            v12 = *((_WORD *)v7 + 748);
            v13 = 2;
          }
          else
          {
            v12 = *((_WORD *)v7 + 748);
            if ( (v12 & 0x10) != 0 || (unsigned int)v11 <= 0x28 && _bittest64(&v9, v11) )
              v13 = 4;
            else
              v13 = 1;
          }
          v15 = ((v12 & 0x10) != 0 || (v14 = *((int *)v7 + 364), (unsigned int)v14 <= 0x28) && _bittest64(&v9, v14))
             && (v10 & 0x40) == 0;
          v16 = v13 | 8;
          if ( v15 )
            v16 = v13;
          v17 = v4 & (v16 | (8 * (v7[1496] & 8 | (2 * (v7[1496] & 3 | (8 * (((*((_DWORD *)v7 + 363) & 8) != 0) | 2)))))));
          v18 = v4 | v16 | (8
                          * (*((_WORD *)v7 + 748) & 8 | (2
                                                       * (*((_WORD *)v7 + 748) & 3 | (8
                                                                                    * ((*((_DWORD *)v7 + 363) >> 3) & 1 | 2))))));
          v19 = 0;
          if ( (v18 & 0x100) != 0 )
            v19 = 256;
          v20 = 0;
          if ( (v18 & 0x80) != 0 )
            v20 = 128;
          v21 = ((v17 & 4) != 0 ? 4 : 0) | ((v17 & 0x20) != 0 ? 0x20 : 0) | ((v17 & 0x40) != 0 ? 0x40 : 0) | v20 | v19;
          v22 = 0;
          v23 = ((v17 & 2) != 0 ? 2 : 0) | v21;
          if ( (v18 & 0x10) != 0 )
            v22 = 16;
          v24 = v22 | v23;
          v25 = 0;
          if ( (v18 & 8) != 0 )
            v25 = 8;
          v4 = ((v18 & 1) != 0) | v25 | v24;
        }
        v26 = *((_QWORD *)v7 + 177);
        v27 = 3 * (*((int *)v7 + 362) + 44LL);
        v28 = *((_QWORD *)v7 + 180);
        v7 = 0LL;
        if ( v26 != v28 + 8 * v27 )
          v7 = (char *)(v26 - 1416);
      }
      while ( v7 );
      v3 = a1;
      LOBYTE(v5) = v41;
    }
    *((_WORD *)v3 + 553) = v4;
    v29 = v4 & 0x80;
    v30 = *((_QWORD *)v3 + 7);
    v31 = v5 & 0x80;
    if ( v31 && !v29 )
    {
      --*(_DWORD *)(v30 + 196);
    }
    else if ( !v31 )
    {
      if ( v29 )
        ++*(_DWORD *)(v30 + 196);
    }
  }
}
