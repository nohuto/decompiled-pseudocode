/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x140136C54
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B37D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x140017D48 (FsRtlpOplockDequeueRH.c)
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r8d
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  a2[1] = a1;
  *a2 = v2;
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  memset(v9, 0, 0x30uLL);
  v4 = a2[3];
  v9[5] = a2;
  v7 = IoSetOplockPrivateFoExt(v4, (__int64)v9, v5, v6);
  if ( v7 < 0 )
    FsRtlpOplockDequeueRH((__int64)a2);
  return (unsigned int)v7;
}
