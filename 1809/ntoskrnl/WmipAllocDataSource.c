/*
 * XREFs of WmipAllocDataSource @ 0x1407095FC
 * Callers:
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     WmipAllocEntry @ 0x14070964C (WmipAllocEntry.c)
 */

__int64 WmipAllocDataSource()
{
  __int64 v0; // rax
  __int64 v1; // rbx

  v0 = WmipAllocEntry(&WmipDSChunkInfo);
  v1 = v0;
  if ( v0 )
  {
    *(_QWORD *)(v0 + 48) = v0 + 40;
    *(_QWORD *)(v0 + 40) = v0 + 40;
    *(_DWORD *)(v0 + 64) = 4;
    *(_QWORD *)(v0 + 72) = v0 + 80;
    memset((void *)(v0 + 80), 0, 0x20uLL);
  }
  return v1;
}
