/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18000723C
 * Callers:
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180008684 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18000887C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  void *v6; // rsi
  HANDLE ProcessHeap; // rax
  void *v8; // rsi
  HANDLE v9; // rax
  char v10; // cl
  char v11; // cl
  __int128 v12; // [rsp+20h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp+8h]

  v12 = *(_OWORD *)((char *)this + 24);
  v13 = *((_QWORD *)this + 5);
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = 0LL;
  v6 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v5;
  if ( v6 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v6);
  }
  *(_OWORD *)((char *)a2 + 24) = v12;
  *((_QWORD *)a2 + 5) = v13;
  v8 = (void *)*((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 6) = v4;
  if ( v8 )
  {
    v9 = GetProcessHeap();
    HeapFree(v9, 0, v8);
  }
  v10 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v10;
  v11 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v11;
}
