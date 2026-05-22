/*
 * XREFs of ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800F4AB8
 * Callers:
 *     ?SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800F6870 (-SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugm.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800E278C (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GenerateHandLostInputInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo *a2)
{
  __int128 v4; // xmm0
  char v5; // al
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  memset_0(a2, 0, 0x530uLL);
  *(_OWORD *)a2 = _xmm;
  *((_DWORD *)a2 + 330) = 4;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  *((_DWORD *)a2 + 47) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 80) = *((_DWORD *)this + 2);
  QueryPerformanceCounter((LARGE_INTEGER *)a2 + 26);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
    this,
    (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v6);
  v4 = v6;
  *((_DWORD *)a2 + 79) = v7;
  *(_OWORD *)((char *)a2 + 300) = v4;
  *((_BYTE *)a2 + 332) = *((_BYTE *)this + 156);
  v5 = *((_BYTE *)this + 157);
  *((_DWORD *)a2 + 82) = -1;
  *((_DWORD *)a2 + 49) = 0;
  *((_BYTE *)a2 + 333) = v5;
  *((_DWORD *)a2 + 46) = 1;
  *((_WORD *)a2 + 46) = 257;
  *((_WORD *)a2 + 62) = 257;
  *((_QWORD *)a2 + 42) = *((unsigned int *)this + 64);
}
