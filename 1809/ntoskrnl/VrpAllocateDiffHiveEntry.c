/*
 * XREFs of VrpAllocateDiffHiveEntry @ 0x14080E400
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080E908 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeInitializeWaitChain @ 0x14029A388 (KeInitializeWaitChain.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 */

_QWORD *__fastcall VrpAllocateDiffHiveEntry(unsigned __int16 *a1, const void **a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  WCHAR *v8; // rdi
  WCHAR *v9; // r15
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  unsigned int v12; // eax

  v4 = *(unsigned __int16 *)a2 + (unsigned __int64)*a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 68, 0x67655256u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4 + 68);
    v7 = 314159LL;
    v8 = (WCHAR *)*((_QWORD *)a1 + 1);
    v9 = &v8[(unsigned __int64)*a1 >> 1];
    while ( v8 < v9 )
    {
      v10 = RtlUpcaseUnicodeChar(*v8++);
      v7 = 37 * (v10 + 37 * v7);
    }
    v6[3] = 0LL;
    v6[1] = v7;
    v6[2] = 1LL;
    KeInitializeWaitChain(v6 + 6);
    v11 = *a1;
    *((_WORD *)v6 + 32) = v11;
    memmove((char *)v6 + 68, *((const void **)a1 + 1), v11);
    v12 = *(unsigned __int16 *)a2;
    *((_WORD *)v6 + 33) = v12;
    memmove((char *)v6 + 2 * ((unsigned __int64)*((unsigned __int16 *)v6 + 32) >> 1) + 68, a2[1], v12);
  }
  return v6;
}
