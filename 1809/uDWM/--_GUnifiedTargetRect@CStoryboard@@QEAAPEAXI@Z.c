/*
 * XREFs of ??_GUnifiedTargetRect@CStoryboard@@QEAAPEAXI@Z @ 0x18004DE10
 * Callers:
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800A2C70 (--1CAppArrangementImmediate@@UEAA@XZ.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800A2E50 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x1800A2F60 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A64DC (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18003B4A0 (-FreeTableData@-$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_G.c)
 */

_QWORD *__fastcall CStoryboard::UnifiedTargetRect::`scalar deleting destructor'(_QWORD *Buffer)
{
  struct _RTL_GENERIC_TABLE *v2; // rcx

  DynArrayImpl<0>::~DynArrayImpl<0>(Buffer + 3);
  CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(v2, Buffer);
  return Buffer;
}
