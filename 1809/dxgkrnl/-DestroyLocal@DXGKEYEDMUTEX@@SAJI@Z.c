/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C0234904
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F17E0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkDestroyKeyedMutex @ 0x1C02370A0 (DxgkDestroyKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C023C684 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C02347A4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0235DA8 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(unsigned int a1)
{
  __int64 v1; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v3; // rcx
  struct _KTHREAD **v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _KTHREAD *v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rcx
  int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rax
  DXGKEYEDMUTEX *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v4 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v17, Current);
  v8 = *((_DWORD *)v4 + 62);
  v9 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 >= v8
    || (v7 = v4[29],
        v6 = *((unsigned int *)v7 + 4 * (unsigned int)v9 + 2),
        v10 = (*((_DWORD *)v7 + 4 * (unsigned int)v9 + 2) >> 5) & 3,
        (unsigned int)v1 >> 30 != v10)
    || (v6 & 0x2000) != 0
    || (v6 & 0x1F) == 0 )
  {
LABEL_9:
    v12 = WdLogNewEntry5_WdWarning(v9, v6, v7);
    *(_QWORD *)(v12 + 24) = v1;
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 3221225485LL;
  }
  v6 &= 0x1Fu;
  if ( (_BYTE)v6 != 9 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 316LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_9;
  }
  v14 = (DXGKEYEDMUTEX *)*((_QWORD *)v7 + 2 * (unsigned int)v9);
  if ( !v14 )
    goto LABEL_9;
  if ( (unsigned int)v9 < v8
    && (unsigned int)v1 >> 30 == v10
    && (*((_DWORD *)v7 + 4 * (unsigned int)v9 + 2) & 0x2000) == 0
    && (*((_DWORD *)v7 + 4 * (unsigned int)v9 + 2) & 0x1F) != 0 )
  {
    *((_DWORD *)v7 + 4 * (((unsigned int)v1 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v14, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle(v1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 3545LL;
    WdLogEvent5_WdAssertion(v16);
  }
  return 0LL;
}
