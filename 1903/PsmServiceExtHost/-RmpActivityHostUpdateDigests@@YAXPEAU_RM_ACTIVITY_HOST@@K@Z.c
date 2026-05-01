/*
 * XREFs of ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001DAA0
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000C770 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001B930 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800207E0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180024190 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180024350 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180022CD0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x1800269A0 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18003DD64 (-IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ.c)
 */

void __fastcall RmpActivityHostUpdateDigests(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  struct _RM_ACTIVITY_HOST *v3; // rsi
  __int16 v4; // bx
  __int16 v5; // r11
  struct _RM_ACTIVITY_HOST *v6; // rdx
  char *v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r13
  char v10; // r9
  unsigned __int64 v11; // r8
  __int16 v12; // dx
  __int16 v13; // r10
  __int16 v14; // ax
  int v15; // eax
  char v16; // al
  __int16 v17; // r10
  char v18; // r9
  __int16 v19; // r10
  __int16 v20; // bx
  __int16 v21; // ax
  __int16 v22; // bx
  __int16 v23; // ax
  __int16 v24; // bx
  __int16 v25; // bx
  __int16 v26; // ax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int16 v30; // bx
  __int64 v31; // rax
  int v32; // r11d
  char *v33; // rax
  __int16 v34; // r11
  char *v35; // rcx
  char *v36; // rbp
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // r11
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx

  v3 = a1;
  v4 = 102;
  if ( (a2 & 1) != 0 )
  {
    v33 = (char *)a1 + 1112;
    v34 = 102;
    v35 = (char *)*((_QWORD *)a1 + 139);
    if ( v35 != v33 )
    {
      v36 = v35 - 1296;
      if ( v35 != (char *)1296 )
      {
        do
        {
          if ( ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement((ExecutionModel::ResourceSet *)v36) )
          {
            v37 = RmpPolicyDigestCompute();
            v34 = RmpPolicyDigestMerge(v38, v37);
          }
          v39 = *((_QWORD *)v36 + 162);
          v40 = *((_QWORD *)v36 + 165);
          v41 = 3LL * *((int *)v36 + 332) + 139;
          v36 = 0LL;
          if ( v39 != v40 + 8 * v41 )
            v36 = (char *)(v39 - 1296);
        }
        while ( v36 );
      }
    }
    *((_WORD *)v3 + 580) = v34;
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = *((_WORD *)v3 + 581);
    v6 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v3 + 142);
    v7 = 0LL;
    if ( v6 != (struct _RM_ACTIVITY_HOST *)((char *)v3 + 1136) )
      v7 = (char *)v6 - 1296;
    if ( v7 )
    {
      v8 = 0x8800001000LL;
      v9 = 0x11000002000LL;
      do
      {
        if ( *((_DWORD *)v7 + 320) == 2 || (v7[1332] & 4) != 0 )
        {
          v10 = v7[1378];
          if ( (v10 & 8) != 0 || (v11 = *((int *)v7 + 334), (unsigned int)v11 <= 0x27) && _bittest64(&v8, v11) )
          {
            v14 = *((_WORD *)v7 + 688);
            v13 = 2;
            LOBYTE(v12) = v14;
          }
          else
          {
            v12 = *((_WORD *)v7 + 688);
            if ( (v12 & 0x10) != 0 || (unsigned int)v11 <= 0x28 && _bittest64(&v9, v11) )
            {
              v13 = 4;
              LOBYTE(v14) = *((_WORD *)v7 + 688);
            }
            else
            {
              v13 = 1;
              LOBYTE(v14) = *((_WORD *)v7 + 688);
            }
          }
          if ( (v14 & 0x10) == 0 && (v15 = *((_DWORD *)v7 + 334), v15 != 13) && v15 != 36 && v15 != 40
            || (v16 = v12, (v10 & 0x40) != 0) )
          {
            v13 |= 8u;
            v16 = v12;
          }
          v17 = v13 | (8 * (v16 & 8 | (2 * (v16 & 3 | (8 * ((*((_DWORD *)v7 + 333) >> 3) & 1 | 2))))));
          v18 = v4 & v17;
          v19 = v4 | v17;
          v20 = 0;
          if ( (v19 & 0x100) != 0 )
            v20 = 256;
          v21 = 0;
          if ( (v19 & 0x80) != 0 )
            v21 = 128;
          v22 = ((v18 & 4) != 0 ? 4 : 0) | ((v18 & 0x20) != 0 ? 0x20 : 0) | ((v18 & 0x40) != 0 ? 0x40 : 0) | v21 | v20;
          v23 = 0;
          v24 = ((v18 & 2) != 0 ? 2 : 0) | v22;
          if ( (v19 & 0x10) != 0 )
            v23 = 16;
          v25 = v23 | v24;
          v26 = 0;
          if ( (v19 & 8) != 0 )
            v26 = 8;
          v4 = ((v19 & 1) != 0) | v26 | v25;
        }
        v27 = *((_QWORD *)v7 + 162);
        v28 = *((int *)v7 + 332);
        v29 = *((_QWORD *)v7 + 165);
        v7 = 0LL;
        if ( v27 != v29 + 1112 + 24 * v28 )
          v7 = (char *)(v27 - 1296);
      }
      while ( v7 );
      v3 = a1;
    }
    *((_WORD *)v3 + 581) = v4;
    v30 = v4 & 0x80;
    v31 = *((_QWORD *)v3 + 7);
    v32 = v5 & 0x80;
    if ( v32 && !v30 )
    {
      --*(_DWORD *)(v31 + 196);
    }
    else if ( !v32 )
    {
      if ( v30 )
        ++*(_DWORD *)(v31 + 196);
    }
  }
}
