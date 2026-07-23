/*
 * XREFs of IopTranslatorHandlerIo @ 0x140833E90
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopTranslatorHandlerIo(__int64 a1, _OWORD *a2, __int64 a3, _DWORD *a4, _QWORD *a5)
{
  _OWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x64647050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *a4 = 1;
  *PoolWithTag = *a2;
  PoolWithTag[1] = a2[1];
  *a5 = PoolWithTag;
  return 0LL;
}
