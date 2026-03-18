/*
 * XREFs of ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1C027B26C
 * Callers:
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1C0268A70 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

__int64 __fastcall BLTQUEUE::CreatePeriodicFrameNotification(
        struct _KTHREAD **this,
        struct DXGADAPTER *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a6,
        unsigned __int64 *a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rax
  void *FenceValueCPUVirtualAddress; // rbp
  __int64 v16; // rdx
  __int64 Timer; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rsi
  _QWORD *v20; // rax
  unsigned __int64 v21; // rsi
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE v26[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v27; // [rsp+28h] [rbp-30h]
  int v28; // [rsp+30h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26, this + 339, 0);
  v13 = 0;
  *a7 = 0LL;
  if ( this[342] )
  {
    FenceValueCPUVirtualAddress = a6->MonitoredFence.FenceValueCPUVirtualAddress;
    if ( (__int64)FenceValueCPUVirtualAddress < 0
      || (v10 = (unsigned int)(10000000 * *((_DWORD *)this + 53)) % *((_DWORD *)this + 52),
          v11 = (unsigned int)(10000000 * *((_DWORD *)this + 53)) / *((_DWORD *)this + 52),
          (__int64)FenceValueCPUVirtualAddress > v11) )
    {
      v24 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v24 + 24) = FenceValueCPUVirtualAddress;
      WdLogEvent5_WdError(v24);
      v13 = -1073741811;
    }
    else
    {
      DXGPUSHLOCK::AcquireExclusive(v27);
      v19 = 0LL;
      v20 = (_QWORD *)((char *)this[344] + 48);
      v28 = 2;
      while ( *v20 )
      {
        ++v19;
        v20 += 8;
        if ( v19 >= 8 )
          goto LABEL_9;
      }
      v21 = v19 << 6;
      Timer = ExAllocateTimer(0LL, 0LL, *((_BYTE *)this + 317) != 0 ? 4 : 0);
      *(_QWORD *)((char *)this[344] + v21) = Timer;
      v22 = this[344];
      if ( !*(_QWORD *)((char *)v22 + v21) )
      {
LABEL_9:
        v14 = WdLogNewEntry5_WdError(Timer, v16, v18);
        *(_QWORD *)(v14 + 24) = 3425LL;
        goto LABEL_3;
      }
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)((char *)v22 + v21 + 16), a2);
      v23 = 0LL;
      *(_QWORD *)((char *)this[344] + v21 + 8) = a3;
      *(_QWORD *)((char *)this[344] + v21 + 32) = FenceValueCPUVirtualAddress;
      *(_QWORD *)((char *)this[344] + v21 + 40) = 0LL;
      *(_QWORD *)((char *)this[344] + v21 + 48) = this[342];
      this[342] = (struct _KTHREAD *)((char *)this[342] + 1);
      do
        *((_BYTE *)this[344] + v21 + v23++ + 56) = 0;
      while ( v23 < 2 );
      ++*((_DWORD *)this + 686);
      *a7 = *(_QWORD *)((char *)this[344] + v21 + 48);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = 3378LL;
LABEL_3:
    WdLogEvent5_WdError(v14);
    v13 = -1073741801;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v13;
}
