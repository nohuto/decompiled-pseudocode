/*
 * XREFs of ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B0384
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AFFC0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B01B0 (-OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B1A1C (-SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v9)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, char *, _QWORD, struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, char *, char *, _BYTE *, unsigned int *, char *, char *); // rax
  int v11; // eax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v12; // rcx
  unsigned int v13; // edi
  bool v15; // cl
  int v16; // eax
  unsigned int v17; // ebx
  _BYTE v18[4]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v19[3]; // [rsp+64h] [rbp-Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v21; // [rsp+90h] [rbp+20h] BYREF
  char v22; // [rsp+98h] [rbp+28h] BYREF

  v7 = *(_QWORD *)a2;
  v19[0] = 0;
  v18[0] = 0;
  v22 = 0;
  v9 = *(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, char *, _QWORD, struct Windows::Internal::Holographic::ISpatialGraphNodeReference *, __int64, char *, char *, _BYTE *, unsigned int *, char *, char *))(v7 + 176);
  v21 = 0;
  v11 = v9(a2, a3, a4, a6, a5, (char *)this + 180, (char *)this + 244, v18, v19, &v22, &v21);
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( v21 )
      Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(v12, a2, a7);
    v15 = v19[0] != 3 && v19[0] != 6;
    if ( !*((_BYTE *)a2 + 107) || !v22 && a3 && !v15 )
      return 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)a2 + 80LL))(a2) )
    {
      v19[0] = 1;
      *((_BYTE *)a2 + 108) = 1;
    }
    v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, _QWORD, struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 152LL))(
            a2,
            v19[0],
            a7);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A8,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v16);
      return v17;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v11);
    return v13;
  }
}
