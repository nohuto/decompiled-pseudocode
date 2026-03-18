/*
 * XREFs of ReleaseMouseButton @ 0x1C01823E0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C018E070 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 */

__int64 __fastcall ReleaseMouseButton(unsigned int a1)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::AccessibilityReleaseMouseButton(result, a1);
  return result;
}
