/*
 * XREFs of ?v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x18038AEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180159C40 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x18038A2C0 (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 */

bool __fastcall CAppArrangementSingleTransitionTarget::v_ShouldUseGhostWindow(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2)
{
  __int64 v2; // rax
  bool v4; // bl
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = 0;
  v7 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v2 + 88))(a2)
    && (!Platform::Guid::Equals(
           (CAppArrangementSingleTransitionTarget *)((char *)this + 172),
           (const struct _GUID *)((char *)this + 188))
     || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
           a2,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v7) >= 0 )
      v4 = (CAppTransitionTargetBase::_GetSpecialTransitionInfo((__int64)this, v7) & 1) == 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
