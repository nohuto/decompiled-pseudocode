/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1800049EC
 * Callers:
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180005CC8 (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180005D54 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int128 v2; // xmm2
  void **v3; // r15
  char *v5; // rsi
  __int64 v7; // xmm3_8
  void *v8; // rbx
  void *v9; // r12
  void *v10; // r14
  HANDLE ProcessHeap; // rax
  void *v12; // r14
  HANDLE v13; // rax
  HANDLE v14; // rax
  char v15; // cl
  char v16; // cl
  char v17; // [rsp+38h] [rbp-30h] BYREF

  v2 = *(_OWORD *)((char *)this + 24);
  v3 = (void **)((char *)this + 48);
  v5 = (char *)a2 + 48;
  v7 = *((_QWORD *)this + 5);
  v8 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  if ( (char *)this + 48 != (char *)a2 + 48 )
  {
    v9 = *(void **)v5;
    *(_QWORD *)v5 = 0LL;
    v10 = *v3;
    if ( v9 != *v3 )
    {
      if ( v10 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v10);
      }
      *v3 = v9;
    }
  }
  *(_OWORD *)((char *)a2 + 24) = v2;
  *((_QWORD *)a2 + 5) = v7;
  if ( v5 != &v17 )
  {
    v12 = *(void **)v5;
    if ( v8 == *(void **)v5 )
      goto LABEL_13;
    if ( v12 )
    {
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
    }
    *(_QWORD *)v5 = v8;
    v8 = 0LL;
  }
  if ( v8 )
  {
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v8);
  }
LABEL_13:
  v15 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v15;
  v16 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v16;
}
