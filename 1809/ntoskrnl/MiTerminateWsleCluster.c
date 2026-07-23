/*
 * XREFs of MiTerminateWsleCluster @ 0x14007B958
 * Callers:
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiAppendWsleCluster @ 0x1400859EC (MiAppendWsleCluster.c)
 * Callees:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiDeleteValidSystemPage @ 0x14007A850 (MiDeleteValidSystemPage.c)
 *     MiRebuildPageTableLeafAges @ 0x14007AE00 (MiRebuildPageTableLeafAges.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiTerminateWsleCluster(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r14
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 i; // rsi
  __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  _QWORD v17[6]; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v19; // [rsp+6Ch] [rbp-9Ch]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]

  memset(v17, 0, 0x28uLL);
  v2 = a1[1];
  if ( !v2 )
    return 0LL;
  v3 = *a1;
  v4 = MiTbFlushType(*a1);
  v5 = a1[2];
  v18 = v4;
  v20 = 20LL;
  v19 = 0;
  v21 = 0LL;
  v22 = 0LL;
  MiInsertTbFlushEntry(&v18, (__int64)(v2 << 25) >> 16, v5);
  if ( (*((_BYTE *)a1 + 25) & 0xF) == 8 )
  {
    v13 = 0LL;
    if ( a1[2] )
    {
      v14 = (__int64)(v2 << 25) >> 16;
      v15 = v2;
      do
      {
        v16 = MI_READ_PTE_LOCK_FREE(v15);
        MiUnlockWsle(v3, v14, 48 * ((v16 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        ++v13;
        v15 += 8LL;
        v14 += 4096LL;
      }
      while ( v13 < a1[2] );
    }
  }
  MiRemoveWsle(v3, (__int64)(v2 << 25) >> 16, a1[2], *((_BYTE *)a1 + 25), 10, *((unsigned __int8 *)a1 + 24));
  MiRebuildPageTableLeafAges(v6, (__int64)(v2 << 25) >> 16);
  for ( i = 0LL; i < a1[2]; v2 += 8LL )
  {
    MiDeleteValidSystemPage(v3, v2, 0, (__int64)v17);
    ++i;
  }
  v11 = 0LL;
  if ( *((_BYTE *)a1 + 24) )
    v11 = v17[1];
  MiFlushTbList(&v18, v7, v8, v9);
  result = v11;
  a1[1] = 0LL;
  a1[2] = 0LL;
  return result;
}
