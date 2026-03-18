/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C00B5830
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C00D40C0 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  ULONG64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int *v8; // rdx
  unsigned int v9; // eax
  size_t v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  bool v14; // zf
  _BYTE v16[4]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-C4h]
  int v18; // [rsp+30h] [rbp-B8h]
  _DWORD *v19; // [rsp+38h] [rbp-B0h]
  __int64 v20; // [rsp+40h] [rbp-A8h]
  _BYTE v21[24]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v22[10]; // [rsp+70h] [rbp-78h] BYREF

  memset(v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22[1]);
  v22[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v22[3]) = 30;
  LOBYTE(v22[6]) = -1;
  v2 = 0LL;
  v19 = 0LL;
  v20 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v16, v3, v4);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL);
    v7 = *(_DWORD *)(v5 + 24) & 0x10;
  }
  else
  {
    v7 = 0;
  }
  if ( v7 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v20, 0) )
    goto LABEL_46;
  v8 = (unsigned int *)(Src + 4);
  v5 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  v17 = v9;
  v10 = v9;
  if ( v9 < 0x14 )
  {
    v6 = -1073741789;
    v18 = -1073741789;
    v2 = v19;
    goto LABEL_47;
  }
  v11 = Win32AllocPoolWithQuota(v9, 0x63447355u);
  v2 = (_DWORD *)v11;
  v19 = (_DWORD *)v11;
  if ( !v11 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v11, v21, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v12) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v10] > MmUserProbeAddress || &Src[v10] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v10);
  v2[1] = v10;
  if ( gfSwitchInProgress )
    goto LABEL_2;
  if ( *v2 == -19 )
  {
    if ( gSessionId != gServiceSessionId )
      goto LABEL_46;
  }
  else if ( gProtocolType )
  {
LABEL_46:
    v6 = -1073741790;
    goto LABEL_47;
  }
  v13 = DrvDisplayConfigSetDeviceInfo(v2, v22);
  v6 = v13;
  if ( v13 == -2147483643 )
  {
    v6 = -1073741789;
    goto LABEL_47;
  }
  if ( v13 == -1073741789 )
    goto LABEL_47;
  v5 = (unsigned int)(*v2 - 7);
  if ( (unsigned int)v5 > 1 )
  {
    if ( v13 >= 0 || v13 == -1073741811 || v13 == -1073741801 || v13 == -1073741790 || v13 == -1073741776 )
      goto LABEL_47;
    v14 = v13 == -1073741637;
  }
  else
  {
    if ( v13 == -1073741811
      || v13 == -1073741790
      || v13 == -1073741649
      || v13 == -1073741637
      || v13 == -1073741632
      || v13 >= 0
      || v13 == -1073741801 )
    {
      goto LABEL_47;
    }
    v14 = v13 == -1073741776;
  }
  if ( !v14 && (v13 <= -1073741586 || v13 > -1073741574) )
LABEL_2:
    v6 = -1073741823;
LABEL_47:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v21);
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
