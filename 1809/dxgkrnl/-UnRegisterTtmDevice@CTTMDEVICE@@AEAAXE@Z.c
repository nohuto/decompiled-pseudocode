/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C02427EC
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0138F24 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C013B3D0 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rax
  DXGADAPTER *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _KEVENT *p_Event; // rax
  __int64 v19; // rdx
  CTTMDEVICE **v20; // r8
  CTTMDEVICE **v21; // rdx
  char v22; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-50h] BYREF
  char v25; // [rsp+78h] [rbp-20h]

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Global + 77) + 160LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v6 + 24) = 4473LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_BYTE *)this + 905);
  if ( v7 )
  {
    if ( a2 )
    {
      v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v8 + 24) = 4480LL;
      WdLogEvent5_WdAssertion(v8);
      v7 = *((_BYTE *)this + 905);
    }
    if ( v7 && *(CTTMDEVICE **)this != this )
    {
      v9 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v9 + 24) = 4486LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  v10 = (DXGADAPTER *)*((_QWORD *)this + 8);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 4495LL;
    WdLogEvent5_WdAssertion(v11);
    v10 = (DXGADAPTER *)*((_QWORD *)this + 8);
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v10);
  v13 = WdLogNewEntry5_WdAssertion(v12);
  *(_QWORD *)(v13 + 24) = 4497LL;
  WdLogEvent5_WdAssertion(v13);
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
  v15 = (unsigned int)(v14 >> 31);
  LODWORD(v15) = v14 % 32;
  *((_DWORD *)this + 2 * v15 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)(v14 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 4515LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  else
  {
    p_Event = 0LL;
  }
  *((_QWORD *)this + 7) = p_Event;
  v19 = *((_QWORD *)this + 4);
  v25 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v19 + 18624));
  *((_QWORD *)this + 4) = 0LL;
  v20 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  if ( v20[1] != (CTTMDEVICE *)((char *)this + 16)
    || (v21 = (CTTMDEVICE **)*((_QWORD *)this + 3), *v21 != (CTTMDEVICE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v21 = (CTTMDEVICE *)v20;
  v20[1] = (CTTMDEVICE *)v21;
  TtmNotifyDeviceDeparture(1LL, this);
  v22 = v25;
  if ( v25 )
  {
    KeUnstackDetachProcess(&ApcState);
    v22 = 0;
    v25 = 0;
  }
  if ( a2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v22 = v25;
  }
  if ( v22 )
    KeUnstackDetachProcess(&ApcState);
}
