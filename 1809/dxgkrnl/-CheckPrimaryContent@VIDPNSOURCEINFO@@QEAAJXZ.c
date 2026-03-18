/*
 * XREFs of ?CheckPrimaryContent@VIDPNSOURCEINFO@@QEAAJXZ @ 0x1C025EE38
 * Callers:
 *     ?CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C025EDC0 (-CheckDisplayState@DISPLAYSTATECHECKER@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x1C0010FE0 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0015668 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0080 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C025F12C (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::CheckPrimaryContent(VIDPNSOURCEINFO *this)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF *DisplayedPrimary; // rax
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rdx
  unsigned int v13; // ebx
  ULONG_PTR Count; // rsi
  int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG_PTR v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 11) )
    return 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v20,
      *(struct DXGDEVICE **)this);
    DisplayedPrimary = (struct _EX_RUNDOWN_REF *)DXGDEVICE::GetDisplayedPrimary(
                                                   *(struct _KTHREAD ***)this,
                                                   *((_DWORD *)this + 2));
    v9 = DisplayedPrimary;
    if ( DisplayedPrimary )
    {
      DxgkReferenceDxgAllocation(DisplayedPrimary);
      Count = v9[1].Count;
      v19 = 0;
      v18 = Count;
      if ( Count != *(_QWORD *)this )
      {
        v15 = 0;
        while ( !(unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v18) )
        {
          Interval.QuadPart = -160000LL;
          KeDelayExecutionThread(0, 0, &Interval);
          if ( (unsigned int)++v15 >= 0xA )
          {
            v13 = -2147483631;
            v17 = WdLogNewEntry5_WdError(v16);
            *(_QWORD *)(v17 + 24) = Count;
            WdLogEvent5_WdError(v17);
            goto LABEL_15;
          }
        }
      }
      v13 = VIDPNSOURCEINFO::CheckPrimaryContentWorker(this, (struct DXGALLOCATION *)v9);
LABEL_15:
      ExReleaseRundownProtection(v9 + 11);
      if ( v18 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v18);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v8);
      v11 = 2LL;
      *(_QWORD *)(v10 + 24) = *((unsigned int *)this + 2);
      v12 = (_QWORD *)(v10 + 32);
      do
      {
        *v12++ = *((int *)this + 4);
        --v11;
      }
      while ( v11 );
      WdLogEvent5_WdError(v10);
      v13 = -1071775482;
    }
    if ( v20[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
    return v13;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    *(_QWORD *)(v4 + 32) = PsGetCurrentProcess(v6, v5);
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
