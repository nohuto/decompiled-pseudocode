/*
 * XREFs of ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00697AC
 * Callers:
 *     ?_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z @ 0x1C0069790 (-_RIMCallBack@CBaseInput@@CAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0069944 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0069B00 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RIMHandleAnySignalledReadsOnDestroyed @ 0x1C006AAF4 (RIMHandleAnySignalledReadsOnDestroyed.c)
 *     ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C006D2D0 (-ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::RIMCallBack(CBaseInput *this, struct RIMDevChangeStruct *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r14
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // r14d
  __int64 v18; // rdx
  CBaseInput *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 *v22; // rbx
  int v23; // eax
  _QWORD v24[2]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+34h] [rbp-34h]
  _QWORD v27[2]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-20h]
  int v29; // [rsp+4Ch] [rbp-1Ch]

  v2 = *((_QWORD *)a2 + 3);
  RIMHandleAnySignalledReadsOnDestroyed(a2);
  v7 = (unsigned int)(*(_DWORD *)a2 - 1);
  if ( (unsigned int)v7 < 5 )
  {
    v8 = 2LL * (unsigned int)v7;
    if ( *((_DWORD *)&off_1C01D3250 + 4 * (unsigned int)v7 + 2) != *(_DWORD *)a2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, v6);
    v9 = *((_DWORD *)a2 + 1) != 3;
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
    {
      v23 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == 1 )
      {
        v9 = 0;
        *(_DWORD *)(v2 + 272) |= 0x8000000u;
      }
      else
      {
        if ( v23 == 2 )
          KeBugCheck(0x164u);
        if ( (unsigned int)(v23 - 3) > 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
        v9 &= -(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) != 0);
      }
    }
    if ( *(_DWORD *)a2 == 1 || ((v2 + 88) & -(__int64)(v2 != 0)) == 0 )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)((v2 + 88) & -(__int64)(v2 != 0));
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v17 = (*(&off_1C01D3250 + v8))(this, (struct RawInputManagerDeviceObject *)v2);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( v13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
      v22 = (__int64 *)((v2 + 88) & ((unsigned __int128)-(__int128)v2 >> 64));
      if ( v22 )
        v13 = *v22;
      else
        v13 = 0LL;
    }
    qword_1C02182E8 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( ((*(_DWORD *)a2 - 2) & 0xFFFFFFFD) == 0 )
      CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(v19, *((_DWORD *)a2 + 1));
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 1) == 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      v21 = *(_DWORD *)(v2 + 272);
      if ( (v21 & 0x8000000) != 0 )
      {
        *(_DWORD *)(v2 + 272) = v21 & 0xF7FFFFFF;
        if ( *(_DWORD *)a2 == 2 )
        {
          v25 = 0;
          v24[0] = v2 + 88;
          v24[1] = v13;
          v26 = 1;
          CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v24);
        }
        else
        {
          v9 = 0;
        }
      }
      if ( v9 )
      {
        v27[1] = v13;
        v27[0] = v2 + 88;
        v29 = *(_DWORD *)a2;
        v28 = v17;
        CBaseInput::PerformPnpNotification(this, (const struct _DevicePnpNotification *)v27);
      }
    }
  }
}
