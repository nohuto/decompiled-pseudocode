/*
 * XREFs of MiInitializeColorBase @ 0x140091860
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     MiDemoteValidLargePageOneLevel @ 0x140186EF8 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14074EB40 (MmCreateShadowMapping.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiInitializeColorBase(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int16 *SessionVm; // rcx

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    SessionVm = (unsigned __int16 *)MiGetSessionVm();
  }
  else if ( v3 <= 0x7FFFFFFEFFFFLL
         || v3 <= qword_140465BE0 && v3 >= qword_1404672B0
         || v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    SessionVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  }
  else
  {
    SessionVm = 0LL;
  }
  return MiInitializePageColorBase(SessionVm, v1, v2);
}
