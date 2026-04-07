/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180035890
 * Callers:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180035674 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18003D7A0 (-MemoryFree@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  char v8; // cl
  char v9; // cl
  __int128 v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp+8h]

  v10 = *(_OWORD *)((char *)this + 24);
  v11 = *((_QWORD *)this + 5);
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = 0LL;
  v6 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v5;
  if ( v6 )
    MemoryFree(v6);
  *(_OWORD *)((char *)a2 + 24) = v10;
  *((_QWORD *)a2 + 5) = v11;
  v7 = (void *)*((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = v4;
  if ( v7 )
    MemoryFree(v7);
  v8 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v8;
  v9 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v9;
}
