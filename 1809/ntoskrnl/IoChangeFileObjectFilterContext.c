/*
 * XREFs of IoChangeFileObjectFilterContext @ 0x1401142F4
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x140114190 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x140699A10 (FsRtlPTeardownPerFileObjectContexts.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoChangeFileObjectFilterContext(__int64 a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // r11
  char v3; // r10
  bool v4; // zf
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
    return 3221225485LL;
  IopGetFileObjectExtension(a1, 3, &v6);
  if ( v3 )
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 32), v1, 0LL) == 0;
  else
    v4 = v1 == _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 32), v2, v1);
  if ( v4 )
    return 0LL;
  else
    return 3221225505LL;
}
