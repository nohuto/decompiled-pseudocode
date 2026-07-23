/*
 * XREFs of IoGetOplockKeyContextEx @ 0x140019C10
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockKeysEqual @ 0x1400199A0 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8670 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( !v1 )
    return 0LL;
  if ( v1 == IopRevocationExtension )
    return 0LL;
  result = v1[7];
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
