/*
 * XREFs of ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017608
 * Callers:
 *     ?ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1C007E490 (-ReserveResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTR.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00AA584 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017500 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0017848 (-ReleaseRangeInternal@VIDMM_CPU_HOST_APERTURE@@AEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007F510 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007F530 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085D74 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::AcquireRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  struct _VIDMM_GLOBAL_ALLOC *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rcx
  VIDMM_CPU_HOST_APERTURE *v17; // r15
  VIDMM_CPU_HOST_APERTURE *v18; // r14
  VIDMM_CPU_HOST_APERTURE *v19; // rcx
  _QWORD *v20; // rax
  char *v21; // r13
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r12
  VIDMM_PROCESS *v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // [rsp+50h] [rbp-88h]
  __int64 v29; // [rsp+50h] [rbp-88h]
  struct _KAPC_STATE v31; // [rsp+60h] [rbp-78h] BYREF

  v2 = *((_QWORD *)this + 6);
  v28 = 0LL;
  v4 = a2;
  v5 = (unsigned int)(*(_DWORD *)(v2 + 376) - 1);
  if ( *((_QWORD *)a2 + 28) )
    v6 = *((_QWORD *)a2 + 27);
  else
    v6 = *((_QWORD *)a2 + 18);
  v7 = *(unsigned int *)(v2 + 376);
  v8 = *((_DWORD *)this + 15);
  v9 = v6 & ~v5;
  v10 = (~v5 & (unsigned __int64)(v5 + v6 + *((_QWORD *)a2 + 2) - v9)) / v7;
  v11 = (~v5 & (unsigned __int64)(v5 + v6 + *((_QWORD *)a2 + 2) - v9)) % v7;
  v12 = v10;
  if ( v8 < (unsigned int)v10 )
  {
    v17 = (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16);
    v18 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 2);
    v19 = v18;
    if ( v18 == (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16) )
    {
LABEL_12:
      if ( v8 < (unsigned int)v10 )
      {
        *((_DWORD *)v4 + 118) = -1;
        *((_DWORD *)v4 + 119) = -1;
        v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v11);
        v20[3] = v12;
        v20[4] = v8;
        v20[5] = v7;
        WdLogEvent5_WdEvent(v20);
        return 3221225495LL;
      }
    }
    else
    {
      v11 = *((_QWORD *)this + 5);
      while ( 1 )
      {
        v8 += *(_DWORD *)(v11 + 4LL * *((unsigned int *)v19 + 5));
        if ( v8 >= (unsigned int)v10 )
          break;
        v19 = *(VIDMM_CPU_HOST_APERTURE **)v19;
        if ( v19 == v17 )
          goto LABEL_12;
      }
    }
    if ( v18 != v17 )
    {
      do
      {
        v21 = (char *)v18 - 456;
        v18 = *(VIDMM_CPU_HOST_APERTURE **)v18;
        v22 = *((_QWORD *)v21 + 13);
        if ( v22 && (*(_BYTE *)(v22 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace();
          memset(&v31, 0, sizeof(v31));
          VIDMM_PROCESS::SafeAttach(*(VIDMM_PROCESS **)(v22 + 8), &v31);
          v23 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(*((_QWORD *)this + 6) + 8LL),
                  *(_QWORD *)(*(_QWORD *)(v22 + 8) + 24LL),
                  *(_QWORD *)(v22 + 24),
                  3LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v21,
                  v28);
          v25 = v23;
          v26 = (VIDMM_PROCESS *)(v23 + 0x80000000);
          if ( ((unsigned int)v26 & 0x80000000) == 0 && v23 != -1073741558 )
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24);
            v27[7] = 0LL;
            v27[3] = 270LL;
            v27[4] = 4LL;
            v27[5] = 3LL;
            v27[6] = v25;
            WdLogEvent5_WdCriticalError(v27);
          }
          *(_BYTE *)(v22 + 32) &= ~1u;
          VIDMM_PROCESS::SafeDetach(v26, &v31);
        }
        VIDMM_CPU_HOST_APERTURE::UnmapRange(this, (struct _VIDMM_GLOBAL_ALLOC *)v21);
        VIDMM_CPU_HOST_APERTURE::ReleaseRangeInternal(this, (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v21 + 472));
      }
      while ( *((_DWORD *)this + 15) < v12 && v18 != v17 );
      v4 = a2;
    }
  }
  v13 = *((unsigned int *)this + 16);
  v14 = v12 - 1;
  LODWORD(v29) = *((_DWORD *)this + 16);
  if ( v12 != 1 )
  {
    do
    {
      v13 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v13);
      --v14;
    }
    while ( v14 );
  }
  v15 = *((_QWORD *)this + 5);
  HIDWORD(v29) = v13;
  *((_DWORD *)this + 16) = *(_DWORD *)(v15 + 4 * v13);
  *(_DWORD *)(v15 + 4LL * (unsigned int)v13) = v12;
  *((_DWORD *)this + 15) -= v12;
  *((_QWORD *)v4 + 59) = v29;
  return 0LL;
}
