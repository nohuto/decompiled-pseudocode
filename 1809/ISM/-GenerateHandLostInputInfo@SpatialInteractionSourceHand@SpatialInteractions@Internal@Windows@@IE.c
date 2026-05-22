/*
 * XREFs of ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800BEBB8
 * Callers:
 *     ?SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800BE740 (-SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugm.c)
 * Callees:
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GenerateHandLostInputInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo *a2)
{
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  memset_0(a2, 0, 0x110uLL);
  *(_OWORD *)a2 = _xmm;
  *((_DWORD *)a2 + 66) = 4;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  *((_DWORD *)a2 + 30) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 63) = *((_DWORD *)this + 2);
  QueryPerformanceCounter((LARGE_INTEGER *)a2 + 18);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
    this,
    (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v6);
  v4 = v7;
  v5 = v6;
  *((_DWORD *)a2 + 64) = -1;
  *((_DWORD *)a2 + 32) = 0;
  *((_DWORD *)a2 + 62) = v4;
  *(_OWORD *)((char *)a2 + 232) = v5;
  *((_DWORD *)a2 + 29) = 1;
  *((_DWORD *)a2 + 33) = 1;
}
