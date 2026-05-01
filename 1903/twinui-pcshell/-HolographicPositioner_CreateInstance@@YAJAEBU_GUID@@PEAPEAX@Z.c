/*
 * XREFs of ?HolographicPositioner_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180200F18
 * Callers:
 *     ?CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801FFA90 (-CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHolographicPositioner@@@Z @ 0x1801FC9B0 (--$MakeAndInitialize@VHolographicPositioner@@UIHolographicPositioner@@$$V@Details@WRL@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HolographicPositioner_CreateInstance(const struct _GUID *a1, void **a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HolographicPositioner *v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    *a2 = 0LL;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<HolographicPositioner,IHolographicPositioner,>(&v10);
    v4 = v5;
    if ( v5 >= 0 )
    {
      if ( !v10 )
      {
        v4 = -2147467259;
        v7 = 2147500037LL;
        v6 = 2331LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)v7);
        goto LABEL_11;
      }
      v5 = (**(__int64 (__fastcall ***)(HolographicPositioner *, const struct _GUID *, void **))v10)(v10, a1, a2);
      v4 = v5;
      if ( v5 >= 0 )
      {
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
        return v4;
      }
      v6 = 2332LL;
    }
    else
    {
      v6 = 2329LL;
    }
    v7 = (unsigned int)v5;
    goto LABEL_10;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x914,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x80070057LL);
  return v4;
}
