/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x1801E25DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x1801E26CC (--0ManipulationData@@QEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 72));
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 256));
  `vector constructor iterator'(
    (char *)this + 452,
    8LL,
    3LL,
    (void (__fastcall *)(char *))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  `vector constructor iterator'(
    (char *)this + 480,
    8LL,
    5LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 65) = 0LL;
  memset_0((char *)this + 528, 0, 0x28uLL);
  *((_BYTE *)this + 568) = 0;
  memset_0((char *)this + 572, 0, 0x88uLL);
  *((_DWORD *)this + 177) = 0;
  memset_0((char *)this + 712, 0, 0x28uLL);
  *((_QWORD *)this + 94) = 0LL;
  return this;
}
