/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C00427C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0042B10 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(unsigned int *a1)
{
  int *v2; // rsi
  const void *v3; // r14
  volatile void *v4; // r12
  __int64 v5; // rcx
  unsigned int *v6; // rdx
  __int64 v7; // rbx
  SIZE_T v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v12; // rcx
  int DeviceInfo; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  bool v19; // zf
  _BYTE v20[24]; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v21[32]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+18h]

  v2 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v22);
  if ( !gbVideoInitialized )
    goto LABEL_66;
  v6 = a1 + 1;
  if ( (unsigned __int64)(a1 + 1) >= MmUserProbeAddress )
    v6 = (unsigned int *)MmUserProbeAddress;
  v7 = *v6;
  if ( (unsigned int)v7 < 0x14 )
    ExRaiseStatus(-1073741811);
  v8 = (unsigned int)v7;
  v9 = Win32AllocPoolWithQuota((unsigned int)v7, 0x63447355u);
  v2 = (int *)v9;
  if ( !v9 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v9, v21, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)a1 + v7 > MmUserProbeAddress || (unsigned int *)((char *)a1 + v7) < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, a1, (unsigned int)v7);
  v2[1] = v7;
  v5 = (unsigned int)*v2;
  if ( (_DWORD)v5 == -13
    || (_DWORD)v5 == -11
    || (int)v5 > -9 && ((_DWORD)v5 == -2 || (int)v5 <= -7 || (int)v5 > 1 && ((int)v5 <= 4 || (_DWORD)v5 == 6)) )
  {
    goto LABEL_19;
  }
  if ( gfSwitchInProgress )
  {
LABEL_66:
    DeviceInfo = -1073741823;
    goto LABEL_36;
  }
  if ( gProtocolType )
  {
    DeviceInfo = -1073741790;
    goto LABEL_36;
  }
LABEL_19:
  if ( (int)v5 > -3 )
  {
    switch ( (_DWORD)v5 )
    {
      case 0xFFFFFFFE:
LABEL_43:
        v11 = (_DWORD)v7 == 2044;
        goto LABEL_23;
      case 1:
        v11 = (_DWORD)v7 == 84;
        goto LABEL_23;
      case 3:
        v11 = (_DWORD)v7 == 80;
        goto LABEL_23;
      case 4:
        v11 = (_DWORD)v7 == 276;
        goto LABEL_23;
    }
    if ( (_DWORD)v5 != 11 )
    {
      if ( (_DWORD)v5 == 2 )
      {
        v11 = (_DWORD)v7 == 420;
LABEL_23:
        if ( v11 )
        {
LABEL_24:
          DeviceInfo = DrvDisplayConfigGetDeviceInfo(v2);
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
                v19 = DeviceInfo == -1073741637;
                goto LABEL_91;
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
              v19 = DeviceInfo == -1073741776;
LABEL_91:
              if ( !v19 && (DeviceInfo <= -1073741586 || DeviceInfo > -1073741574) )
                DeviceInfo = -1073741823;
            }
          }
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
          ProbeForWrite(a1, v8, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(a1, v2, v8);
          if ( *v2 == -15 )
          {
            if ( v4 )
              *((_QWORD *)a1 + 3) = v4;
            if ( DeviceInfo >= 0 && v2[5] )
            {
              v15 = PsGetCurrentProcessWow64Process(v5);
              ProbeForWrite(v4, (unsigned int)v2[5], v15 != 0 ? 1 : 4);
              memmove((void *)v4, v3, (unsigned int)v2[5]);
            }
          }
          goto LABEL_36;
        }
LABEL_77:
        DeviceInfo = -1073741811;
        goto LABEL_36;
      }
      if ( (_DWORD)v5 == 9 )
      {
LABEL_62:
        v11 = (_DWORD)v7 == 32;
        goto LABEL_23;
      }
      if ( (_DWORD)v5 != 6 && (_DWORD)v5 != 7 )
        goto LABEL_77;
    }
LABEL_48:
    v11 = (_DWORD)v7 == 24;
    goto LABEL_23;
  }
  if ( (_DWORD)v5 == -3 )
    goto LABEL_62;
  v5 = (unsigned int)(v5 + 15);
  switch ( (int)v5 )
  {
    case 0:
      if ( (_DWORD)v7 != 32 )
        goto LABEL_77;
      v17 = v2[5];
      if ( !v17 )
        goto LABEL_24;
      v18 = Win32AllocPoolWithQuota(v17, 0x63447355u);
      v3 = (const void *)v18;
      v23 = v18;
      if ( v18 )
      {
        PushW32ThreadLock(v18, v20, Win32FreePool);
        v4 = (volatile void *)*((_QWORD *)v2 + 3);
        *((_QWORD *)v2 + 3) = v3;
        goto LABEL_24;
      }
      DeviceInfo = -1073741801;
      break;
    case 1:
      v11 = (_DWORD)v7 == 40;
      goto LABEL_23;
    case 2:
      v11 = (_DWORD)v7 == 36;
      goto LABEL_23;
    case 3:
    case 6:
      goto LABEL_48;
    case 4:
      goto LABEL_43;
    case 5:
    case 10:
      v11 = (_DWORD)v7 == 28;
      goto LABEL_23;
    case 7:
      v11 = (_DWORD)v7 == 536;
      goto LABEL_23;
    case 8:
      v11 = (_DWORD)v7 == 916;
      goto LABEL_23;
    default:
      goto LABEL_77;
  }
LABEL_36:
  if ( v3 )
    PopAndFreeAlwaysW32ThreadLock(v20);
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v21);
  UserSessionSwitchLeaveCrit(v5);
  return (unsigned int)DeviceInfo;
}
