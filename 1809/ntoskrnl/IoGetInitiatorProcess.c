/*
 * XREFs of IoGetInitiatorProcess @ 0x14013B4B0
 * Callers:
 *     IopCheckInitiatorHint @ 0x1400A392C (IopCheckInitiatorHint.c)
 *     IoIsInitiator32bitProcess @ 0x14013F920 (IoIsInitiator32bitProcess.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetInitiatorProcess(__int64 a1)
{
  __int64 FileObjectExtension; // rax

  if ( *(_QWORD *)(a1 + 208) && (FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL)) != 0 )
    return *(_QWORD *)(FileObjectExtension + 8);
  else
    return 0LL;
}
