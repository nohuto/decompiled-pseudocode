/*
 * XREFs of IoGetOplockKeyContextEx @ 0x14000A250
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140007708 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140047050 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x1400B6A10 (FsRtlpOplockKeysEqual.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
