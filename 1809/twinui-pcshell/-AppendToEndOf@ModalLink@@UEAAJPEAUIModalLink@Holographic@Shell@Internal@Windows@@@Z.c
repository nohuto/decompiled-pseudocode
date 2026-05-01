/*
 * XREFs of ?AppendToEndOf@ModalLink@@UEAAJPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C5A70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AppendToChainLink@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIUnknown@@@Z @ 0x1801C58F0 (-AppendToChainLink@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@IEAAJPEAUIU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ModalLink::AppendToEndOf(
        ModalLink *this,
        struct Windows::Internal::Shell::Holographic::IModalLink *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::Holographic::IModalLink *, GUID *, _QWORD))a2)(
         a2,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 41LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\modallink.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::AppendToChainLink((__int64)this - 72, v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 42LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return v5;
}
