/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C014BB6C
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0120A60 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0206850 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edx
  int v14; // r11d
  int v15; // eax
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  struct DXGRESOURCE *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  _BYTE v24[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 9396LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
    if ( !Current )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v8 + 24) = 9406LL;
      WdLogEvent5_WdAssertion(v8);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v24,
      (struct _KTHREAD **)Current);
    v9 = *((_DWORD *)this + 105);
    v10 = *((_DWORD *)Current + 56);
    v11 = (v9 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v11 < v10 )
    {
      v12 = *((_QWORD *)Current + 26);
      v13 = *(_DWORD *)(v12 + 16LL * (unsigned int)v11 + 8);
      v14 = (v13 >> 5) & 3;
      if ( v9 >> 30 == v14 )
      {
        v15 = v13 & 0x2000;
        if ( (v13 & 0x2000) == 0 )
        {
          v16 = v13 & 0x1F;
          if ( (v13 & 0x1F) != 0 )
          {
            v17 = v13 & 0x1F;
            if ( (_BYTE)v17 == 4 )
            {
              v19 = *(struct DXGRESOURCE **)(v12 + 16LL * (unsigned int)v11);
              if ( v19 && (unsigned int)v11 < v10 && v9 >> 30 == v14 && !v15 && v16 )
                *(_DWORD *)(v12 + 16LL * ((v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              goto LABEL_13;
            }
            v18 = WdLogNewEntry5_WdError(v11, v17, v12);
            *(_QWORD *)(v18 + 24) = 267LL;
            WdLogEvent5_WdError(v18);
          }
        }
      }
    }
    v19 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
    if ( v19 )
    {
      if ( *((_DWORD *)a2 + 116) == 4 )
        DXGDEVICE::DestroyClientResource(a2, v19);
      else
        DXGDEVICE::DestroyAllocationInternal(a2, 0, 0LL, v19, 0LL, DXGDEVICE::DestroyFlagsDefault);
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = a2;
      *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 105);
      WdLogEvent5_WdError(v23);
    }
    *((_DWORD *)this + 105) = 0;
    *((_DWORD *)this + 104) = 0;
  }
}
