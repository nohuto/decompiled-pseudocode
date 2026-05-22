/*
 * XREFs of ?CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z @ 0x1800B64AC
 * Callers:
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800B363C (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800ACFF4 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 */

__int64 __fastcall HidLampRangeUpdateReportBuilder::CreateAndInitialize(
        struct HidLampArrayDevice *a1,
        struct HidLampRangeUpdateReportBuilder **a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (char *)RefCountedObject::operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &HidLampRangeUpdateReportBuilder::`vftable';
    v4[16] = 0;
    *(_OWORD *)(v4 + 20) = 0uLL;
    *((_QWORD *)v4 + 5) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)v5 + 5, (volatile signed __int32 *)a1);
    result = 0LL;
    *(_OWORD *)(v5 + 20) = 0uLL;
    v5[16] = 0;
    *a2 = (struct HidLampRangeUpdateReportBuilder *)v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamprangeupdatereportbuilder.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
