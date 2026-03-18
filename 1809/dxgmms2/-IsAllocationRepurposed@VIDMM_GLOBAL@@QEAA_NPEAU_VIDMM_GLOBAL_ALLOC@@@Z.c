/*
 * XREFs of ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A9934
 * Callers:
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00A9880 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AB414 (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VID.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // bl
  DXGFASTMUTEX *v6; // rsi
  __int64 v7; // r9
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  if ( !dword_1C004D42C )
    return 0;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[63] + 2) == 3 )
  {
    v6 = a2[13];
    KeStackAttachProcess(**((PRKPROCESS **)v6 + 1), &ApcState);
    if ( dword_1C004D42C == 1 )
    {
      v2 = VIDMM_GLOBAL::QueryLocalAllocationResidency(this, v6) == D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
    }
    else if ( dword_1C004D42C == 2 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2[13] + 1) + 24LL) + 128LL))(
             *(_QWORD *)(*((_QWORD *)a2[13] + 1) + 24LL),
             *((_QWORD *)a2[13] + 3)) >= 0 )
      {
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(_QWORD, DXGFASTMUTEX **, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a2[13] + 1) + 24LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)a2[13] + 1) + 24LL),
          a2,
          *((_QWORD *)a2[13] + 3),
          v7);
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
