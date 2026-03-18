/*
 * XREFs of ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACD40
 * Callers:
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00ACC8C (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AE694 (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VID.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // di
  DXGFASTMUTEX *v6; // r14
  PRKPROCESS *v7; // rbx
  __int64 v8; // r9
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  if ( !dword_1C004E434 )
    return 0;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[63] + 2) == 3 )
  {
    v6 = a2[13];
    v7 = (PRKPROCESS *)*((_QWORD *)v6 + 1);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v7, &ApcState);
    if ( dword_1C004E434 == 1 )
    {
      v2 = VIDMM_GLOBAL::QueryLocalAllocationResidency(this, v6) == D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
    }
    else if ( dword_1C004E434 == 2 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2[13] + 1) + 24LL) + 128LL))(
             *(_QWORD *)(*((_QWORD *)a2[13] + 1) + 24LL),
             *((_QWORD *)a2[13] + 3)) >= 0 )
      {
        LOBYTE(v8) = 1;
        (*(void (__fastcall **)(_QWORD, DXGFASTMUTEX **, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a2[13] + 1) + 24LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)a2[13] + 1) + 24LL),
          a2,
          *((_QWORD *)a2[13] + 3),
          v8);
      }
      else
      {
        v2 = 1;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
  return v2;
}
