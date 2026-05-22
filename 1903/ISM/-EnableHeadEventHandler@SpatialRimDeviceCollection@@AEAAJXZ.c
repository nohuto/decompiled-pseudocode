/*
 * XREFs of ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x18009CB34
 * Callers:
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x18009C520 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VInputServiceProxy@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180058ED8 (--1-$MakeAllocator@VInputServiceProxy@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800945EC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x180099804 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18009A120 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ @ 0x18009BD48 (--0SpatialRimDeviceCollectionHeadEventHandler@@QEAA@XZ.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x18009D2F4 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x18009F1EC (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::EnableHeadEventHandler(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  SpatialRimDeviceCollectionHeadEventHandler **v3; // rdi
  void *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  RawInputProvidersTracing *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v14; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+60h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2792);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v16 = v2;
  v3 = (SpatialRimDeviceCollectionHeadEventHandler **)((char *)this + 2832);
  if ( *((_QWORD *)this + 354) )
    goto LABEL_12;
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile signed __int32 **)this + 354);
  *v3 = 0LL;
  v4 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v4;
  if ( v4 )
  {
    v7 = (volatile signed __int32 *)SpatialRimDeviceCollectionHeadEventHandler::SpatialRimDeviceCollectionHeadEventHandler((SpatialRimDeviceCollectionHeadEventHandler *)v4);
    v15 = v7;
    if ( v7 )
      _InterlockedIncrement(v7 + 3);
    *v3 = (SpatialRimDeviceCollectionHeadEventHandler *)v7;
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v15);
    v6 = 0;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<InputServiceProxy>::~MakeAllocator<InputServiceProxy>(&v14);
    v6 = -2147024882;
  }
  if ( RawInputProvidersTracing::IsEnabled(v5) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v8,
      (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::HeadEventHandlerEnabled_(v9, v6);
  }
  if ( v6 < 0
    || (v10 = SpatialRimDeviceCollectionHeadEventHandler::SetOwner(*v3, this, *((struct IMessageSession **)this + 346)),
        v11 = v10,
        v10 >= 0) )
  {
LABEL_12:
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v16);
  return v11;
}
