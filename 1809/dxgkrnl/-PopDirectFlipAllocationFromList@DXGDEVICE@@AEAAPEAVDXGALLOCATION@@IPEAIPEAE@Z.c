/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C013A14C
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00D01C0 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0080 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00E1834 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rsi
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 v13; // rbx
  __int64 v15; // rax
  struct _KTHREAD *v16; // r9
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25, this + 35);
  if ( *a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v15 + 24) = 8725LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = *a3;
  v10 = v4;
  v11 = *((_DWORD *)this + v4 + 320);
  v12 = *a3 == v11;
  if ( *a3 < v11 )
  {
    v16 = this[v4 + 144];
    v17 = *a3;
    v18 = *a3;
    do
    {
      v9 = v18;
      if ( *((_QWORD *)v16 + v17) )
        break;
      *a3 = ++v17;
      v18 = v17;
      v9 = v17;
    }
    while ( v17 < v11 );
    v12 = v9 == v11;
  }
  if ( v12 )
  {
    *a4 = 1;
    v13 = 0LL;
  }
  else
  {
    v19 = v9;
    v13 = *((_QWORD *)this[v4 + 144] + v9);
    if ( !v13 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v20 + 24) = 8739LL;
      WdLogEvent5_WdAssertion(v20);
      v9 = *a3;
    }
    if ( v9 != ((*(_DWORD *)(v13 + 72) >> 1) & 0x3FF) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v21 + 24) = 8740LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( !*((_DWORD *)this + v10 + 336) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v22 + 24) = 8741LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = *a3;
    *((_QWORD *)this[v10 + 144] + v23) = 0LL;
    --*((_DWORD *)this + v10 + 336);
    *(_DWORD *)(v13 + 72) &= 0xFFFFF801;
    *a3 = v23 + 1;
    if ( *((_DWORD *)this + v10 + 320) == (_DWORD)v23 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v13 + 40) )
    {
      v24 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v24 + 24) = 8760LL;
      WdLogEvent5_WdAssertion(v24);
    }
    DxgkReferenceDxgAllocation((struct _EX_RUNDOWN_REF *)v13);
    DxgkReferenceDxgResource(*(struct _EX_RUNDOWN_REF **)(v13 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return (struct DXGALLOCATION *)v13;
}
