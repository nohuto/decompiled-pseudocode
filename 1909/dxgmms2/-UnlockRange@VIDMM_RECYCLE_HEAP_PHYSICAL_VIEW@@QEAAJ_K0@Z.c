/*
 * XREFs of ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00661A4
 * Callers:
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C006600C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00145E8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z @ 0x1C0063078 (-LockUnlock@VIDMM_MDL_RANGE@@QEAAJPEAX_K1@Z.c)
 *     ?GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ @ 0x1C00649BC (-GetNextRange@VIDMM_MDL_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C00665E8 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0069BDC (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069C20 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069D3C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00BBAA4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _MDL *a2,
        struct _MDL *a3)
{
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v4; // rdx
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v6; // r8
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v7; // r9
  void *v8; // rdi
  int v9; // eax
  struct VIDMM_MDL_RANGE *v10; // rbx
  bool v11; // zf
  struct _MDL **NextRange; // r13
  struct _MDL *v13; // rsi
  struct VIDMM_MDL_RANGE *v14; // rcx
  char v15; // si
  struct VIDMM_MDL_RANGE *v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v21; // r8
  int *v22; // rax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // eax
  char v28; // si
  VIDMM_MDL_RANGE *v29; // rbx
  VIDMM_MDL_RANGE *v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // r8
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rdx
  VIDMM_MDL_RANGE *v39; // rax
  VIDMM_MDL_RANGE *v40; // rsi
  VIDMM_MDL_RANGE *v41; // rax
  enum _LOCK_OPERATION v42; // r8d
  VIDMM_MDL_RANGE *v43; // r14
  enum _LOCK_OPERATION v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rcx
  struct VIDMM_MDL_RANGE *v47; // r12
  char v48; // r8
  struct VIDMM_MDL_RANGE *v49; // r10
  _QWORD *v50; // rax
  __int64 v51; // r9
  _QWORD *v52; // r8
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
  _QWORD *v66; // rax
  unsigned __int8 v67[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID MappedBase; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int64 v69; // [rsp+50h] [rbp-10h]
  struct VIDMM_MDL_RANGE *v70; // [rsp+58h] [rbp-8h]
  void *v72; // [rsp+B8h] [rbp+58h] BYREF

  v4 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8);
  v6 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v7 = this;
  LODWORD(v8) = 0;
  v9 = -1;
  v10 = 0LL;
  if ( v6 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8) )
  {
    while ( 1 )
    {
      v11 = v9 == 0;
      if ( v9 >= 0 )
        break;
      v10 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v6 - 24);
      if ( *((_QWORD *)v6 - 1) > (unsigned __int64)a2 )
        v9 = *((_QWORD *)v6 - 2) >= (unsigned __int64)a3;
      else
        v9 = -1;
      v6 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v6;
      if ( v6 == v4 )
      {
        v11 = v9 == 0;
        break;
      }
    }
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
      v70 = v14;
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
            return (unsigned int)v8;
        }
        goto LABEL_62;
      }
      v21 = *(_QWORD *)v7;
      v72 = 0LL;
      MappedBase = 0LL;
      v67[0] = 0;
      v22 = *(int **)(v21 + 32);
      v69 = v14 - (struct VIDMM_MDL_RANGE *)v13;
      v23 = *v22;
      if ( (unsigned int)(*v22 - 3) > 3 || (unsigned int)(v23 - 5) <= 1 )
      {
        v8 = v13;
        v72 = v13;
      }
      else
      {
        v53 = VidMmRecycleHeapMapSection(
                *(PVOID *)(v21 + 56),
                (unsigned __int64)v13,
                v14 - (struct VIDMM_MDL_RANGE *)v13,
                ((v23 - 4) & 0xFFFFFFFD) == 0,
                &v72,
                &MappedBase,
                0,
                v67);
        v8 = (void *)v53;
        if ( v53 < 0 )
        {
          _InterlockedAdd(&dword_1C004E6D4, 1u);
          v55 = (_QWORD *)WdLogNewEntry5_WdLowResource(v54);
          v55[3] = v69;
          v55[4] = *((_QWORD *)v10 + 1);
          v55[5] = *(_QWORD *)this;
          v55[6] = v8;
          WdLogEvent5_WdLowResource(v55);
          return (unsigned int)v8;
        }
        v8 = v72;
        v14 = v70;
      }
      if ( v13 < a2 )
      {
        if ( v14 <= (struct VIDMM_MDL_RANGE *)a3 )
        {
          v27 = VIDMM_MDL_RANGE::LockUnlock((PMDL *)v10, v8, *((struct _MDL **)v10 + 1), a2);
          v8 = (void *)v27;
          if ( v27 >= 0 )
          {
            if ( v10 != (struct VIDMM_MDL_RANGE *)NextRange )
            {
              v28 = 0;
              v29 = VIDMM_MDL_RANGE::GetNextRange(v10);
              while ( 1 )
              {
                VIDMM_MDL_RANGE::Unlock(v29);
                v30 = v29;
                if ( v29 == (VIDMM_MDL_RANGE *)NextRange )
                  v28 = 1;
                else
                  v29 = VIDMM_MDL_RANGE::GetNextRange(v29);
                v31 = (_QWORD *)((char *)v30 + 24);
                v32 = *((_QWORD *)v30 + 3);
                if ( *(VIDMM_MDL_RANGE **)(v32 + 8) != (VIDMM_MDL_RANGE *)((char *)v30 + 24) )
                  break;
                v33 = (_QWORD *)*((_QWORD *)v30 + 4);
                if ( (_QWORD *)*v33 != v31 )
                  break;
                *v33 = v32;
                *(_QWORD *)(v32 + 8) = v33;
                *v31 = 0LL;
                *((_QWORD *)v30 + 4) = 0LL;
                operator delete(v30);
                if ( v28 )
                  goto LABEL_25;
              }
LABEL_62:
              __fastfail(3u);
            }
            goto LABEL_25;
          }
LABEL_67:
          _InterlockedAdd(&dword_1C004E6A4, 1u);
          v56 = WdLogNewEntry5_WdLowResource(v25);
          *(_QWORD *)(v56 + 24) = v8;
          WdLogEvent5_WdLowResource(v56);
          goto LABEL_25;
        }
      }
      else if ( v14 > (struct VIDMM_MDL_RANGE *)a3 )
      {
        v24 = VIDMM_MDL_RANGE::LockUnlock(NextRange, (char *)v8 + (_QWORD)a3 - *((_QWORD *)v10 + 1), a3, NextRange[2]);
        v8 = (void *)v24;
        if ( v24 >= 0 )
        {
          while ( v10 != (struct VIDMM_MDL_RANGE *)NextRange )
          {
            VIDMM_MDL_RANGE::Unlock(v10);
            v10 = VIDMM_MDL_RANGE::GetNextRange(v10);
            v36 = (_QWORD *)(v35 + 24);
            v37 = *(_QWORD *)(v35 + 24);
            if ( *(_QWORD **)(v37 + 8) != v36 )
              goto LABEL_62;
            v38 = (_QWORD *)v36[1];
            if ( (_QWORD *)*v38 != v36 )
              goto LABEL_62;
            *v38 = v37;
            *(_QWORD *)(v37 + 8) = v38;
            *v36 = 0LL;
            v34[4] = 0LL;
            operator delete(v34);
          }
          goto LABEL_25;
        }
        goto LABEL_67;
      }
      v39 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
      v40 = v39;
      if ( v39 )
      {
        *((_QWORD *)v39 + 1) = *((_QWORD *)v10 + 1);
        *((_QWORD *)v39 + 2) = a2;
        *((_QWORD *)v39 + 5) = this;
        *(_QWORD *)v39 = 0LL;
        *((_QWORD *)v39 + 3) = 0LL;
        *((_QWORD *)v39 + 4) = 0LL;
      }
      else
      {
        v40 = 0LL;
      }
      if ( v40 )
      {
        v41 = (VIDMM_MDL_RANGE *)operator new[](0x30uLL, 0x32316956u, PagedPool);
        v43 = v41;
        if ( v41 )
        {
          *((_QWORD *)v41 + 2) = NextRange[2];
          *((_QWORD *)v41 + 5) = this;
          *(_QWORD *)v41 = 0LL;
          *((_QWORD *)v41 + 1) = a3;
          *((_QWORD *)v41 + 3) = 0LL;
          *((_QWORD *)v41 + 4) = 0LL;
        }
        else
        {
          v43 = 0LL;
        }
        if ( v43 )
        {
          if ( VIDMM_MDL_RANGE::Lock(v40, v8, v42, 0LL, 0LL) < 0 )
          {
            _InterlockedAdd(&dword_1C004E6A4, 1u);
            v60 = WdLogNewEntry5_WdLowResource(0LL);
            *(_QWORD *)(v60 + 24) = 6518LL;
            WdLogEvent5_WdLowResource(v60);
          }
          else
          {
            LODWORD(v8) = VIDMM_MDL_RANGE::Lock(v43, (char *)v8 + (_QWORD)a3 - *((_QWORD *)v10 + 1), v44, 0LL, 0LL);
            if ( (int)v8 >= 0 )
            {
              v46 = *((_QWORD *)v10 + 4);
              v47 = (struct VIDMM_MDL_RANGE *)(v46 - 24);
              if ( v46 == *((_QWORD *)v10 + 5) + 8LL )
                v47 = 0LL;
              v70 = VIDMM_MDL_RANGE::GetNextRange((VIDMM_MDL_RANGE *)NextRange);
              LOBYTE(v72) = v48;
              do
              {
                VIDMM_MDL_RANGE::Unlock(v10);
                v49 = v10;
                if ( v10 == (struct VIDMM_MDL_RANGE *)NextRange )
                  LOBYTE(v72) = 1;
                else
                  v10 = VIDMM_MDL_RANGE::GetNextRange(v10);
                v50 = (_QWORD *)((char *)v49 + 24);
                v51 = *((_QWORD *)v49 + 3);
                if ( *(struct VIDMM_MDL_RANGE **)(v51 + 8) != (struct VIDMM_MDL_RANGE *)((char *)v49 + 24) )
                  goto LABEL_62;
                v52 = (_QWORD *)*((_QWORD *)v49 + 4);
                if ( (_QWORD *)*v52 != v50 )
                  goto LABEL_62;
                *v52 = v51;
                *(_QWORD *)(v51 + 8) = v52;
                *v50 = 0LL;
                *((_QWORD *)v49 + 4) = 0LL;
                operator delete(v49);
              }
              while ( !(_BYTE)v72 );
              VIDMM_MDL_RANGE::InsertBetween(v40, v47, v43);
              VIDMM_MDL_RANGE::InsertBetween(v43, v40, v70);
              goto LABEL_25;
            }
            _InterlockedAdd(&dword_1C004E6A4, 1u);
            v61 = WdLogNewEntry5_WdLowResource(v45);
            *(_QWORD *)(v61 + 24) = 6538LL;
            WdLogEvent5_WdLowResource(v61);
            VIDMM_MDL_RANGE::Unlock(v40);
          }
          operator delete(v40);
          v59 = v43;
        }
        else
        {
          _InterlockedAdd(&dword_1C004E6A4, 1u);
          v58 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v58 + 24) = 6500LL;
          WdLogEvent5_WdLowResource(v58);
          v59 = v40;
        }
        operator delete(v59);
        LODWORD(v8) = -1073741801;
      }
      else
      {
        _InterlockedAdd(&dword_1C004E6A4, 1u);
        v57 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v57 + 24) = 6490LL;
        WdLogEvent5_WdLowResource(v57);
        LODWORD(v8) = -1073741801;
      }
LABEL_25:
      v26 = **(_DWORD **)(*(_QWORD *)this + 32LL);
      if ( (unsigned int)(v26 - 3) <= 3 && (unsigned int)(v26 - 5) > 1 )
      {
        if ( v67[0] )
          CurrentProcess = 0LL;
        else
          CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
        SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0);
        if ( v69 <= SmallAllocationSize )
        {
          if ( v64 )
            MmUnmapViewOfSection(v64, MappedBase);
          else
            MmUnmapViewInSystemSpace(MappedBase);
        }
        else
        {
          VidMmUnmapViewAsync(v64, *(PVOID *)(*(_QWORD *)v65 + 56LL), MappedBase);
        }
      }
      return (unsigned int)v8;
    }
  }
  v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0xFFFFFFFFLL, v4);
  v66[3] = 270LL;
  v66[4] = 52LL;
  v66[5] = 9LL;
  v66[6] = 0LL;
  v66[7] = 0LL;
  WdLogEvent5_WdCriticalError(v66);
  return 3221225473LL;
}
