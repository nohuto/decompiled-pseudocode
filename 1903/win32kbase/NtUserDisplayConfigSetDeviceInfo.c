/*
 * XREFs of NtUserDisplayConfigSetDeviceInfo @ 0x1C0116F40
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C002C1F4 (CheckAccessEx.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C012D200 (DrvDisplayConfigSetDeviceInfo.c)
 */

__int64 __fastcall NtUserDisplayConfigSetDeviceInfo(char *Src)
{
  _DWORD *v2; // rdi
  struct tagTHREADINFO *v3; // rdx
  ULONG64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  size_t v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // zf
  int v13[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-98h]
  _QWORD v15[5]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v16[10]; // [rsp+80h] [rbp-68h] BYREF

  memset(v16, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v16[1]);
  v14 = MEMORY[0xFFFFF78000000014];
  v16[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v16[3]) = 30;
  LOBYTE(v16[6]) = -1;
  v2 = 0LL;
  memset(v15, 0, 24);
  v13[0] = 0x2000;
  v13[1] = -1;
  EnterCrit(0, 1);
  if ( !gbVideoInitialized )
    goto LABEL_2;
  v3 = gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL);
    v6 = *(_DWORD *)(v4 + 24) & 0x10;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v13, 0) )
    goto LABEL_46;
  v3 = (struct tagTHREADINFO *)(Src + 4);
  v4 = MmUserProbeAddress;
  if ( (unsigned __int64)(Src + 4) >= MmUserProbeAddress )
    v3 = (struct tagTHREADINFO *)MmUserProbeAddress;
  v7 = *(unsigned int *)v3;
  if ( *(_DWORD *)v3 < 0x14u )
  {
    v5 = -1073741789;
    v2 = 0LL;
    goto LABEL_47;
  }
  v8 = Win32AllocPoolWithQuota(*(unsigned int *)v3, 0x63447355u);
  v2 = (_DWORD *)v8;
  if ( !v8 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v8, v15, Win32FreePool);
  if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&Src[v7] > MmUserProbeAddress || &Src[v7] < Src )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v2, Src, v7);
  v2[1] = v7;
  if ( gfSwitchInProgress )
    goto LABEL_2;
  if ( *v2 == -19 )
  {
    if ( gSessionId != gServiceSessionId )
      goto LABEL_46;
  }
  else if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
LABEL_46:
    v5 = -1073741790;
    goto LABEL_47;
  }
  v10 = DrvDisplayConfigSetDeviceInfo(v2, v16);
  v5 = v10;
  if ( v10 == -2147483643 )
  {
    v5 = -1073741789;
    goto LABEL_47;
  }
  if ( v10 == -1073741789 )
    goto LABEL_47;
  v4 = (unsigned int)(*v2 - 7);
  if ( (unsigned int)v4 > 1 )
  {
    if ( v10 >= 0 || v10 == -1073741811 || v10 == -1073741801 || v10 == -1073741790 || v10 == -1073741776 )
      goto LABEL_47;
    v11 = v10 == -1073741637;
  }
  else
  {
    if ( v10 == -1073741811
      || v10 == -1073741790
      || v10 == -1073741649
      || v10 == -1073741637
      || v10 == -1073741632
      || v10 >= 0
      || v10 == -1073741801 )
    {
      goto LABEL_47;
    }
    v11 = v10 == -1073741776;
  }
  if ( !v11 && (v10 <= -1073741586 || v10 > -1073741574) )
LABEL_2:
    v5 = -1073741823;
LABEL_47:
  if ( v2 )
    PopAndFreeAlwaysW32ThreadLock(v15);
  UserSessionSwitchLeaveCrit(v4, (__int64)v3);
  return v5;
}
