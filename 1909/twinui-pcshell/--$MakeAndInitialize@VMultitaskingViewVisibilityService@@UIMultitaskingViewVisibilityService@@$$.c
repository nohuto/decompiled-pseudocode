/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1803635C0
 * Callers:
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180363A3C (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180080F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180363738 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewVisibilityService,IMultitaskingViewVisibilityService,>(
        void **a1)
{
  MultitaskingViewVisibilityService *v2; // rax
  int CanCastTo; // ebx
  MultitaskingViewVisibilityService *v4; // rax
  MultitaskingViewVisibilityService *v5; // rdi
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  _DWORD *v8; // rcx
  __int64 v9; // r8
  const struct _GUID *v10; // r9
  volatile int *v11; // rdx

  *a1 = 0LL;
  v2 = (MultitaskingViewVisibilityService *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = MultitaskingViewVisibilityService::MultitaskingViewVisibilityService(v2);
  *a1 = 0LL;
  v5 = v4;
  if ( !InlineIsEqualGUID(&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v6, v7) )
    {
      *a1 = v5;
    }
    else
    {
      if ( !InlineIsEqualGUID(v8, &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58) )
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v9 + 8), v10, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
          goto LABEL_14;
        goto LABEL_12;
      }
      *a1 = (void *)v9;
    }
    CanCastTo = 0;
LABEL_12:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_14;
  }
  *a1 = v5;
  (*(void (__fastcall **)(MultitaskingViewVisibilityService *))(*(_QWORD *)v5 + 8LL))(v5);
  CanCastTo = 0;
LABEL_14:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::Release(
      (__int64)v5,
      v11);
  return (unsigned int)CanCastTo;
}
