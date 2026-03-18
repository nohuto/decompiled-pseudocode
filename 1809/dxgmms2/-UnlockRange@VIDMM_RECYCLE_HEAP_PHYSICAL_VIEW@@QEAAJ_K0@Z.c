/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C005AB48
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001304 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0059484 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0059FE0 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C005A210 (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C005AF74 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C005E2A8 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E2EC (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00B8964 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _MDL *a2,
        struct _MDL *a3)
{
  char *v4; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v5; // r9
  char *v7; // r8
  int v8; // eax
  void *v9; // rsi
  struct VIDMM_MDL_RANGE *v10; // rbx
  bool v11; // zf
  struct _MDL **NextRange; // r13
  struct _MDL *v13; // rdi
  struct VIDMM_MDL_RANGE *v14; // rcx
  char v15; // di
  struct VIDMM_MDL_RANGE *v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v21; // r8
  int *v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  bool v27; // di
  VIDMM_MDL_RANGE *v28; // rbx
  VIDMM_MDL_RANGE *v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // r8
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  VIDMM_MDL_RANGE *v38; // rax
  VIDMM_MDL_RANGE *v39; // rdi
  VIDMM_MDL_RANGE *v40; // rax
  enum _LOCK_OPERATION v41; // r8d
  VIDMM_MDL_RANGE *v42; // r14
  enum _LOCK_OPERATION v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct VIDMM_MDL_RANGE *v46; // r12
  char v47; // r8
  struct VIDMM_MDL_RANGE *v48; // r10
  _QWORD *v49; // rax
  __int64 v50; // r9
  _QWORD *v51; // r8
  _QWORD *v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  VIDMM_MDL_RANGE *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  unsigned __int64 SmallAllocationSize; // rax
  void *v64; // rcx
  __int64 v65; // r8
  unsigned __int8 v66[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v68; // [rsp+50h] [rbp-10h]
  struct VIDMM_MDL_RANGE *v69; // [rsp+58h] [rbp-8h]
  void *v71; // [rsp+B8h] [rbp+58h] BYREF

  v4 = (char *)this + 8;
  v5 = this;
  v7 = (char *)*((_QWORD *)this + 1);
  v8 = -1;
  LODWORD(v9) = 0;
  v10 = 0LL;
  while ( v7 != v4 )
  {
    v11 = v8 == 0;
    if ( v8 >= 0 )
      goto LABEL_9;
    v10 = (struct VIDMM_MDL_RANGE *)(v7 - 24);
    if ( *((_QWORD *)v7 - 1) > (unsigned __int64)a2 )
      v8 = *((_QWORD *)v7 - 2) >= (unsigned __int64)a3;
    else
      v8 = -1;
    v7 = *(char **)v7;
  }
  v11 = v8 == 0;
LABEL_9:
  if ( v11 )
  {
    NextRange = (struct _MDL **)v10;
    v13 = (struct _MDL *)*((_QWORD *)v10 + 1);
    if ( *((_QWORD *)v10 + 2) < (unsigned __int64)a3 )
    {
      do
        NextRange = (struct _MDL **)VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
      while ( NextRange[2] < a3 );
    }
    v14 = (struct VIDMM_MDL_RANGE *)NextRange[2];
    v69 = v14;
    if ( v14 <= (struct VIDMM_MDL_RANGE *)a3 && v13 >= a2 )
    {
      v15 = 0;
      while ( 1 )
      {
        VIDMM_MDL_RANGE::Unlock(v10);
        v16 = v10;
        if ( v10 == (struct VIDMM_MDL_RANGE *)NextRange )
          v15 = 1;
        else
          v10 = VIDMM_MDL_RANGE::GetNextRange(v10);
        v17 = (_QWORD *)((char *)v16 + 24);
        v18 = *((_QWORD *)v16 + 3);
        if ( *(struct VIDMM_MDL_RANGE **)(v18 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v16 + 24) )
          break;
        v19 = (_QWORD *)*((_QWORD *)v16 + 4);
        if ( (_QWORD *)*v19 != v17 )
          break;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        *((_QWORD *)v16 + 4) = 0LL;
        operator delete(v16);
        if ( v15 )
          return (unsigned int)v9;
      }
      goto LABEL_63;
    }
    v21 = *(_QWORD *)v5;
    v71 = 0LL;
    MappedBase = 0LL;
    v66[0] = 0;
    v22 = *(int **)(v21 + 32);
    v68 = v14 - (struct VIDMM_MDL_RANGE *)v13;
    v23 = *v22;
    if ( (unsigned int)(*v22 - 3) > 3 || (unsigned int)(v23 - 5) <= 1 )
    {
      v9 = v13;
      v71 = v13;
    }
    else
    {
      v53 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v21 + 56),
              (unsigned __int64)v13,
              v14 - (struct VIDMM_MDL_RANGE *)v13,
              ((v23 - 4) & 0xFFFFFFFD) == 0,
              &v71,
              &MappedBase,
              0,
              v66);
      v9 = (void *)v53;
      if ( v53 < 0 )
      {
        _InterlockedAdd(&dword_1C004D6B4, 1u);
        v55 = (_QWORD *)WdLogNewEntry5_WdLowResource(v54);
        v55[3] = v68;
        v55[4] = *((_QWORD *)v10 + 1);
        v55[5] = *(_QWORD *)this;
        v55[6] = v9;
        WdLogEvent5_WdLowResource(v55);
        return (unsigned int)v9;
      }
      v9 = v71;
      v14 = v69;
    }
    if ( v13 < a2 )
    {
      if ( v14 <= (struct VIDMM_MDL_RANGE *)a3 )
      {
        LODWORD(v9) = VIDMM_MDL_RANGE::LockUnlock((PMDL *)v10, v9, *((struct _MDL **)v10 + 1), a2);
        if ( (int)v9 >= 0 )
        {
          v27 = v10 == (struct VIDMM_MDL_RANGE *)NextRange;
          if ( v10 != (struct VIDMM_MDL_RANGE *)NextRange )
          {
            v28 = VIDMM_MDL_RANGE::GetNextRange(v10);
            while ( 1 )
            {
              VIDMM_MDL_RANGE::Unlock(v28);
              v29 = v28;
              if ( v28 == (VIDMM_MDL_RANGE *)NextRange )
                v27 = 1;
              else
                v28 = VIDMM_MDL_RANGE::GetNextRange(v28);
              v30 = (_QWORD *)((char *)v29 + 24);
              v31 = *((_QWORD *)v29 + 3);
              if ( *(VIDMM_MDL_RANGE **)(v31 + 8) != (VIDMM_MDL_RANGE *)((char *)v29 + 24) )
                break;
              v32 = (_QWORD *)*((_QWORD *)v29 + 4);
              if ( (_QWORD *)*v32 != v30 )
                break;
              *v32 = v31;
              *(_QWORD *)(v31 + 8) = v32;
              *v30 = 0LL;
              *((_QWORD *)v29 + 4) = 0LL;
              operator delete(v29);
              if ( v27 )
                goto LABEL_26;
            }
LABEL_63:
            __fastfail(3u);
          }
          goto LABEL_26;
        }
        _InterlockedAdd(&dword_1C004D684, 1u);
        v56 = WdLogNewEntry5_WdLowResource(v26);
        *(_QWORD *)(v56 + 24) = 6175LL;
LABEL_71:
        WdLogEvent5_WdLowResource(v56);
        goto LABEL_26;
      }
    }
    else if ( v14 > (struct VIDMM_MDL_RANGE *)a3 )
    {
      LODWORD(v9) = VIDMM_MDL_RANGE::LockUnlock(
                      NextRange,
                      (char *)v9 + (_QWORD)a3 - *((_QWORD *)v10 + 1),
                      a3,
                      NextRange[2]);
      if ( (int)v9 >= 0 )
      {
        while ( v10 != (struct VIDMM_MDL_RANGE *)NextRange )
        {
          VIDMM_MDL_RANGE::Unlock(v10);
          v10 = VIDMM_MDL_RANGE::GetNextRange(v10);
          v35 = (_QWORD *)(v34 + 24);
          v36 = *(_QWORD *)(v34 + 24);
          if ( *(_QWORD **)(v36 + 8) != v35 )
            goto LABEL_63;
          v37 = (_QWORD *)v35[1];
          if ( (_QWORD *)*v37 != v35 )
            goto LABEL_63;
          *v37 = v36;
          *(_QWORD *)(v36 + 8) = v37;
          *v35 = 0LL;
          v33[4] = 0LL;
          operator delete(v33);
        }
        goto LABEL_26;
      }
      _InterlockedAdd(&dword_1C004D684, 1u);
      v56 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v56 + 24) = 6231LL;
      goto LABEL_71;
    }
    v38 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
    v39 = v38;
    if ( v38 )
    {
      *((_QWORD *)v38 + 1) = *((_QWORD *)v10 + 1);
      *((_QWORD *)v38 + 2) = a2;
      *((_QWORD *)v38 + 5) = this;
      *(_QWORD *)v38 = 0LL;
      *((_QWORD *)v38 + 3) = 0LL;
      *((_QWORD *)v38 + 4) = 0LL;
    }
    else
    {
      v39 = 0LL;
    }
    if ( v39 )
    {
      v40 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v42 = v40;
      if ( v40 )
      {
        *((_QWORD *)v40 + 2) = NextRange[2];
        *((_QWORD *)v40 + 5) = this;
        *(_QWORD *)v40 = 0LL;
        *((_QWORD *)v40 + 1) = a3;
        *((_QWORD *)v40 + 3) = 0LL;
        *((_QWORD *)v40 + 4) = 0LL;
      }
      else
      {
        v42 = 0LL;
      }
      if ( v42 )
      {
        if ( VIDMM_MDL_RANGE::Lock(v39, v9, v41, 0LL, 0LL) < 0 )
        {
          _InterlockedAdd(&dword_1C004D684, 1u);
          v60 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v60 + 24) = 6303LL;
          WdLogEvent5_WdLowResource(v60);
        }
        else
        {
          LODWORD(v9) = VIDMM_MDL_RANGE::Lock(v42, (char *)v9 + (_QWORD)a3 - *((_QWORD *)v10 + 1), v43, 0LL, 0LL);
          if ( (int)v9 >= 0 )
          {
            v45 = *((_QWORD *)v10 + 4);
            v46 = (struct VIDMM_MDL_RANGE *)(v45 - 24);
            if ( v45 == *((_QWORD *)v10 + 5) + 8LL )
              v46 = 0LL;
            v69 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
            LOBYTE(v71) = v47;
            do
            {
              VIDMM_MDL_RANGE::Unlock(v10);
              v48 = v10;
              if ( v10 == (struct VIDMM_MDL_RANGE *)NextRange )
                LOBYTE(v71) = 1;
              else
                v10 = VIDMM_MDL_RANGE::GetNextRange(v10);
              v49 = (_QWORD *)((char *)v48 + 24);
              v50 = *((_QWORD *)v48 + 3);
              if ( *(struct VIDMM_MDL_RANGE **)(v50 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v48 + 24) )
                goto LABEL_63;
              v51 = (_QWORD *)*((_QWORD *)v48 + 4);
              if ( (_QWORD *)*v51 != v49 )
                goto LABEL_63;
              *v51 = v50;
              *(_QWORD *)(v50 + 8) = v51;
              *v49 = 0LL;
              *((_QWORD *)v48 + 4) = 0LL;
              operator delete(v48);
            }
            while ( !(_BYTE)v71 );
            VIDMM_MDL_RANGE::InsertBetween(v39, v46, v42);
            VIDMM_MDL_RANGE::InsertBetween(v42, v39, v69);
            goto LABEL_26;
          }
          _InterlockedAdd(&dword_1C004D684, 1u);
          v61 = WdLogNewEntry5_WdLowResource(v44);
          *(_QWORD *)(v61 + 24) = 6323LL;
          WdLogEvent5_WdLowResource(v61);
          VIDMM_MDL_RANGE::Unlock(v39);
        }
        operator delete(v39);
        v59 = v42;
      }
      else
      {
        _InterlockedAdd(&dword_1C004D684, 1u);
        v58 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v58 + 24) = 6285LL;
        WdLogEvent5_WdLowResource(v58);
        v59 = v39;
      }
      operator delete(v59);
      LODWORD(v9) = -1073741801;
    }
    else
    {
      _InterlockedAdd(&dword_1C004D684, 1u);
      v57 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v57 + 24) = 6275LL;
      WdLogEvent5_WdLowResource(v57);
      LODWORD(v9) = -1073741801;
    }
LABEL_26:
    v25 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v25 - 3) <= 3 && (unsigned int)(v25 - 5) > 1 )
    {
      if ( v66[0] )
        CurrentProcess = 0LL;
      else
        CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
      SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0);
      if ( v68 <= SmallAllocationSize )
      {
        if ( v64 )
          MmUnmapViewOfSection(v64, MappedBase);
        else
          MmUnmapViewInSystemSpace(MappedBase);
      }
      else
      {
        VidMmUnmapViewAsync(v64, *(PVOID *)(*(_QWORD *)v65 + 56LL), (GUID *)MappedBase);
      }
    }
    return (unsigned int)v9;
  }
  v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v4);
  v52[3] = 270LL;
  v52[4] = 52LL;
  v52[5] = 9LL;
  v52[6] = 0LL;
  v52[7] = 0LL;
  WdLogEvent5_WdCriticalError(v52);
  return 3221225473LL;
}
