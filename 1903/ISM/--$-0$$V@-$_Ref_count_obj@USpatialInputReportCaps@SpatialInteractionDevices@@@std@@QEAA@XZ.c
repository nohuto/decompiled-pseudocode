/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@QEAA@XZ @ 0x1800DA2C4
 * Callers:
 *     SpatialInteractionDevices::GetReportCaps @ 0x1800DC7B4 (SpatialInteractionDevices--GetReportCaps.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

__int64 __fastcall std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::`vftable';
  memset_0((void *)(a1 + 24), 0, 0xA8uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  memset_0((void *)(a1 + 64), 0, 0x20uLL);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  memset_0((void *)(a1 + 120), 0, 0x20uLL);
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 156) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  return a1;
}
