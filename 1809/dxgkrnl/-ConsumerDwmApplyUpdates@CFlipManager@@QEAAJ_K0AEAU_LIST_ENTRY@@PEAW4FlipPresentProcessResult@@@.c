/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059BD4
 * Callers:
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0058F24 (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___ @ 0x1C0059610 (CFlipObjectQueue_CFlipPresentCancel_--Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C005A0B4 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005AB98 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C005AEE8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C005B214 (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C005B310 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C005BECC (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_.c)
 */

__int64 __fastcall CFlipManager::ConsumerDwmApplyUpdates(
        CFlipManager *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _LIST_ENTRY *a4,
        enum FlipPresentProcessResult *a5)
{
  CFlipManager *v5; // r15
  char **v6; // rbx
  int updated; // r14d
  CFlipManager *v12; // r10
  __int64 v13; // rax
  CFlipManager *v14; // rcx
  char *v15; // rcx
  CEndpointResourceStateManager *v16; // rdi
  _QWORD *v17; // rbp
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rbx
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (CFlipManager *)((char *)this + 136);
  v6 = 0LL;
  updated = 0;
  *(_DWORD *)a5 = 0;
  v12 = (CFlipManager *)*((_QWORD *)this + 17);
  if ( v12 == (CFlipManager *)((char *)this + 136) )
  {
LABEL_29:
    *(_DWORD *)a5 = 3;
    goto LABEL_30;
  }
  do
  {
    v13 = *(_QWORD *)((((unsigned __int64)v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x40);
    if ( v13 == a2 )
    {
      v6 = (char **)(((unsigned __int64)v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64));
      goto LABEL_6;
    }
    v12 = *(CFlipManager **)v12;
  }
  while ( v12 != v5 );
  if ( v13 != a2 )
    goto LABEL_29;
LABEL_6:
  v22[0] = a5;
  v22[1] = v6;
  CFlipObjectQueue_CFlipPresentCancel_::Iterate__lambda_d5f51a313acd966a92052f16bc4066f0___(
    (_QWORD **)this + 21,
    (__int64)v22);
  if ( !*(_DWORD *)a5 )
  {
    if ( (*((__int64 (__fastcall **)(char **))*v6 + 4))(v6) > a3 )
    {
      *(_DWORD *)a5 = 1;
LABEL_30:
      v17 = (_QWORD *)((char *)this + 168);
      if ( (_QWORD *)*v17 != v17 )
      {
        v18 = (*v17 - 8LL) & -(__int64)(*v17 != 0LL);
        if ( v18 )
        {
          do
          {
            v19 = *(_QWORD **)(v18 + 8);
            if ( v19 == v17 )
              v20 = 0LL;
            else
              v20 = (unsigned __int64)(v19 - 1) & -(__int64)(v19 != 0LL);
            if ( *(_QWORD *)(v18 + 24) <= a2 )
              (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
            v18 = v20;
          }
          while ( v20 );
        }
      }
      return (unsigned int)updated;
    }
    v15 = v6[3];
    if ( v15 == (char *)v5 )
      v14 = 0LL;
    else
      v14 = (CFlipManager *)((unsigned __int64)(v15 - 24) & -(__int64)(v15 != 0LL));
    if ( v14 && (*(__int64 (__fastcall **)(CFlipManager *))(*(_QWORD *)v14 + 32LL))(v14) <= a3 )
      *(_DWORD *)a5 = 3;
  }
  if ( *(_DWORD *)a5 == 1 )
    goto LABEL_30;
  if ( *(_DWORD *)a5 && *((_BYTE *)v6 + 73) )
  {
    v16 = (CFlipManager *)((char *)this + 96);
  }
  else
  {
    v16 = (CFlipManager *)((char *)this + 96);
    updated = CEndpointResourceStateManager::ApplyIncrementalUpdate(
                (CFlipManager *)((char *)this + 96),
                (const struct CFlipPresentUpdate *)v6);
    if ( updated < 0 )
    {
      *((_QWORD *)this + 6) = 2LL;
      return (unsigned int)updated;
    }
  }
  CFlipManager::ReleaseKernelPresentUpdateReferences(v14, (struct CFlipPresentUpdate *)v6);
  CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v5);
  if ( v6 )
    (*((void (__fastcall **)(char **, __int64))*v6 + 3))(v6, 1LL);
  if ( !*(_DWORD *)a5 )
  {
    updated = CEndpointResourceStateManager::PrepareUpdateTokensForDwm(v16, (CFlipManager *)((char *)this - 32), a4);
    if ( updated < 0 )
      CEndpointResourceStateManager::CancelPendingUpdates(v16);
    else
      CEndpointResourceStateManager::CommitPendingUpdates(v16);
  }
  if ( updated >= 0 )
    goto LABEL_30;
  return (unsigned int)updated;
}
