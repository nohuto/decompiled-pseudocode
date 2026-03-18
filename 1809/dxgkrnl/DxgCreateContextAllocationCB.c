/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C00F36F0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0010BE0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C80 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0010CD0 (-VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATI.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(__int64 a1)
{
  __int64 v2; // rcx
  __int64 DxgAdapter; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct DXGCONTEXT *v8; // r8
  unsigned int ContextAllocation; // ebx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _BYTE v14[8]; // [rsp+80h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v14);
  if ( KeGetCurrentIrql() )
  {
    v11 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v11 + 24) = 141LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DxgAdapter = DpiGetDxgAdapter(*(_QWORD *)(a1 + 8));
  v5 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_17;
  if ( !*(_QWORD *)(DxgAdapter + 2528) )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    v12[3] = 275LL;
    v12[4] = 7LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    if ( !*(_DWORD *)(v6 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v6 + 104)) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7);
      v13[3] = 275LL;
      v13[4] = 4LL;
      v13[5] = v6;
      v13[6] = 0LL;
      v13[7] = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    v8 = *(struct DXGCONTEXT **)(a1 + 24);
    if ( v8 && *(int *)(v5 + 2160) >= 9472 )
      v8 = *(struct DXGCONTEXT **)v8;
    ContextAllocation = VIDMM_EXPORT::VidMmCreateContextAllocation(
                          *(VIDMM_EXPORT **)(*(_QWORD *)(v5 + 2528) + 544LL),
                          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 2528) + 552LL),
                          *(_DWORD *)(a1 + 80),
                          *(struct _DXGK_CREATECONTEXTALLOCATIONFLAGS *)a1,
                          (struct DXGDEVICE *)v6,
                          v8,
                          *(void **)(a1 + 32),
                          *(_QWORD *)(a1 + 40),
                          *(_DWORD *)(a1 + 48),
                          *(_DWORD *)(a1 + 52),
                          *(_DWORD *)(a1 + 56),
                          *(struct _D3DDDI_SEGMENTPREFERENCE *)(a1 + 60),
                          *(struct _DXGK_SEGMENTBANKPREFERENCE *)(a1 + 64),
                          *(struct _DXGK_ALLOCATIONINFOFLAGS *)(a1 + 68),
                          (struct _VIDMM_CONTEXT_ALLOC **)(a1 + 72));
  }
  else
  {
LABEL_17:
    ContextAllocation = -1073741811;
  }
  if ( v14[0] )
    KeUnstackDetachProcess(&ApcState);
  return ContextAllocation;
}
