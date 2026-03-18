/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C0277C3C
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C013DC18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0276B20 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, __int64 a2)
{
  char v2; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _KEVENT *p_Event; // rax
  __int64 v22; // rdx
  CTTMDEVICE **v23; // r8
  CTTMDEVICE **v24; // rdx
  char v25; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-50h] BYREF
  char v28; // [rsp+78h] [rbp-20h]

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Global + 74) + 160LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
    *(_QWORD *)(v7 + 24) = 4702LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_BYTE *)this + 905);
  if ( v8 )
  {
    if ( v2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
      *(_QWORD *)(v9 + 24) = 4709LL;
      WdLogEvent5_WdAssertion(v9);
      v8 = *((_BYTE *)this + 905);
    }
    if ( v8 && *(CTTMDEVICE **)this != this )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
      *(_QWORD *)(v10 + 24) = 4715LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  v11 = (DXGADAPTER *)*((_QWORD *)this + 8);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, v5);
    *(_QWORD *)(v12 + 24) = 4724LL;
    WdLogEvent5_WdAssertion(v12);
    v11 = (DXGADAPTER *)*((_QWORD *)this + 8);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v11);
  v15 = WdLogNewEntry5_WdAssertion(v14, v13);
  *(_QWORD *)(v15 + 24) = 4726LL;
  WdLogEvent5_WdAssertion(v15);
  v16 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
  v17 = (unsigned int)(v16 >> 31);
  LODWORD(v17) = v16 % 32;
  *((_DWORD *)this + 2 * v17 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)(v16 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v20 + 24) = 4744LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  else
  {
    p_Event = 0LL;
  }
  *((_QWORD *)this + 7) = p_Event;
  v22 = *((_QWORD *)this + 4);
  v28 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v22 + 18624));
  *((_QWORD *)this + 4) = 0LL;
  v23 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  if ( v23[1] != (CTTMDEVICE *)((char *)this + 16)
    || (v24 = (CTTMDEVICE **)*((_QWORD *)this + 3), *v24 != (CTTMDEVICE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v24 = (CTTMDEVICE *)v23;
  v23[1] = (CTTMDEVICE *)v24;
  TtmNotifyDeviceDeparture(1LL, this);
  v25 = v28;
  if ( v28 )
  {
    KeUnstackDetachProcess(&ApcState);
    v25 = 0;
    v28 = 0;
  }
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v25 = v28;
  }
  if ( v25 )
    KeUnstackDetachProcess(&ApcState);
}
