/*
 * XREFs of IoGetSilo @ 0x14008D860
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x1405F9484 (IopAllocateFoExtensionsOnCreate.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 && v1 != IopRevocationExtension && (v3 = v1[8]) != 0 )
    return *(_QWORD *)(v3 + 8);
  else
    return 0LL;
}
