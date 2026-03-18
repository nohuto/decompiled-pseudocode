/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x1C015CF18
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0157B84 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C0158078 (DpiFdoHandleSystemPower.c)
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoDetectPostDevice @ 0x1C015CC84 (DpiFdoDetectPostDevice.c)
 *     DpiFdoStartAdapterThread @ 0x1C0161010 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1C015E980 (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(_DWORD *a1, char a2, char a3)
{
  char v5; // r15
  char v6; // di
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // r14
  char v18; // r14
  PVOID PoolWithTag; // rsi
  KSPIN_LOCK *v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // r12
  KSPIN_LOCK *v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+20h] [rbp-60h] BYREF
  NTSTATUS v30; // [rsp+24h] [rbp-5Ch]
  _QWORD v31[6]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD SystemInformation[4]; // [rsp+58h] [rbp-28h] BYREF

  v29[0] = a2;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  memset(v31, 0, sizeof(v31));
  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    if ( qword_1C00A29D8 )
    {
      v7 = *(_QWORD *)(qword_1C00A29D8 + 64);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v5 = *(_BYTE *)(v7 + 2741);
          if ( v5 )
            v6 = *(_BYTE *)(v7 + 2742);
        }
      }
    }
  }
  v8 = 0;
  v30 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, SystemInformation, 0x20u, 0LL);
  if ( v30 >= 0 )
  {
    v10 = HIDWORD(SystemInformation[1]);
    v8 = 1;
    v11 = SystemInformation[0];
    v12 = SystemInformation[1];
    a1[6] = -1;
    a1[7] = 0;
    *((_QWORD *)a1 + 2) = v11;
    LODWORD(v11) = SystemInformation[3];
    a1[1] = v10;
    LODWORD(v31[3]) = v10;
    v13 = SystemInformation[2];
    *a1 = v12;
    HIDWORD(v31[3]) = v12;
    LODWORD(v31[4]) = v13;
    v14 = v11 - 3;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v8 = 0;
LABEL_13:
        v16 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, a1 + 8, 0x80u, 0LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          memset(a1 + 8, 0, 0x80uLL);
          v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v28 + 24) = v17;
          WdLogEvent5_WdWarning(v28);
        }
        goto LABEL_15;
      }
      a1[3] = 22;
      v15 = 4 * v13;
      HIDWORD(v31[4]) = 5;
    }
    else
    {
      a1[3] = 20;
      v15 = 3 * v13;
      HIDWORD(v31[4]) = 4;
    }
    a1[2] = v15;
    goto LABEL_13;
  }
LABEL_15:
  if ( !v29[0] )
    goto LABEL_28;
  v18 = 0;
  v29[0] = 0;
  if ( v6 )
  {
    LOBYTE(v9) = v6;
    DxgDetermineBootImageMode(a1, 0LL, v9, v29);
    if ( !v29[0] || (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) < 0 )
      goto LABEL_18;
  }
  else
  {
    if ( !a3 )
    {
LABEL_18:
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      goto LABEL_28;
    }
    PoolWithTag = 0LL;
    v20 = 0LL;
    if ( !v8 )
      goto LABEL_39;
    v21 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    v22 = (unsigned int)(a1[1] * a1[2]);
    if ( v21 >= 0 )
      goto LABEL_39;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v22, 0x74727044u);
    v23 = (KSPIN_LOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x74727044u);
    v20 = v23;
    if ( !PoolWithTag || !v23 )
      goto LABEL_39;
    KeInitializeSpinLock(v23 + 3);
    v31[2] = v20;
    v31[0] = PoolWithTag;
    v31[1] = v22;
    if ( !v5 || LODWORD(SystemInformation[1]) > 0xBB8 || (LOBYTE(v31[5]) = 0, HIDWORD(SystemInformation[1]) > 0x7D0) )
      LOBYTE(v31[5]) = 1;
    if ( (int)InbvSetVirtualFrameBuffer(v31, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode(a1, v31, 0LL, v29);
      v18 = v29[0];
    }
    else
    {
LABEL_39:
      DxgDetermineBootImageMode(a1, 0LL, 0LL, 0LL);
    }
    if ( !v18 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x74727044u);
      if ( v20 )
        ExFreePoolWithTag(v20, 0x74727044u);
    }
  }
LABEL_28:
  if ( !v8 )
  {
    memset(a1, 0, 0x20uLL);
    a1[6] = -1;
    memset(a1 + 8, 0, 0x80uLL);
  }
  return (unsigned int)v30;
}
