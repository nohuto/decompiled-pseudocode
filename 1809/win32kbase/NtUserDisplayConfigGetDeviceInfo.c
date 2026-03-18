/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C0013DC0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritShared@@QEAA@XZ @ 0x1C00A8208 (--0EnterLeaveCritShared@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(unsigned int *a1)
{
  int *v2; // rdi
  const void *v3; // rsi
  volatile void *v4; // r12
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // rbx
  SIZE_T v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // r9d
  bool v12; // zf
  __int64 v13; // rcx
  int DeviceInfo; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rax
  unsigned int v18; // eax
  __int64 v19; // rax
  bool v20; // zf
  _BYTE v21[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v22[72]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+18h]

  v2 = 0LL;
  v3 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared((EnterLeaveCritShared *)&v23);
  if ( !gbVideoInitialized )
    goto LABEL_73;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  v6 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 0x14 )
    ExRaiseStatus(-1073741811);
  v8 = (unsigned int)v7;
  v9 = Win32AllocPoolWithQuota((unsigned int)v7, 1665430357LL);
  v2 = (int *)v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v9, v22, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)a1 + v7 > MmUserProbeAddress || (unsigned int *)((char *)a1 + v7) < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, (unsigned int)v7);
  v2[1] = v7;
  v11 = *v2;
  if ( *v2 == -2 )
    goto LABEL_22;
  if ( v11 > -2 )
  {
    if ( v11 >= 2 && (v11 <= 4 || v11 == 6 || v11 == 100) )
      goto LABEL_22;
  }
  else if ( v11 == -13 || v11 == -11 || v11 == -20 || v11 > -9 && v11 <= -7 )
  {
    goto LABEL_22;
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
LABEL_73:
    DeviceInfo = -1073741823;
    goto LABEL_44;
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    DeviceInfo = -1073741790;
    goto LABEL_44;
  }
LABEL_22:
  if ( v11 > -3 )
  {
    if ( v11 > 6 )
    {
      if ( v11 != 11 )
      {
        if ( v11 == 9 )
          goto LABEL_62;
        if ( v11 != 7 && v11 != 100 )
          goto LABEL_82;
      }
    }
    else if ( v11 != 6 )
    {
      if ( v11 != -2 )
      {
        switch ( v11 )
        {
          case 1:
            v12 = (_DWORD)v7 == 84;
            break;
          case 2:
            v12 = (_DWORD)v7 == 420;
            break;
          case 3:
            v12 = (_DWORD)v7 == 80;
            break;
          case 4:
            v12 = (_DWORD)v7 == 276;
            break;
          default:
            goto LABEL_82;
        }
LABEL_32:
        if ( v12 )
          goto LABEL_33;
LABEL_82:
        DeviceInfo = -1073741811;
        goto LABEL_44;
      }
LABEL_31:
      v12 = (_DWORD)v7 == 2048;
      goto LABEL_32;
    }
LABEL_52:
    v12 = (_DWORD)v7 == 24;
    goto LABEL_32;
  }
  if ( v11 == -3 )
  {
LABEL_62:
    v12 = (_DWORD)v7 == 32;
    goto LABEL_32;
  }
  if ( v11 > -11 )
  {
    if ( v11 != -9 )
    {
      switch ( v11 )
      {
        case -7:
          v12 = (_DWORD)v7 == 932;
          break;
        case -8:
          v12 = (_DWORD)v7 == 536;
          break;
        case -10:
        case -5:
          v12 = (_DWORD)v7 == 28;
          break;
        default:
          goto LABEL_82;
      }
      goto LABEL_32;
    }
    goto LABEL_52;
  }
  switch ( v11 )
  {
    case -11:
      goto LABEL_31;
    case -13:
      v12 = (_DWORD)v7 == 36;
      goto LABEL_32;
    case -14:
      v12 = (_DWORD)v7 == 40;
      goto LABEL_32;
    case -20:
      v12 = (_DWORD)v7 == 60;
      goto LABEL_32;
  }
  if ( v11 != -15 )
  {
    if ( v11 != -12 )
      goto LABEL_82;
    goto LABEL_52;
  }
  if ( (_DWORD)v7 != 32 )
    goto LABEL_82;
  v18 = v2[5];
  if ( v18 )
  {
    v19 = Win32AllocPoolWithQuota(v18, 1665430357LL);
    v3 = (const void *)v19;
    v24 = v19;
    if ( !v19 )
    {
      DeviceInfo = -1073741801;
      goto LABEL_44;
    }
    PushW32ThreadLock(v19, v21, Win32FreePool);
    v4 = (volatile void *)*((_QWORD *)v2 + 3);
    *((_QWORD *)v2 + 3) = v3;
  }
LABEL_33:
  DeviceInfo = DrvDisplayConfigGetDeviceInfo((struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *)v2);
  if ( *v2 == 3 )
    v2[7] = 0;
  if ( DeviceInfo == -2147483643 )
  {
    DeviceInfo = -1073741789;
  }
  else if ( DeviceInfo != -1073741789 )
  {
    if ( *v2 < 7 || *v2 > 8 )
    {
      if ( DeviceInfo < 0
        && DeviceInfo != -1073741811
        && DeviceInfo != -1073741801
        && DeviceInfo != -1073741790
        && DeviceInfo != -1073741776 )
      {
        v20 = DeviceInfo == -1073741637;
        goto LABEL_108;
      }
    }
    else if ( DeviceInfo != -1073741811
           && DeviceInfo != -1073741790
           && DeviceInfo != -1073741649
           && DeviceInfo != -1073741637
           && DeviceInfo != -1073741632
           && DeviceInfo < 0
           && DeviceInfo != -1073741801 )
    {
      v20 = DeviceInfo == -1073741776;
LABEL_108:
      if ( !v20 && (DeviceInfo <= -1073741586 || DeviceInfo > -1073741574) )
        DeviceInfo = -1073741823;
    }
  }
  if ( *v2 == -15 && DeviceInfo >= 0 && v2[5] )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
    ProbeForWrite(v4, (unsigned int)v2[5], CurrentProcessWow64Process != 0 ? 1 : 4);
    memmove((void *)v4, v3, (unsigned int)v2[5]);
    *((_QWORD *)v2 + 3) = v4;
  }
  v16 = PsGetCurrentProcessWow64Process(v13);
  ProbeForWrite(a1, v8, v16 != 0 ? 1 : 4);
  memmove(a1, v2, v8);
LABEL_44:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock(v21);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v22);
  UserSessionSwitchLeaveCrit(v5);
  return (unsigned int)DeviceInfo;
}
