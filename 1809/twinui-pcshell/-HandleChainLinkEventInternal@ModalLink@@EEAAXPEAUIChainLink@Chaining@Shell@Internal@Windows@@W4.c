/*
 * XREFs of ?HandleChainLinkEventInternal@ModalLink@@EEAAXPEAUIChainLink@Chaining@Shell@Internal@Windows@@W4ChainLinkEventTypeInternal@?$ChainLink@VObjectWithSrwLock@@@3456@@Z @ 0x1801C5B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ModalLink::HandleChainLinkEventInternal(__int64 a1, __int64 a2, int a3)
{
  struct IInspectable *v4; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 && *(_BYTE *)(a1 + 136) )
    {
      v4 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
      if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                  (Microsoft::WRL::WeakRef *)(a1 + 128),
                  &GUID_c126df4f_0ea7_48c6_875c_23b737939cd1,
                  &v4) >= 0 )
      {
        if ( v4 )
          ((void (__fastcall *)(struct IInspectable *, _QWORD))v4->lpVtbl[2].GetTrustLevel)(v4, 0LL);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 136) = 1;
  }
}
