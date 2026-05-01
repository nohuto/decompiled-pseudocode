/*
 * XREFs of ?CDelayedTileActivation_CreateInstance@@YAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x18038FE1C
 * Callers:
 *     ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x18038D64C (-_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025AC0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB284 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18038F53C (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  int CanCastTo; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  const struct _GUID *v14; // rdx
  void **v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int64 v19; // [rsp+68h] [rbp+28h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  v7 = a7;
  *a7 = 0LL;
  a7 = 0LL;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease((volatile signed __int32 **)&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,unsigned short const * &,unsigned short const * &,unsigned short const * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
         (volatile signed __int32 **)&a7,
         &v18,
         &v19,
         &v20,
         &v21,
         &a5);
  CanCastTo = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 188LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  *v7 = 0LL;
  if ( InlineIsEqualGUID(&GUID_688a9333_462e_4715_9651_62bb62432419, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = a7;
    *v7 = a7;
    (*((void (__fastcall **)(void **))*v15 + 1))(v15);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v12, v13) )
  {
    *v7 = a7;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a7 + 1), v14, v7);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
    if ( CanCastTo < 0 )
    {
      v10 = (unsigned int)CanCastTo;
      v11 = 189LL;
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v7 + 8LL))(*v7);
LABEL_14:
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease((volatile signed __int32 **)&a7);
  return (unsigned int)CanCastTo;
}
