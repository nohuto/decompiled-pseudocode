/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x1C009A840
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C009A868 (-NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z.c)
 */

__int64 __fastcall NotifySetPointerGraphicDevice(unsigned int a1)
{
  __int64 result; // rax

  result = anonymous_namespace_::GetMouseProcessor();
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, a1);
  return result;
}
