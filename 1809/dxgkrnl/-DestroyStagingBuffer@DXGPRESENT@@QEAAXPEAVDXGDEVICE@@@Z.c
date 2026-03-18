/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C013B504
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00E9204 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01D8428 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  int v13; // r11d
  __int64 v14; // rax
  struct DXGRESOURCE *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v18[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 9236LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 9246LL;
      WdLogEvent5_WdAssertion(v7);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v18,
      (struct _KTHREAD **)Current);
    v8 = *((_DWORD *)this + 105);
    v9 = *((_DWORD *)Current + 62);
    v10 = (v8 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < v9 )
    {
      v11 = *((_QWORD *)Current + 29);
      v12 = *(_DWORD *)(v11 + 16LL * (unsigned int)v10 + 8);
      v13 = (v12 >> 5) & 3;
      if ( v8 >> 30 == v13 && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        if ( (v12 & 0x1F) == 4 )
        {
          v15 = *(struct DXGRESOURCE **)(v11 + 16LL * (unsigned int)v10);
          if ( v15 && (unsigned int)v10 < v9 && v8 >> 30 == v13 && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
            *(_DWORD *)(v11 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          goto LABEL_13;
        }
        v14 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v14 + 24) = 316LL;
        WdLogEvent5_WdError(v14);
      }
    }
    v15 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    if ( v15 )
    {
      if ( *((_DWORD *)a2 + 116) == 4 )
        DXGDEVICE::DestroyClientResource(a2, v15);
      else
        DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v15, 0LL, DXGDEVICE::DestroyFlagsDefault);
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = a2;
      *(_QWORD *)(v17 + 32) = *((unsigned int *)this + 105);
      WdLogEvent5_WdError(v17);
    }
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
  }
}
