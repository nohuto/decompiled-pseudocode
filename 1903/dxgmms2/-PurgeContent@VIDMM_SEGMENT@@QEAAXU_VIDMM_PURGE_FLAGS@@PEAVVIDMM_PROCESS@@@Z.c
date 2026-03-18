/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00C0FCC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060748 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0084468 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACDDC (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AE688 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 **v17; // rsi
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 **v21; // rcx
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r8
  __int64 **v27; // rsi
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 **v31; // rcx
  __int64 *v32; // rax
  __int64 result; // rax
  __int64 *v34; // rcx
  __int64 *v35; // rax
  _QWORD *v36; // [rsp+20h] [rbp-20h]
  __int64 v37; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v38; // [rsp+30h] [rbp-10h]
  struct _VIDMM_GLOBAL_ALLOC *v39; // [rsp+80h] [rbp+40h]
  __int64 v40; // [rsp+90h] [rbp+50h]
  _QWORD *v41; // [rsp+98h] [rbp+58h]

  v40 = a3;
  v4 = (unsigned int)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
LABEL_3:
    a3 = v40;
  }
  v6 = (_QWORD *)(a1 + 136);
  v7 = *(_QWORD **)(a1 + 136);
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    if ( (v4 & 8) == 0 || *v8 == a3 )
    {
      v36 = v8 + 5;
      v9 = (_QWORD *)v8[5];
      if ( (_QWORD *)*v36 != v36 )
      {
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
          v41 = v10 + 2;
          v11 = (_QWORD *)v10[2];
          if ( (_QWORD *)*v41 != v41 )
          {
            while ( 1 )
            {
              v12 = (__int64)(v11 - 7);
              v11 = (_QWORD *)*v11;
              v39 = **(struct _VIDMM_GLOBAL_ALLOC ***)v12;
              v13 = **((unsigned int **)v39 + 63);
              if ( (v13 & 0x40000000) != 0 && (int)v13 >= 0 && (v4 & 8) == 0 )
              {
                v14 = WdLogNewEntry5_WdWarning(v13, a2);
                *(_QWORD *)(v14 + 24) = v12;
                WdLogEvent5_WdWarning(v14);
                if ( VIDMM_GLOBAL::InvalidateOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (DXGFASTMUTEX **)v39) )
                  goto LABEL_3;
              }
              if ( (*(_BYTE *)(v12 + 25) & 1) == 0 )
                goto LABEL_18;
              if ( (v4 & 8) == 0 )
                break;
              v15 = WdLogNewEntry5_WdError(v13, a2, a3, a4);
              *(_QWORD *)(v15 + 24) = v12;
              WdLogEvent5_WdError(v15);
LABEL_22:
              if ( v11 == v41 )
                goto LABEL_23;
            }
            VIDMM_GLOBAL::UnpinOneAllocation(*(struct VIDMM_ALLOC ***)(a1 + 8), v12, (const GUID *)3, 0);
LABEL_18:
            a2 = v39;
            if ( (**((_DWORD **)v39 + 63) & 0x10000000) == 0
              && (*((_DWORD *)v39 + 19) & 0x100) == 0
              && (*(_DWORD *)(v12 + 28) & 3) != 0 )
            {
              VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 8), (VIDMM_DEVICE **)v12);
            }
            goto LABEL_22;
          }
LABEL_23:
          ;
        }
        while ( v9 != v36 );
        a3 = v40;
        v6 = (_QWORD *)(a1 + 136);
      }
    }
  }
  v16 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v17 = (__int64 **)(a1 + 160);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == (__int64 *)v17 )
      break;
    v19 = (__int64)(v18 - 48);
    if ( (*(_DWORD *)v18[15] & 0x10000000) == 0
      && (*(_DWORD *)(v19 + 76) & 0x100) == 0
      && ((v4 & 4) == 0 || *(_QWORD *)(v19 + 16) + *(_QWORD *)(v19 + 144) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v19 + 160) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v19, v4, a4);
      v16 = v38;
    }
    v20 = (__int64 *)*v18;
    if ( *v18 )
    {
      if ( (__int64 *)v20[1] != v18 )
        goto LABEL_69;
      v21 = (__int64 **)v18[1];
      if ( *v21 != v18 )
        goto LABEL_69;
      *v21 = v20;
      v20[1] = (__int64)v21;
      v22 = v38;
      if ( (__int64 *)*v38 != &v37 )
        goto LABEL_69;
      v18[1] = (__int64)v38;
      *v18 = (__int64)&v37;
      v16 = v18;
      *v22 = (__int64)v18;
      v38 = v18;
    }
  }
  if ( (__int64 *)v37 != &v37 )
  {
    v23 = *(__int64 **)(a1 + 168);
    if ( (__int64 **)v18[1] != v17 )
      goto LABEL_69;
    if ( (__int64 **)*v23 != v17 )
      goto LABEL_69;
    if ( *(__int64 **)(v37 + 8) != &v37 )
      goto LABEL_69;
    if ( (__int64 *)*v16 != &v37 )
      goto LABEL_69;
    *v23 = (__int64)&v37;
    v24 = v38;
    *(_QWORD *)(a1 + 168) = v38;
    *v24 = (__int64)v17;
    v25 = v37;
    v38 = v23;
    if ( *(__int64 **)(v37 + 8) != &v37 || (__int64 *)*v23 != &v37 )
      goto LABEL_69;
    *v23 = v37;
    *(_QWORD *)(v25 + 8) = v23;
  }
  v26 = &v37;
  v38 = &v37;
  v37 = (__int64)&v37;
  v27 = (__int64 **)(a1 + 176);
  while ( 1 )
  {
    v28 = *v27;
    if ( *v27 == (__int64 *)v27 )
      break;
    v29 = (__int64)(v28 - 48);
    if ( (*(_DWORD *)v28[15] & 0x10000000) == 0
      && (*(_DWORD *)(v29 + 76) & 0x100) == 0
      && ((v4 & 4) == 0
       || (*(_DWORD *)(a1 + 80) & 0x200) == 0
       || *(_QWORD *)(v29 + 16) + *(_QWORD *)(v29 + 144) > *(_QWORD *)(a1 + 128))
      && !*(_DWORD *)(v29 + 160) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v29, v4, a4);
      v26 = v38;
    }
    v30 = (__int64 *)*v28;
    if ( *v28 )
    {
      if ( (__int64 *)v30[1] != v28 )
        goto LABEL_69;
      v31 = (__int64 **)v28[1];
      if ( *v31 != v28 )
        goto LABEL_69;
      *v31 = v30;
      v30[1] = (__int64)v31;
      v32 = v38;
      if ( (__int64 *)*v38 != &v37 )
        goto LABEL_69;
      v28[1] = (__int64)v38;
      *v28 = (__int64)&v37;
      v26 = v28;
      *v32 = (__int64)v28;
      v38 = v28;
    }
  }
  result = v37;
  if ( (__int64 *)v37 != &v37 )
  {
    v34 = *(__int64 **)(a1 + 184);
    if ( (__int64 **)v28[1] == v27
      && (__int64 **)*v34 == v27
      && *(__int64 **)(v37 + 8) == &v37
      && (__int64 *)*v26 == &v37 )
    {
      *v34 = (__int64)&v37;
      v35 = v38;
      *(_QWORD *)(a1 + 184) = v38;
      *v35 = (__int64)v27;
      result = v37;
      v38 = v34;
      if ( *(__int64 **)(v37 + 8) == &v37 && (__int64 *)*v34 == &v37 )
      {
        *v34 = v37;
        *(_QWORD *)(result + 8) = v34;
        return result;
      }
    }
LABEL_69:
    __fastfail(3u);
  }
  return result;
}
