/*
 * XREFs of ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FEFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045AE0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHeadProcessor::PostHitTestProcessing(
        MPCHeadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  unsigned __int64 v5; // rdi
  MPCGestureHandlerManager *Instance; // rcx
  const char *v7; // r9
  struct MPCGestureHandlerManager *v8; // rcx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v10; // [rsp+50h] [rbp+18h]

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a3 + 600) )
  {
    *((_DWORD *)a3 + 274) = 4;
    *((_DWORD *)a3 + 278) = *((_DWORD *)a3 + 151);
    *((_DWORD *)a3 + 279) = *((_DWORD *)a3 + 152);
    *((_OWORD *)a3 + 70) = *(_OWORD *)((char *)a3 + 612);
    *((_DWORD *)a3 + 284) = *((_DWORD *)a3 + 158);
    *((_BYTE *)a3 + 1140) = *((_BYTE *)a3 + 897) == 1;
    v10 = &v9;
    v5 = (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24);
    v9 = v5;
    if ( v5 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, &v9, v7);
    v10 = &v9;
    v9 = (unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24);
    if ( v5 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCHeadProcessor *)24));
    v8 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v8, &v9);
  }
}
