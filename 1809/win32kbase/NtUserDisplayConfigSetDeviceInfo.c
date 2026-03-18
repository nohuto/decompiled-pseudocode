/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570
 * Callers:
 *     <none>
 * Callees:
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0003800 (DrvDisplayConfigSetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rdi
  ULONG64 v3; // rcx
  int v4; // eax
  unsigned int *v5; // rdx
  unsigned int v6; // eax
  size_t v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  bool v13; // zf
  _BYTE v14[4]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-B4h]
  int v16; // [rsp+30h] [rbp-A8h]
  _DWORD *v17; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v18; // [rsp+40h] [rbp-98h]
  _BYTE v19[24]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v20[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v20, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v20[1]);
  v20[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v20[3]) = 30;
  LOBYTE(v20[6]) = -1;
  v2 = 0LL;
  v17 = 0LL;
  v18 = 0xFFFFFFFF00002000uLL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v14);
  if ( !gbVideoInitialized )
    goto LABEL_48;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v4 = *(_DWORD *)(v3 + 24) & 0x10;
  }
  else
  {
    v4 = 0;
  }
  if ( v4 || !(unsigned int)CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v18, 0LL) )
    goto LABEL_31;
  v5 = (unsigned int *)(Src + 4);
  v3 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  v15 = v6;
  v7 = v6;
  if ( v6 < 0x14 )
  {
    v10 = -1073741789;
    v16 = -1073741789;
    v2 = v17;
    goto LABEL_25;
  }
  v8 = Win32AllocPoolWithQuota(v6, 1665430357LL);
  v2 = (_DWORD *)v8;
  v17 = (_DWORD *)v8;
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v8, v19, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v7] > MmUserProbeAddress || &Src[v7] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v7);
  v2[1] = v7;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
    goto LABEL_48;
  if ( *v2 == -19 )
  {
    if ( gSessionId == gServiceSessionId )
      goto LABEL_21;
LABEL_31:
    v10 = -1073741790;
    goto LABEL_25;
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    goto LABEL_31;
LABEL_21:
  v11 = DrvDisplayConfigSetDeviceInfo(v2, v20);
  v10 = v11;
  if ( v11 == -2147483643 )
  {
    v10 = -1073741789;
    goto LABEL_25;
  }
  if ( v11 == -1073741789 )
    goto LABEL_25;
  v3 = (unsigned int)(*v2 - 7);
  if ( (unsigned int)v3 <= 1 )
  {
    if ( v11 == -1073741811
      || v11 == -1073741790
      || v11 == -1073741649
      || v11 == -1073741637
      || v11 == -1073741632
      || v11 >= 0
      || v11 == -1073741801 )
    {
      goto LABEL_25;
    }
    v13 = v11 == -1073741776;
  }
  else
  {
    if ( v11 >= 0 || v11 == -1073741811 || v11 == -1073741801 || v11 == -1073741790 || v11 == -1073741776 )
      goto LABEL_25;
    v13 = v11 == -1073741637;
  }
  if ( !v13 && (v11 <= -1073741586 || v11 > -1073741574) )
LABEL_48:
    v10 = -1073741823;
LABEL_25:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v19);
  UserSessionSwitchLeaveCrit(v3);
  return v10;
}
