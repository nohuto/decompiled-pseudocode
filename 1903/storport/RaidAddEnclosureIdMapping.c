/*
 * XREFs of RaidAddEnclosureIdMapping @ 0x1C0038EFC
 * Callers:
 *     RaidLoadEnclosureIdMappings @ 0x1C0020C7C (RaidLoadEnclosureIdMappings.c)
 *     ShimGetMsftId @ 0x1C0050A60 (ShimGetMsftId.c)
 * Callees:
 *     memmove @ 0x1C0023500 (memmove.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaidAddEnclosureIdMapping(void *Src, size_t Size, _OWORD *a3)
{
  SIZE_T v4; // rsi
  unsigned int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  PVOID v9; // rax
  _QWORD *v10; // rax
  void *v11; // rcx

  v4 = (unsigned int)Size;
  v6 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x48536152u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x48536152u);
    *((_QWORD *)v8 + 2) = v9;
    if ( v9 )
    {
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
      memmove(v9, Src, v4);
      *(_OWORD *)(v8 + 24) = *a3;
      v10 = (_QWORD *)qword_1C0061738;
      if ( *(__int64 **)qword_1C0061738 != &EnclosureIdList )
        __fastfail(3u);
      *(_QWORD *)v8 = &EnclosureIdList;
      *((_QWORD *)v8 + 1) = v10;
      *v10 = v8;
      qword_1C0061738 = (__int64)v8;
      v8 = 0LL;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( v8 )
    {
      v11 = (void *)*((_QWORD *)v8 + 2);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x48536152u);
      ExFreePoolWithTag(v8, 0x48536152u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
