/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C0181CE0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0 (_anonymous_namespace_--ValidateUIPI.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // r8
  unsigned int v4; // edi

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( !MouseProcessor )
    return 0;
  v4 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(MouseProcessor + 3400), 1, 1)
    || !anonymous_namespace_::ValidateUIPI(a1, (_DWORD *)(MouseProcessor + 3272), v3) )
  {
    return 0;
  }
  return v4;
}
