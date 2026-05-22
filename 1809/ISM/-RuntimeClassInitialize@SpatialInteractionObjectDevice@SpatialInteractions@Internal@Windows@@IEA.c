/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800BBA6C
 * Callers:
 *     ?CreateSpatialInteractionObjectDevice@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAPEAV1234@PEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_W@Z @ 0x1800BB77C (-CreateSpatialInteractionObjectDevice@SpatialInteractionObjectDevice@SpatialInteractions@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x1800A3268 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a3,
        wchar_t *a4,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a5)
{
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v8; // rcx
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v9; // r14
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall **v12)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *, GUID *, struct Windows::Internal::Holographic::ISpatialObjectDevice **); // rax
  int v13; // eax
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rcx
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v23; // [rsp+40h] [rbp+20h] BYREF

  std::wstring::assign((_QWORD *)this + 10, a4);
  v8 = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)*((_QWORD *)this + 15);
  v9 = a5;
  if ( v8 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *))(*(_QWORD *)a5 + 8LL))(a5);
      v8 = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)*((_QWORD *)this + 15);
    }
    *((_QWORD *)this + 15) = v9;
    if ( v8 )
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v10 = (struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *)*((_QWORD *)this + 14);
  if ( v10 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = (struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *)*((_QWORD *)this + 14);
    }
    *((_QWORD *)this + 14) = a3;
    if ( v10 )
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  v11 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *(__int64 (__fastcall ***)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *, GUID *, struct Windows::Internal::Holographic::ISpatialObjectDevice **))a2;
  a5 = 0LL;
  v13 = (*v12)(a2, &GUID_00000038_0000_0000_c000_000000000046, &a5);
  v14 = a5;
  v15 = v13;
  if ( v13 < 0 )
    goto LABEL_16;
  v23 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *, __int64 *))(*(_QWORD *)a5 + 24LL))(
          a5,
          &v23);
  if ( v15 < 0 )
  {
    v16 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v14 = a5;
LABEL_16:
    if ( v14 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_31;
  }
  v17 = v23;
  v18 = v23;
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v17 = v23;
  }
  v19 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v18;
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v17 = v23;
  }
  if ( v17 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v20 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v15 = 0;
LABEL_31:
  if ( v15 >= 0 )
    v15 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v15);
  (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v15;
}
