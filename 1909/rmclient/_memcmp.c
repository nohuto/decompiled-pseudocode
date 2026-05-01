/*
 * XREFs of _memcmp @ 0x1000D148
 * Callers:
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGABU_GUID@@2PAPAX@Z @ 0x1000EEE1 (--$GetClassObject@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGABU_GUID@@2PAPAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _memcmp(Buf1, Buf2, Size);
}
