/*
 * XREFs of CcFreeVirtualAddress @ 0x1400B5AD0
 * Callers:
 *     CcMdlRead @ 0x140646CB0 (CcMdlRead.c)
 *     CcPinMappedData @ 0x14064DB20 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x14064DCE0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall CcFreeVirtualAddress(__int64 a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 184);
    if ( v3 )
      result = KeSetEvent(v3, 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 544));
  }
  return result;
}
