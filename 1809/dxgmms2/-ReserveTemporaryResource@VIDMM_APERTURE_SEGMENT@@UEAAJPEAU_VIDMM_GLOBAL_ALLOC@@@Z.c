/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9A70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0077444 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::ReserveTemporaryResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v7; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // esi
  _QWORD *v12; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    v5 = WdLogNewEntry5_WdTrace(v4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = a2;
  }
  if ( *((_QWORD *)a2 + 2) > (unsigned __int64)this[6] )
    return 3223191808LL;
  if ( ((_DWORD)this[10] & 0x20) != 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 13LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  LOBYTE(v8) = 1;
  v9 = VIDMM_LINEAR_POOL::Allocate(
         this[19],
         *((_QWORD *)a2 + 2),
         *((unsigned int *)a2 + 8),
         v8,
         0LL,
         0LL,
         0,
         0,
         a2,
         (union _LARGE_INTEGER *)a2 + 32,
         (void **)a2 + 31);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v9;
  }
  else
  {
    *((_QWORD *)a2 + 33) = this;
    if ( g_IsInternalReleaseOrDbg )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v12[3] = *((_QWORD *)a2 + 31);
      v12[4] = *((int *)a2 + 65);
      v12[5] = *((unsigned int *)a2 + 64);
    }
  }
  return v11;
}
