/*
 * XREFs of ?SendDeviceUpdate@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B1A1C
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AFFC0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUIPerceptionTimestamp@Perception@4@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B01B0 (-OnHeadUpdateEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows.c)
 *     ?PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAVSpatialInteractionSourceDevice@234@PEADK_JPEAUISpatialGraphNodeReference@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800B0384 (-PrepareAndSendInputInfo@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SendDeviceUpdate(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *a2,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  _BYTE v8[944]; // [rsp+20h] [rbp-3C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3E8h] [rbp+0h]

  memset_0(v8, 0, 0x3A4uLL);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, _BYTE *))(*(_QWORD *)a2 + 144LL))(
         a2,
         v8);
  v6 = v5;
  if ( v5 >= 0 )
  {
    result = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *, _QWORD, _BYTE *))(*(_QWORD *)a3 + 32LL))(
               a3,
               *((unsigned int *)a2 + 2),
               v8);
    if ( (_DWORD)result == -2147483638 )
    {
      *((_BYTE *)a2 + 105) = 1;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43B,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  return result;
}
