/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017AA4
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00706E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00A7184 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0017C9C (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00AB834 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  SIZE_T v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID v10; // r15
  SIZE_T v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 result; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v32; // [rsp+38h] [rbp-50h]
  __int16 v33; // [rsp+3Ah] [rbp-4Eh]
  unsigned __int64 v34; // [rsp+40h] [rbp-48h]
  PVOID v35; // [rsp+48h] [rbp-40h]
  _QWORD *v36; // [rsp+50h] [rbp-38h]

  if ( *((_QWORD *)a2 + 56) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v26[3] = 270LL;
    v26[4] = 44LL;
    v26[5] = this;
    v26[6] = a2;
    v26[7] = 0LL;
    WdLogEvent5_WdCriticalError(v26);
  }
  v4 = *(_DWORD *)(*((_QWORD *)this + 6) + 376LL);
  v5 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 119));
  v6 = v5;
  v7 = 4 * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v7 = -1LL;
  v10 = operator new[](v7, 0x36346956u, PagedPool);
  if ( !v10 )
  {
    v27 = WdLogNewEntry5_WdWarning(v9, v8);
    WdLogEvent5_WdWarning(v27);
    return 3221225495LL;
  }
  v11 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v11 = -1LL;
  v14 = operator new[](v11, 0x36346956u, PagedPool);
  if ( !v14 )
  {
    v28 = WdLogNewEntry5_WdWarning(v13, v12);
    WdLogEvent5_WdWarning(v28);
    ExFreePoolWithTag(v10, 0);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    this,
    (unsigned int *)v10,
    (unsigned int)v5,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 472));
  if ( *((_QWORD *)a2 + 17) )
    v15 = *((_QWORD *)a2 + 18);
  else
    v15 = *((_QWORD *)a2 + 27);
  v16 = v15 / v4;
  v17 = v14;
  v18 = v5 + v16;
  while ( v16 < v18 )
    *v17++ = v16++;
  v19 = *((_QWORD *)a2 + 5);
  if ( v19 )
    v20 = *(_QWORD *)(v19 + 16);
  else
    v20 = *((_QWORD *)a2 + 6);
  v21 = *((_QWORD *)this + 6);
  v31 = v20;
  v34 = v5;
  v35 = v10;
  v36 = v14;
  if ( (*(_DWORD *)(v21 + 80) & 0x1000) != 0 )
    v32 = 0;
  else
    v32 = *(_WORD *)(v21 + 16) + 1;
  v33 = *(_WORD *)(v21 + 380);
  v22 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64))DxgCoreInterface[50])(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) + 2528LL),
          &v31,
          1LL);
  v23 = *(_QWORD *)this;
  v24 = (_QWORD *)((char *)a2 + 456);
  if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v24 = v23;
  *((_QWORD *)a2 + 58) = this;
  *(_QWORD *)(v23 + 8) = v24;
  *(_QWORD *)this = v24;
  if ( v22 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23);
    v29[7] = &v31;
    v29[3] = 270LL;
    v29[4] = 45LL;
    v29[5] = this;
    v29[6] = a2;
    WdLogEvent5_WdCriticalError(v29);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 40952LL) && (_DWORD)v5 )
  {
    v30 = v14;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL), v32, *v30++, 1LL, 2, 0LL, v31);
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(v14, 0);
  result = 0LL;
  *((_QWORD *)a2 + 56) = v10;
  return result;
}
