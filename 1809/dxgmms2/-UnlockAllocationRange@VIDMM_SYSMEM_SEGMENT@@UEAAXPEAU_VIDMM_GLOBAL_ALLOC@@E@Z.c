/*
 * XREFs of ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0080650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C006C1CC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006C398 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006F03C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::UnlockAllocationRange(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3)
{
  int v6; // r14d
  __int64 v7; // rsi
  char *v8; // rax
  void *v9; // [rsp+50h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-50h] BYREF

  v6 = 0;
  v7 = *((_QWORD *)a2 + 13);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( (*((_DWORD *)a2 + 20) & 0x1000) == 0 )
  {
    if ( *((_BYTE *)a2 + 288) )
    {
      if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v7 )
      {
        KeStackAttachProcess(**(PRKPROCESS **)(v7 + 8), &ApcState);
        v6 = 1;
      }
      v8 = VidMmMapViewOfAllocation(
             (struct _VIDMM_LOCAL_ALLOC *)v7,
             *((_QWORD *)a2 + 34),
             *((const GUID **)a2 + 35),
             &v9,
             0);
      if ( v8 )
      {
        memmove(v8, *((const void **)this + 32), *((_QWORD *)a2 + 35));
        VidMmUnmapViewOfAllocation((struct _VIDMM_LOCAL_ALLOC *)v7, (GUID *)v9);
      }
      else
      {
        memset(*((void **)this + 32), 0, *((_QWORD *)a2 + 35));
        *((_DWORD *)a2 + 19) |= 0x100000u;
      }
      if ( v6 )
        KeUnstackDetachProcess(&ApcState);
    }
    else
    {
      VIDMM_GLOBAL::UnlockAllocation(
        *((VIDMM_GLOBAL **)this + 1),
        (struct _VIDMM_LOCAL_ALLOC *)v7,
        *((const GUID **)a2 + 34),
        *((_QWORD *)a2 + 35),
        1u,
        a3);
    }
  }
  *((_QWORD *)a2 + 35) = 0LL;
  *((_QWORD *)a2 + 34) = 0LL;
  *((_WORD *)a2 + 144) = 0;
}
