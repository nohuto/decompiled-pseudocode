/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C022489C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0224A24 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C01DA26C (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, unsigned int a2, struct COREDEVICEACCESS *a3)
{
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  struct _KTHREAD *v10; // r8
  unsigned int v11; // edx
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rcx
  DXGDEVICE *v17; // r10
  _BYTE v18[32]; // [rsp+30h] [rbp-38h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 176LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, Current);
  v8 = *((_DWORD *)v7 + 62);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < v8 )
  {
    v10 = v7[29];
    v11 = *((_DWORD *)v10 + 4 * (unsigned int)v9 + 2);
    v12 = (v11 >> 5) & 3;
    if ( a2 >> 30 == v12 && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      if ( (v11 & 0x1F) == 5 )
      {
        v14 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
        if ( v14 && (unsigned int)v9 < v8 && a2 >> 30 == v12 && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
          *((_DWORD *)v10 + 4 * ((a2 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        goto LABEL_9;
      }
      v13 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v13 + 24) = 316LL;
      WdLogEvent5_WdError(v13);
    }
  }
  v14 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( !v14 )
    return 3221225485LL;
  v16 = *(unsigned int *)(*((_QWORD *)this + 2) + 464LL);
  v17 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (_DWORD)v16 == 4 )
    DxgkDestroyClientAllocation(v16, (__int64)v17, 0, 0LL, *(struct DXGALLOCATION ****)(v14 + 40));
  else
    DXGDEVICE::DestroyAllocationInternal(
      v17,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v14 + 40),
      a3,
      DXGDEVICE::DestroyFlagsDefault);
  return 0LL;
}
