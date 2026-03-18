/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259104
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C025928C (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C020878C (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, __int64 a2, struct COREDEVICEACCESS *a3)
{
  unsigned int v4; // esi
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rcx
  struct _KTHREAD *v10; // r8
  unsigned int v11; // edx
  int v12; // r11d
  int v13; // eax
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // rcx
  DXGDEVICE *v20; // r10
  _BYTE v21[32]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 176LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v21, Current);
  v8 = *((_DWORD *)v7 + 56);
  v9 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < v8 )
  {
    v10 = v7[26];
    v11 = *((_DWORD *)v10 + 4 * (unsigned int)v9 + 2);
    v12 = (v11 >> 5) & 3;
    if ( v4 >> 30 == v12 )
    {
      v13 = v11 & 0x2000;
      if ( (v11 & 0x2000) == 0 )
      {
        v14 = v11 & 0x1F;
        if ( (v11 & 0x1F) != 0 )
        {
          v15 = v11 & 0x1F;
          if ( (_BYTE)v15 == 5 )
          {
            v17 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
            if ( v17 && (unsigned int)v9 < v8 && v4 >> 30 == v12 && !v13 && v14 )
              *((_DWORD *)v10 + 4 * ((v4 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
            goto LABEL_9;
          }
          v16 = WdLogNewEntry5_WdError(v9, v15, v10);
          *(_QWORD *)(v16 + 24) = 267LL;
          WdLogEvent5_WdError(v16);
        }
      }
    }
  }
  v17 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( !v17 )
    return 3221225485LL;
  v19 = *(unsigned int *)(*((_QWORD *)this + 2) + 464LL);
  v20 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (_DWORD)v19 == 4 )
    DxgkDestroyClientAllocation(v19, (__int64)v20, 0, 0LL, *(struct DXGALLOCATION ****)(v17 + 40));
  else
    DXGDEVICE::DestroyAllocationInternal(
      v20,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v17 + 40),
      a3,
      DXGDEVICE::DestroyFlagsDefault);
  return 0LL;
}
