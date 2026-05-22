/*
 * XREFs of ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E416C
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3CE0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800ECCC0 (-OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E48B4 (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::PrepareAndSendInputInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a6,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a7)
{
  __int64 v7; // rax
  int (__fastcall *v9)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, char *, _QWORD, struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, char *, char *, _BYTE *, unsigned int *, char *, char *); // rax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v11; // rcx
  bool v12; // cl
  int v13; // eax
  unsigned int v14; // ebx
  _BYTE v16[4]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v17[3]; // [rsp+64h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v19; // [rsp+90h] [rbp+20h] BYREF
  char v20; // [rsp+98h] [rbp+28h] BYREF

  v7 = *(_QWORD *)a2;
  v17[0] = 0;
  v16[0] = 0;
  v20 = 0;
  v9 = *(int (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, char *, _QWORD, struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, char *, char *, _BYTE *, unsigned int *, char *, char *))(v7 + 176);
  v19 = 0;
  if ( v9(a2, a3, a4, a6, a5, (char *)this + 180, (char *)this + 244, v16, v17, &v20, &v19) < 0 )
    return 0LL;
  if ( v19 )
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(v11, a2, a7);
  v12 = v17[0] != 3 && v17[0] != 6;
  if ( !*((_BYTE *)a2 + 107) || !v20 && a3 && !v12 )
    return 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)a2 + 80LL))(a2) )
  {
    v17[0] = 1;
    *((_BYTE *)a2 + 108) = 1;
  }
  v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, _QWORD, struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 152LL))(
          a2,
          v17[0],
          a7);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x242,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
