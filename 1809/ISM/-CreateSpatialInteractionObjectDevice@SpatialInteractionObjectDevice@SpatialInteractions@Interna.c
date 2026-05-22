/*
 * XREFs of ?CreateSpatialInteractionObjectDevice@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAPEAV1234@PEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_W@Z @ 0x1800BB77C
 * Callers:
 *     ?AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800B2A20 (-AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800BBA6C (-RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEA.c)
 *     ??0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800BC40C (--0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::CreateSpatialInteractionObjectDevice(
        struct Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice **a1,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a3,
        const wchar_t *a4)
{
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rsi
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v15; // rbx
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *v16; // rax
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  struct Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *v20; // rcx
  __int64 v21; // rcx
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v22; // rcx
  struct Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *v24; // [rsp+30h] [rbp-39h]
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v25; // [rsp+38h] [rbp-31h] BYREF
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *v27; // [rsp+48h] [rbp-21h]
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *v28; // [rsp+50h] [rbp-19h]
  __int64 v29; // [rsp+58h] [rbp-11h]
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *v30; // [rsp+60h] [rbp-9h]
  _BYTE v31[16]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v29 = -2LL;
  *a1 = 0LL;
  v25 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *, __int64, const wchar_t *, GUID *, struct Windows::Internal::Holographic::ISpatialObjectDevice **))(*(_QWORD *)a3 + 24LL))(
         a3,
         9LL,
         a4,
         &DirectX::g_XMZero,
         &v25);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_34;
  }
  v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *, void *, _BYTE *, __int64, _QWORD))(*(_QWORD *)v25 + 72LL))(
          v25,
          &SPATIALPROP_HandTrackerObjectId,
          v31,
          16LL,
          0LL);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v10);
    v9 = -2147418113;
    goto LABEL_34;
  }
  v26 = 0LL;
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *, _BYTE *, __int64 *))(*(_QWORD *)v25 + 136LL))(
          v25,
          v31,
          &v26);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v14 = v26;
    v15 = v25;
    v24 = 0LL;
    v16 = (Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *)operator new(
                                                                                          0xE8uLL,
                                                                                          (const struct std::nothrow_t *)&std::nothrow);
    v27 = v16;
    v30 = v16;
    if ( v16 )
    {
      v28 = v16;
      v17 = (Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *)Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::SpatialInteractionHandObjectDevice(v16);
      v28 = v17;
      v27 = 0LL;
      v18 = Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RuntimeClassInitialize(
              v17,
              a2,
              a3,
              a4,
              v15);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v19 = *((_QWORD *)v17 + 25);
        if ( v19 != v14 )
        {
          if ( v14 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
            v19 = *((_QWORD *)v17 + 25);
          }
          *((_QWORD *)v17 + 25) = v14;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CD,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)(unsigned int)v18);
      }
      if ( v9 >= 0 )
      {
        if ( v17 )
          (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *))(*(_QWORD *)v17 + 8LL))(v17);
        v24 = v17;
        if ( v17 )
          (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *))(*(_QWORD *)v17 + 16LL))(v17);
        v9 = 0;
      }
      else if ( v17 )
      {
        (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v9 >= 0 )
      {
        v20 = 0LL;
        *a1 = v24;
        v9 = 0;
        goto LABEL_30;
      }
    }
    else
    {
      v9 = -2147024882;
    }
    v12 = (unsigned int)v9;
    v13 = 214LL;
  }
  else
  {
    v12 = (unsigned int)v11;
    v13 = 207LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)v12);
  v20 = v24;
LABEL_30:
  if ( v20 )
    (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_34:
  v22 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *, _QWORD))(*(_QWORD *)v22 + 16LL))(
      v22,
      *(_QWORD *)v22);
  }
  return (unsigned int)v9;
}
