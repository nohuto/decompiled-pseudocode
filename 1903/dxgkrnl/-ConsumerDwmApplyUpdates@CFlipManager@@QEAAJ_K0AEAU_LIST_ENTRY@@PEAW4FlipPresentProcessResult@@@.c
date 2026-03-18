/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060C5C
 * Callers:
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C005FFD4 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___ @ 0x1C00606B0 (CFlipObjectQueue_CFlipPresentCancel_--Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C00610D4 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061B94 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0061FA8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00622D0 (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00623C0 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C0062FF4 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmApplyUpdates(
        CFlipManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _LIST_ENTRY *a4,
        enum FlipPresentProcessResult *a5)
{
  char *v5; // r15
  int updated; // r14d
  char *i; // r10
  const struct CFlipPresentUpdate *v12; // rbx
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rbx
  CFlipManager *v17; // rcx
  char *v18; // rcx
  CEndpointResourceStateManager *v19; // rdi
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (char *)this + 120;
  updated = 0;
  *(_DWORD *)a5 = 0;
  for ( i = (char *)*((_QWORD *)this + 15); ; i = *(char **)i )
  {
    if ( i == v5 )
    {
      *(_DWORD *)a5 = 3;
LABEL_6:
      v13 = (_QWORD *)((char *)this + 152);
      if ( (_QWORD *)*v13 != v13 )
      {
        v14 = (*v13 - 8LL) & -(__int64)(*v13 != 0LL);
        if ( v14 )
        {
          do
          {
            v15 = *(_QWORD **)(v14 + 8);
            if ( v15 == v13 )
              v16 = 0LL;
            else
              v16 = (unsigned __int64)(v15 - 1) & -(__int64)(v15 != 0LL);
            if ( *(_QWORD *)(v14 + 24) <= a2 )
              (**(void (__fastcall ***)(__int64, __int64))v14)(v14, 1LL);
            v14 = v16;
          }
          while ( v16 );
        }
      }
      return (unsigned int)updated;
    }
    v12 = (const struct CFlipPresentUpdate *)((unsigned __int64)(i - 24) & -(__int64)(i != 0LL));
    if ( *((_QWORD *)v12 + 8) == a2 )
      break;
  }
  v21[0] = a5;
  v21[1] = (unsigned __int64)(i - 24) & -(__int64)(i != 0LL);
  CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___(
    (_QWORD **)this + 19,
    (__int64)v21);
  if ( !*(_DWORD *)a5 )
  {
    if ( (*(__int64 (__fastcall **)(const struct CFlipPresentUpdate *))(*(_QWORD *)v12 + 32LL))(v12) > a3 )
    {
      *(_DWORD *)a5 = 1;
      goto LABEL_6;
    }
    v18 = (char *)*((_QWORD *)v12 + 3);
    if ( v18 == v5 )
      v17 = 0LL;
    else
      v17 = (CFlipManager *)((unsigned __int64)(v18 - 24) & -(__int64)(v18 != 0LL));
    if ( v17 && (*(__int64 (__fastcall **)(CFlipManager *))(*(_QWORD *)v17 + 32LL))(v17) <= a3 )
      *(_DWORD *)a5 = 3;
  }
  if ( *(_DWORD *)a5 == 1 )
    goto LABEL_6;
  if ( *(_DWORD *)a5 && *((_BYTE *)v12 + 73) )
  {
    v19 = (CFlipManager *)((char *)this + 88);
  }
  else
  {
    v19 = (CFlipManager *)((char *)this + 88);
    updated = CEndpointResourceStateManager::ApplyIncrementalUpdate((CFlipManager *)((char *)this + 88), v12);
    if ( updated < 0 )
    {
      *((_QWORD *)this + 6) = 2LL;
      return (unsigned int)updated;
    }
  }
  CFlipManager::ReleaseKernelPresentUpdateReferences(v17, v12);
  CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v5);
  if ( v12 )
    (*(void (__fastcall **)(const struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
  if ( !*(_DWORD *)a5 )
  {
    updated = CEndpointResourceStateManager::PrepareUpdateTokensForDwm(v19, (CFlipManager *)((char *)this - 32), a4);
    if ( updated < 0 )
      CEndpointResourceStateManager::CancelPendingUpdates(v19);
    else
      CEndpointResourceStateManager::CommitPendingUpdates(v19);
  }
  if ( updated >= 0 )
    goto LABEL_6;
  return (unsigned int)updated;
}
