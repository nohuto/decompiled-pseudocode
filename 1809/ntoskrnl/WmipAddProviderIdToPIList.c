/*
 * XREFs of WmipAddProviderIdToPIList @ 0x140613B34
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406BF364 (WmipPrepareForWnodeAD.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipAddProviderIdToPIList(
        const void **a1,
        _DWORD *a2,
        unsigned int *a3,
        void *a4,
        volatile signed __int64 *a5)
{
  __int64 v5; // rbp
  signed int v6; // edi
  __int64 v7; // r14
  void *v8; // rsi
  volatile signed __int64 *v9; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // r12
  PVOID PoolWithTag; // rbx
  void *v15; // r15
  volatile signed __int64 **v16; // rbx
  _DWORD *v18; // [rsp+78h] [rbp+10h]

  v18 = a2;
  v5 = (unsigned int)*a2;
  v6 = 0;
  v7 = *a3;
  v8 = (void *)*a1;
  v9 = a5;
  if ( (_DWORD)v5 != (_DWORD)v7 )
    goto LABEL_2;
  v11 = 2 * v7;
  v12 = -1;
  v13 = *a3;
  if ( (unsigned __int64)(2 * v7) <= 0xFFFFFFFF )
    v12 = 2 * v7;
  v6 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
    PoolWithTag = 0LL;
  else
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v12, 0x70696D57u);
  v15 = v8;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v8, 8 * v7);
    v8 = PoolWithTag;
    *a3 = v12;
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v16 = (volatile signed __int64 **)v8;
      do
      {
        WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v16++);
        --v13;
      }
      while ( v13 );
    }
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, a5);
    PoolWithTag = 0LL;
    v6 = -1073741670;
  }
  *a1 = PoolWithTag;
  if ( v15 != a4 )
    ExFreePoolWithTag(v15, 0);
  if ( v6 >= 0 )
  {
    v9 = a5;
    a2 = v18;
LABEL_2:
    *((_QWORD *)v8 + v5) = v9;
    *a2 = v5 + 1;
  }
  return (unsigned int)v6;
}
