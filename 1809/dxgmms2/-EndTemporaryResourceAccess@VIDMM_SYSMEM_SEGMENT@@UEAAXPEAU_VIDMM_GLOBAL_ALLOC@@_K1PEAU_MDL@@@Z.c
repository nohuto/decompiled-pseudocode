/*
 * XREFs of ?EndTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1C0080BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  __int64 v9; // rcx
  _QWORD *v10; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10[3] = a2;
    v10[4] = a3;
    v10[5] = a4;
  }
  v9 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v9 + 40139) )
  {
    if ( a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
      DpiUnmapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v9 + 24) + 192LL), a5);
  }
}
