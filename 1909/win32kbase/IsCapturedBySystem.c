/*
 * XREFs of IsCapturedBySystem @ 0x1C00B0740
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003003C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall IsCapturedBySystem(__int64 a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // r8
  char v4; // bl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v4 = 0;
  if ( MouseProcessor )
    return CInputDest::operator==((unsigned int *)(MouseProcessor + 3272), a1, v3) != 0;
  return v4;
}
