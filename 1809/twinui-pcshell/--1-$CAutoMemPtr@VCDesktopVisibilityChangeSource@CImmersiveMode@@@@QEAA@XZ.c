/*
 * XREFs of ??1?$CAutoMemPtr@VCDesktopVisibilityChangeSource@CImmersiveMode@@@@QEAA@XZ @ 0x1801007D8
 * Callers:
 *     _CImmersiveMode::_RegisterDesktopVisibilitySource_::_1_::dtor$3 @ 0x1801020F0 (_CImmersiveMode--_RegisterDesktopVisibilitySource_--_1_--dtor$3.c)
 * Callees:
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x180100CD4 (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 */

CImmersiveMode::CDesktopVisibilityChangeSource *__fastcall CAutoMemPtr<CImmersiveMode::CDesktopVisibilityChangeSource>::~CAutoMemPtr<CImmersiveMode::CDesktopVisibilityChangeSource>(
        CImmersiveMode::CDesktopVisibilityChangeSource **a1,
        unsigned int a2)
{
  CImmersiveMode::CDesktopVisibilityChangeSource *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CImmersiveMode::CDesktopVisibilityChangeSource *)CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(
                                                               result,
                                                               a2);
  return result;
}
