/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00C9988
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C98A4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00FAD74 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FB0D0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rbx
  __int64 v16; // rax
  struct _KTHREAD *v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, this + 35);
  if ( *a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v16 + 24) = 8807LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = *a3;
  v11 = v4;
  v12 = *((_DWORD *)this + v4 + 320);
  v13 = (_DWORD)v10 == v12;
  if ( (unsigned int)v10 < v12 )
  {
    v17 = this[v4 + 144];
    v18 = *a3;
    v19 = *a3;
    do
    {
      v10 = v19;
      if ( *((_QWORD *)v17 + v18) )
        break;
      *a3 = ++v18;
      v19 = v18;
      v10 = v18;
    }
    while ( v18 < v12 );
    v13 = (_DWORD)v10 == v12;
  }
  if ( v13 )
  {
    *a4 = 1;
    v14 = 0LL;
  }
  else
  {
    v20 = (unsigned int)v10;
    v14 = *((_QWORD *)this[v4 + 144] + (unsigned int)v10);
    if ( !v14 )
    {
      v21 = WdLogNewEntry5_WdAssertion((unsigned int)v10, v10);
      *(_QWORD *)(v21 + 24) = 8821LL;
      WdLogEvent5_WdAssertion(v21);
      v10 = *a3;
    }
    if ( (_DWORD)v10 != ((*(_DWORD *)(v14 + 72) >> 1) & 0x3FF) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v20, v10);
      *(_QWORD *)(v22 + 24) = 8822LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( !*((_DWORD *)this + v11 + 336) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20, v10);
      *(_QWORD *)(v23 + 24) = 8823LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = *a3;
    *((_QWORD *)this[v11 + 144] + v24) = 0LL;
    --*((_DWORD *)this + v11 + 336);
    *(_DWORD *)(v14 + 72) &= 0xFFFFF801;
    *a3 = v24 + 1;
    if ( *((_DWORD *)this + v11 + 320) == (_DWORD)v24 + 1 )
      *a4 = 1;
    if ( !*(_QWORD *)(v14 + 40) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v24, v10);
      *(_QWORD *)(v25 + 24) = 8842LL;
      WdLogEvent5_WdAssertion(v25);
    }
    DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v14);
    DxgkReferenceDxgResource(*(struct DXGRESOURCE **)(v14 + 40));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return (struct DXGALLOCATION *)v14;
}
