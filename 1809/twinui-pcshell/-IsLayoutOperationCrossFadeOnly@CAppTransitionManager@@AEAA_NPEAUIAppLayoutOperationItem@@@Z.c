/*
 * XREFs of ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x18032672C
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180326A90 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801301B0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

char __fastcall CAppTransitionManager::IsLayoutOperationCrossFadeOnly(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  char v4; // di
  __int64 v5; // rbx
  __int64 v6; // rax
  void (__fastcall *v7)(struct IAppLayoutOperationItem *, _QWORD, RECT *); // rax
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+38h] [rbp-28h] BYREF
  RECT rcSrc1; // [rsp+48h] [rbp-18h] BYREF

  v4 = 1;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2) )
    return 0;
  v9 = 0LL;
  if ( !*((_QWORD *)this + 26) )
    goto LABEL_19;
  *(_QWORD *)&rcDst.left = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rcDst.left);
  if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, struct tagRECT *))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &rcDst) >= 0 )
  {
    v5 = *((_QWORD *)this + 26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    (*(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 64LL))(
      v5,
      *(_QWORD *)&rcDst.left,
      &GUID_114ed843_c914_443d_9588_6ffb643e73d0,
      &v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rcDst.left);
  if ( !v9 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9) == 1 )
  {
LABEL_19:
    if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      if ( v9 )
        goto LABEL_14;
      v6 = *(_QWORD *)a2;
      *(_QWORD *)&rcSrc1.left = 0LL;
      *(_QWORD *)&rcSrc1.right = 0LL;
      *(_QWORD *)&rcDst.left = 0LL;
      v7 = *(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, RECT *))(v6 + 56);
      *(_QWORD *)&rcDst.right = 0LL;
      v7(a2, 0LL, &rcSrc1);
      (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a2 + 72LL))(
        a2,
        0LL,
        &rcDst);
      if ( Platform::Guid::Equals((Platform::Guid *)&rcSrc1, (const struct _GUID *)&rcDst) )
        goto LABEL_14;
    }
    else if ( v9 )
    {
      *(_QWORD *)&rcDst.left = 0LL;
      *(_QWORD *)&rcDst.right = 0LL;
      *(_QWORD *)&rcSrc1.left = 0LL;
      *(_QWORD *)&rcSrc1.right = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v9 + 24LL))(v9, 0LL, &rcSrc1);
      if ( !IntersectRect(&rcDst, &rcSrc1, (const RECT *)((char *)this + 264)) )
        goto LABEL_14;
    }
  }
  v4 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v4;
}
