/*
 * XREFs of ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C0054E48
 * Callers:
 *     ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0053B6C (-DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C00543AC (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 *     ?Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z @ 0x1C007A7E0 (-Dispatch@FxDefaultIrpHandler@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::_RequiresRemLock(unsigned __int8 MajorCode, unsigned __int8 MinorCode)
{
  __int64 result; // rax

  if ( MajorCode >= 0x16u )
  {
    if ( MajorCode <= 0x17u )
      return 1LL;
    if ( MajorCode == 27 )
    {
      result = 2LL;
      if ( MinorCode == 2 )
        return result;
      return 1LL;
    }
  }
  return 3LL;
}
