/*
 * XREFs of ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00C9C04
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00CCC90 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::IsAllocationInPrimaryAllocationsList(
        DXGDEVICE *this,
        __int64 a2,
        struct DXGALLOCATION *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 434) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3764LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v15 + 24) = 3765LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v16 + 24) = 3766LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = 1;
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v17 + 24) = 3767LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_QWORD *)this + 216) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 32);
    v11 = *((_DWORD *)this + v4 + 208);
    v12 = 0LL;
    if ( v11 )
    {
      while ( *(struct DXGALLOCATION **)(*((_QWORD *)this + v4 + 88) + 8 * v12) != a3 )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v10 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  }
  return v10;
}
