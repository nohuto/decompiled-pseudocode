/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C004DE80
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C00A4330 (DrvSampleDisplayState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     SetLastNtError @ 0x1C00BF71C (SetLastNtError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  _DWORD *v2; // r14
  const void *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  int DeviceInfoInternal; // ebx
  unsigned int *v7; // rdx
  size_t v8; // rsi
  SIZE_T v9; // r12
  __int64 v10; // rax
  _DWORD *v11; // rdx
  _DWORD *v12; // r8
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // eax
  bool v16; // zf
  unsigned int v17; // eax
  __int64 v18; // rax
  volatile void *v19; // rsi
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  __int64 v24; // rcx
  bool v25; // zf
  unsigned __int64 v26; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v28; // rax
  char *v29; // rcx
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rsi
  int v36; // r12d
  __int64 v37; // rsi
  __int64 v38; // r15
  _DWORD *v39; // rdx
  char *v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  int v48; // [rsp+30h] [rbp-D8h]
  __int64 v49; // [rsp+34h] [rbp-D4h]
  int v50; // [rsp+3Ch] [rbp-CCh]
  __int64 v51; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v52; // [rsp+68h] [rbp-A0h]
  int v53; // [rsp+70h] [rbp-98h]
  _BYTE v54[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v55[112]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0LL;
  memset(v55, 0, 24);
  v3 = 0LL;
  memset(v54, 0, sizeof(v54));
  v50 = 0;
  v49 = 0LL;
  v48 = 0;
  EnterSharedCrit(0, 1);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v7 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v7 = (unsigned int *)MmUserProbeAddress;
  v8 = *v7;
  v53 = v8;
  if ( (unsigned int)v8 < 0x14 )
    ExRaiseStatus(-1073741811);
  v9 = v8;
  v10 = Win32AllocPoolWithQuota(v8, 0x63447355u);
  v2 = (_DWORD *)v10;
  if ( !v10 )
  {
    v29 = (char *)MmUserProbeAddress;
    v30 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v30 = (_DWORD *)MmUserProbeAddress;
    if ( *v30 == -21 && (_DWORD)v8 == 2056 )
    {
      v12 = a1 + 2016;
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v12 = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      v11 = a1 + 2024;
      v29 = a1 + 2028;
      if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)v29 > MmUserProbeAddress )
      {
        v29 = (char *)MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *v11 = 1144084230;
    }
    v31 = WdLogNewEntry5_WdError(v29, v11, v12);
    *(_QWORD *)(v31 + 24) = v8;
    *(_QWORD *)(v31 + 32) = 1144084230LL;
    WdLogEvent5_WdError(v31);
    ExRaiseStatus(-1073741801);
  }
  PushW32ThreadLock(v10, v55, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v8] > MmUserProbeAddress || &a1[v8] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, v8);
  v2[1] = v8;
  v14 = *v2;
  v15 = *v2 + 22;
  if ( v15 > 0x1C || (v5 = 386976263LL, !_bittest((const int *)&v5, v15)) )
  {
    if ( v14 == 100 )
      goto LABEL_64;
    if ( gfSwitchInProgress )
    {
LABEL_2:
      DeviceInfoInternal = -1073741823;
      goto LABEL_114;
    }
    if ( !(unsigned int)UserIsWddmConnectedSession(v5, v4) )
    {
      DeviceInfoInternal = -1073741790;
      goto LABEL_114;
    }
  }
  if ( v14 > 100 )
    goto LABEL_32;
  if ( v14 == 100 )
    goto LABEL_64;
  if ( v14 > -7 )
  {
    if ( v14 <= 3 )
    {
      if ( v14 == 3 )
      {
        v16 = (_DWORD)v8 == 80;
        goto LABEL_31;
      }
      if ( v14 == -5 )
        goto LABEL_39;
      if ( v14 != -3 )
      {
        switch ( v14 )
        {
          case -2:
            goto LABEL_56;
          case 1:
            v16 = (_DWORD)v8 == 84;
            break;
          case 2:
            v16 = (_DWORD)v8 == 420;
            break;
          default:
            goto LABEL_32;
        }
LABEL_31:
        if ( !v16 )
          goto LABEL_32;
        goto LABEL_66;
      }
LABEL_57:
      v16 = (_DWORD)v8 == 32;
      goto LABEL_31;
    }
    v20 = v14 - 4;
    if ( !v20 )
    {
      v16 = (_DWORD)v8 == 276;
      goto LABEL_31;
    }
    v21 = v20 - 2;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( !v23 )
          goto LABEL_57;
        if ( v23 != 2 )
          goto LABEL_32;
      }
    }
LABEL_64:
    v16 = (_DWORD)v8 == 24;
    goto LABEL_31;
  }
  if ( v14 == -7 )
  {
    v16 = (_DWORD)v8 == 936;
    goto LABEL_31;
  }
  if ( v14 > -13 )
  {
    if ( v14 != -12 )
    {
      if ( v14 == -11 )
        goto LABEL_56;
      if ( v14 == -10 )
      {
LABEL_39:
        v16 = (_DWORD)v8 == 28;
        goto LABEL_31;
      }
      if ( v14 != -9 )
      {
        v16 = (_DWORD)v8 == 536;
        goto LABEL_31;
      }
    }
    goto LABEL_64;
  }
  switch ( v14 )
  {
    case -13:
      v16 = (_DWORD)v8 == 36;
      goto LABEL_31;
    case -22:
      goto LABEL_39;
    case -21:
LABEL_56:
      v16 = (_DWORD)v8 == 2056;
      goto LABEL_31;
    case -20:
      v16 = (_DWORD)v8 == 60;
      goto LABEL_31;
  }
  if ( v14 != -15 )
  {
    if ( v14 == -14 )
    {
      v16 = (_DWORD)v8 == 40;
      goto LABEL_31;
    }
LABEL_32:
    DeviceInfoInternal = -1073741811;
    goto LABEL_114;
  }
  if ( (_DWORD)v8 != 32 )
    goto LABEL_32;
  v17 = v2[5];
  if ( !v17 )
  {
LABEL_66:
    v19 = 0LL;
    goto LABEL_67;
  }
  v18 = Win32AllocPoolWithQuota(v17, 0x63447355u);
  v3 = (const void *)v18;
  if ( !v18 )
  {
    DeviceInfoInternal = -1073741801;
LABEL_114:
    if ( v48 )
    {
      v51 = 0LL;
      v52 = 0;
      DrvSampleDisplayState(&v51);
      v35 = (unsigned int)v51;
      if ( v49 == __PAIR64__(v52, v51) )
      {
        v36 = 1;
        v37 = v50;
        v38 = DeviceInfoInternal;
      }
      else
      {
        v36 = 0;
        v39 = a1 + 2024;
        v40 = a1 + 2028;
        if ( a1 + 2028 < a1 + 2024 || (unsigned __int64)v40 > MmUserProbeAddress )
        {
          v40 = (char *)MmUserProbeAddress;
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        *v39 = 0;
        v41 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v34);
        v41[3] = (unsigned int)v49;
        v41[4] = HIDWORD(v49);
        v41[5] = v35;
        v41[6] = v52;
        v37 = v50;
        v41[7] = v50;
        WdLogEvent5_WdError(v41);
        v45 = WdLogNewEntry5_WdError(v43, v42, v44);
        v38 = DeviceInfoInternal;
        *(_QWORD *)(v45 + 24) = DeviceInfoInternal;
        *(_QWORD *)(v45 + 32) = v50;
        WdLogEvent5_WdError(v45);
      }
      if ( dword_1C0219828 || !v36 )
      {
        v46 = WdLogNewEntry5_WdError(v33, v32, v34);
        *(_QWORD *)(v46 + 24) = v38;
        *(_QWORD *)(v46 + 32) = v37;
        WdLogEvent5_WdError(v46);
      }
      else
      {
        dword_1C0219828 = 1;
        ((void (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))qword_1C02152F8)(403LL, 2061LL, v38, v37, 0LL);
      }
    }
    goto LABEL_125;
  }
  PushW32ThreadLock(v18, v54, Win32FreePool);
  v19 = (volatile void *)*((_QWORD *)v2 + 3);
  *((_QWORD *)v2 + 3) = v3;
LABEL_67:
  if ( *v2 == -21 )
  {
    v49 = *((_QWORD *)v2 + 252);
    *((_QWORD *)v2 + 252) = 0LL;
    v48 = 1;
  }
  DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v2, 1);
  if ( DeviceInfoInternal < 0 && v48 )
  {
    v24 = (unsigned int)v2[506];
    v50 = v2[506];
  }
  if ( *v2 == 3 )
    v2[7] = 0;
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
    goto LABEL_93;
  }
  if ( DeviceInfoInternal != -1073741789 )
  {
    if ( (unsigned int)(*v2 - 7) > 1 )
    {
      if ( DeviceInfoInternal >= 0 )
        goto LABEL_93;
      v26 = (unsigned int)(DeviceInfoInternal + 1073741811);
      if ( (unsigned int)v26 <= 0x23 )
      {
        v24 = 0x800200401LL;
        if ( _bittest64(&v24, v26) )
          goto LABEL_93;
      }
      v25 = DeviceInfoInternal == -1073741637;
    }
    else
    {
      if ( DeviceInfoInternal == -1073741811 )
        goto LABEL_93;
      if ( DeviceInfoInternal == -1073741790 )
        goto LABEL_93;
      if ( (unsigned int)(DeviceInfoInternal + 1073741649) <= 0x11 )
      {
        v24 = 135169LL;
        if ( _bittest((const int *)&v24, DeviceInfoInternal + 1073741649) )
          goto LABEL_93;
      }
      if ( DeviceInfoInternal >= 0 || DeviceInfoInternal == -1073741801 )
        goto LABEL_93;
      v25 = DeviceInfoInternal == -1073741776;
    }
    if ( !v25 )
    {
      v24 = (unsigned int)DeviceInfoInternal;
      if ( (unsigned int)(DeviceInfoInternal + 1073741585) > 0xB )
        v24 = 3221225473LL;
      DeviceInfoInternal = v24;
    }
  }
LABEL_93:
  if ( *v2 == -15 )
  {
    *((_QWORD *)v2 + 3) = v19;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( v2[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v24);
        ProbeForWrite(v19, (unsigned int)v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)v19, v3, (unsigned int)v2[5]);
      }
    }
  }
  v28 = PsGetCurrentProcessWow64Process(v24);
  ProbeForWrite(a1, v9, v28 != 0 ? 1 : 4);
  memmove(a1, v2, v9);
  if ( DeviceInfoInternal < 0 )
    goto LABEL_114;
LABEL_125:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock(v54);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v55);
  UserSessionSwitchLeaveCrit(v5, v4);
  return (unsigned int)DeviceInfoInternal;
}
