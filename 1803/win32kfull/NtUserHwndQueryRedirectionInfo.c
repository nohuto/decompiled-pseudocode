/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C01F0C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AD50 (UserSetLastStatus.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     GreGetDxSharedSurface @ 0x1C00E895C (GreGetDxSharedSurface.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GreGetHwndUpdateIds @ 0x1C023C6D8 (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, _OWORD *a3, ULONG64 a4)
{
  int DxSharedSurface; // esi
  unsigned int v8; // r14d
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // ecx
  __int64 StyleWindow; // rax
  HWND *v17; // r13
  unsigned int *v18; // rax
  unsigned int v19; // ebx
  __int64 CurrentProcess; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // rax
  int v23; // r15d
  int HwndUpdateIds; // eax
  _DWORD *v25; // rax
  unsigned int v27; // [rsp+30h] [rbp-C8h] BYREF
  int v28; // [rsp+34h] [rbp-C4h]
  unsigned int v29; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-A8h] BYREF
  ULONG64 v33; // [rsp+60h] [rbp-98h]
  _OWORD Src[2]; // [rsp+90h] [rbp-68h] BYREF

  v33 = a4;
  DxSharedSurface = -1073741811;
  v8 = 32;
  memset(Src, 0, sizeof(Src));
  v9 = 0;
  v31 = 0LL;
  v32[0] = 0LL;
  v30 = 0LL;
  v29 = 0;
  v27 = 0;
  EnterSharedCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( !v10 )
    goto LABEL_55;
  if ( a2 >= 5 )
  {
    v15 = -1073741821;
LABEL_54:
    UserSetLastStatus(v15, 1);
    goto LABEL_55;
  }
  StyleWindow = GetStyleWindow(v10, 2568);
  v17 = (HWND *)StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) == 0x29D )
    goto LABEL_53;
  v18 = (unsigned int *)v33;
  if ( v33 >= MmUserProbeAddress )
    v18 = (unsigned int *)MmUserProbeAddress;
  v19 = *v18;
  v28 = *v18;
  if ( a2 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_53;
      v8 = 16;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 != 2 )
      {
        if ( a2 != 3 )
        {
          v15 = -1073741821;
          goto LABEL_54;
        }
        CurrentProcess = PsGetCurrentProcess(v12, v11);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          v15 = -1073741790;
          goto LABEL_54;
        }
        if ( !a3 )
          goto LABEL_53;
        v8 = 16;
        if ( v19 < 0x10 )
        {
LABEL_17:
          v15 = -1073741306;
          goto LABEL_54;
        }
        v28 = 16;
        v12 = MmUserProbeAddress;
        v21 = a3;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v21 = (_OWORD *)MmUserProbeAddress;
        Src[0] = *v21;
        goto LABEL_32;
      }
      if ( !a3 )
        goto LABEL_53;
      v8 = 4;
    }
    if ( v19 < v8 )
      goto LABEL_17;
    v28 = v8;
    goto LABEL_32;
  }
  if ( !a3 )
    goto LABEL_53;
  if ( v19 < 0x20 )
    goto LABEL_17;
  v28 = 32;
  v12 = MmUserProbeAddress;
  v22 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v22 = (_OWORD *)MmUserProbeAddress;
  Src[0] = *v22;
  Src[1] = v22[1];
  v27 = DWORD1(Src[0]);
  if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
    goto LABEL_53;
LABEL_32:
  if ( !a2 )
  {
    v30 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*v17, v32, &v30, &v29, &v27, &v31);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      DxSharedSurface = RecreateRedirectionBitmap((struct tagWND *)v17, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_53;
      DxSharedSurface = GreGetDxSharedSurface(*v17, v32, &v30, &v29, &v27, &v31);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src[0] = __PAIR64__(v27, v29);
      *((_QWORD *)&Src[0] + 1) = v31;
      *(_QWORD *)&Src[1] = v30;
      *((_QWORD *)&Src[1] + 1) = v32[0];
      goto LABEL_47;
    }
LABEL_53:
    v15 = DxSharedSurface;
    goto LABEL_54;
  }
  v23 = a2 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
      goto LABEL_47;
    HwndUpdateIds = GreGetDxSharedSurface(*v17, v32, &v30, &v29, &v27, &v31);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_37:
      LODWORD(Src[0]) = v27;
      goto LABEL_47;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_37;
LABEL_39:
    v15 = HwndUpdateIds;
    goto LABEL_54;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*v17);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_39;
LABEL_47:
  if ( DxSharedSurface >= 0 )
  {
    v9 = 1;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    memmove(a3, Src, v8);
    v12 = MmUserProbeAddress;
    v25 = (_DWORD *)v33;
    if ( v33 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v8;
  }
LABEL_55:
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v9;
}
