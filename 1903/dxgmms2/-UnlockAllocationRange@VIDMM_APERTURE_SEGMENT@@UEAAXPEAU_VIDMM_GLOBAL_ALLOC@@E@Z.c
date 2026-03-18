/*
 * XREFs of ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00BCD50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006A524 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006A6E4 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006AA80 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnlockAllocationRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // r14
  size_t *v9; // rsi
  char *v10; // rax
  void *v11; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 0;
  v8 = *((_QWORD *)a2 + 13);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6) + 24) = a2;
  if ( *((_BYTE *)a2 + 288) )
  {
    if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v8 )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v8 + 8), &ApcState);
      v7 = 1;
    }
    v9 = (size_t *)((char *)a2 + 280);
    v10 = VidMmMapViewOfAllocation(
            (struct _VIDMM_LOCAL_ALLOC *)v8,
            *((_QWORD *)a2 + 34),
            *((const GUID **)a2 + 35),
            &v11,
            0);
    if ( v10 )
    {
      memmove(v10, *((const void **)this + 32), *v9);
      VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v8, v11);
    }
    else
    {
      memset(*((void **)this + 32), 0, *v9);
      *((_DWORD *)a2 + 19) |= 0x100000u;
    }
    if ( v7 )
      KeUnstackDetachProcess(&ApcState);
  }
  else
  {
    v9 = (size_t *)((char *)a2 + 280);
    VIDMM_GLOBAL::UnlockAllocation(
      *((VIDMM_GLOBAL **)this + 1),
      (struct _VIDMM_LOCAL_ALLOC *)v8,
      *((const GUID **)a2 + 34),
      *((_QWORD *)a2 + 35),
      1,
      a3);
  }
  *((_QWORD *)a2 + 34) = 0LL;
  *v9 = 0LL;
  *((_WORD *)a2 + 144) = 0;
}
