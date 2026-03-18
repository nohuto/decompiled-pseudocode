/*
 * XREFs of MiInitializeColorBase @ 0x14012D120
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186948 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14074E0B0 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 */

char __fastcall MiInitializeColorBase(unsigned __int64 a1)
{
  int v1; // edx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int16 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int16 *)MiGetSessionVm();
  }
  else if ( v3 <= 0x7FFFFFFEFFFFLL
         || v3 <= qword_140465EE0 && v3 >= qword_1404675B0
         || v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    SessionVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  }
  else
  {
    SessionVm = 0LL;
  }
  return MiInitializePageColorBase((__int64)SessionVm, v1, v2);
}
