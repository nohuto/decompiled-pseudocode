/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C0294E20
 * Callers:
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1C0294FC8 (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 * Callees:
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0001C00 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C00197A8 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00FB0D0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02951F4 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _EX_RUNDOWN_REF *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  _QWORD *v17; // rdx
  unsigned int v18; // ebx
  ULONG_PTR Count; // rsi
  int v20; // ebp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  ULONG_PTR v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+28h] [rbp-20h]
  _QWORD v27[3]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 12) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent((__int64)this, a2) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v27,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                   *(struct _KTHREAD ***)this,
                                                   *((_DWORD *)this + 2));
    v14 = DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v14[1].Count;
      v26 = 0;
      v25 = Count;
      if ( Count != *(_QWORD *)this )
      {
        v20 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v20 >= 0xA )
          {
            v18 = -2147483631;
            v24 = WdLogNewEntry5_WdError(v22, v21, v23);
            *(_QWORD *)(v24 + 24) = Count;
            WdLogEvent5_WdError(v24);
            goto LABEL_15;
          }
        }
      }
      v18 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v14);
LABEL_15:
      ExReleaseRundownProtection(v14 + 11);
      if ( v25 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v25);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v12, v11, v13);
      v16 = 2LL;
      *(_QWORD *)(v15 + 24) = *((unsigned int *)this + 2);
      v17 = (_QWORD *)(v15 + 32);
      do
      {
        *v17++ = *((int *)this + 5);
        --v16;
      }
      while ( v16 );
      WdLogEvent5_WdError(v15);
      v18 = -1071775482;
    }
    if ( v27[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v27);
    return v18;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
