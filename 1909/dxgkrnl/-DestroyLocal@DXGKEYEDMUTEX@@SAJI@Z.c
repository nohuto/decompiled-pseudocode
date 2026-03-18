/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C02697B4
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F02B0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkDestroyKeyedMutex @ 0x1C026C000 (DxgkDestroyKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C0271A04 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0269654 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C026AD04 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct _KTHREAD **v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  struct _KTHREAD *v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // r11d
  __int64 v14; // rax
  __int64 v15; // rax
  DXGKEYEDMUTEX *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE v22[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v7 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v22, Current);
  v11 = *((_DWORD *)v7 + 56);
  v12 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= v11
    || (v10 = v7[26],
        v9 = *((unsigned int *)v10 + 4 * (unsigned int)v12 + 2),
        v13 = (*((_DWORD *)v10 + 4 * (unsigned int)v12 + 2) >> 5) & 3,
        (unsigned int)v2 >> 30 != v13)
    || (v9 & 0x2000) != 0
    || (v9 & 0x1F) == 0 )
  {
LABEL_9:
    v15 = WdLogNewEntry5_WdWarning(v12, v9, v10);
    *(_QWORD *)(v15 + 24) = v2;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
    return 3221225485LL;
  }
  v9 &= 0x1Fu;
  if ( (_BYTE)v9 != 9 )
  {
    v14 = WdLogNewEntry5_WdError(v12, v9, v10);
    *(_QWORD *)(v14 + 24) = 267LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_9;
  }
  v17 = (DXGKEYEDMUTEX *)*((_QWORD *)v10 + 2 * (unsigned int)v12);
  if ( !v17 )
    goto LABEL_9;
  if ( (unsigned int)v12 < v11
    && (unsigned int)v2 >> 30 == v13
    && (*((_DWORD *)v10 + 4 * (unsigned int)v12 + 2) & 0x2000) == 0
    && (*((_DWORD *)v10 + 4 * (unsigned int)v12 + 2) & 0x1F) != 0 )
  {
    *((_DWORD *)v10 + 4 * (((unsigned int)v2 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v17, v2, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle((unsigned int)v2, v18) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v21 + 24) = 3533LL;
    WdLogEvent5_WdAssertion(v21);
  }
  return 0LL;
}
