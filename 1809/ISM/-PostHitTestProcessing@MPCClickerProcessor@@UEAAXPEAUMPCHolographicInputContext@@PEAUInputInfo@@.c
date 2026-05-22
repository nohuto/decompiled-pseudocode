/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FFC00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800454D0 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1801008C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        MPCClickerProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  bool IsPrimary; // al
  int v6; // edx
  int v7; // eax
  MPCGestureHandlerManager *Instance; // rcx
  const char *v9; // r9
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+50h] [rbp+18h]

  IsPrimary = MPCInputProviderBase::IsPrimary(this);
  v6 = 0;
  if ( IsPrimary && *((_BYTE *)a3 + 600) )
  {
    v7 = *((_DWORD *)a3 + 131);
    if ( v7 == 2 )
    {
      v6 = 1;
    }
    else if ( (unsigned int)(v7 - 4) <= 1 )
    {
      v6 = 2;
    }
    *((_DWORD *)a3 + 274) = v6;
    *((_DWORD *)a3 + 278) = *((_DWORD *)a3 + 151);
    *((_DWORD *)a3 + 279) = *((_DWORD *)a3 + 152);
    *((_OWORD *)a3 + 70) = *(_OWORD *)((char *)a3 + 612);
    *((_DWORD *)a3 + 284) = *((_DWORD *)a3 + 158);
    *((_BYTE *)a3 + 1140) = *((_BYTE *)a3 + 897) == 1;
    v11 = &v10;
    v10 = (unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24);
    if ( v10 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24))
                                               + 8LL))((unsigned __int64)this & -(__int64)(this != (MPCClickerProcessor *)24));
    Instance = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, &v10, v9);
  }
}
