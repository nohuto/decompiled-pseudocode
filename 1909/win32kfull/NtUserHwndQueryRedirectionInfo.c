/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C022F810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     GreGetDxSharedSurface @ 0x1C00FD58C (GreGetDxSharedSurface.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     GreGetHwndUpdateIds @ 0x1C026C90C (GreGetHwndUpdateIds.c)
 */

__int64 __fastcall NtUserHwndQueryRedirectionInfo(__int64 a1, int a2, _OWORD *a3, ULONG64 a4)
{
  int DxSharedSurface; // esi
  size_t v9; // r14
  int v10; // edi
  __int64 v11; // rax
  ULONG64 v12; // rcx
  NTSTATUS v13; // ecx
  __int64 StyleWindow; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  HWND *v18; // r10
  unsigned int *v19; // rax
  unsigned int v20; // r12d
  __int64 CurrentProcess; // rax
  int v22; // ebx
  _OWORD *v23; // rax
  _OWORD *v24; // rax
  int v25; // r15d
  int HwndUpdateIds; // eax
  HWND *v27; // r15
  _DWORD *v28; // rax
  unsigned int v30; // [rsp+30h] [rbp-C8h] BYREF
  int v31; // [rsp+34h] [rbp-C4h]
  unsigned int v32; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct tagWND *v36; // [rsp+60h] [rbp-98h]
  ULONG64 v37; // [rsp+70h] [rbp-88h]
  _OWORD Src[2]; // [rsp+98h] [rbp-60h] BYREF

  v37 = a4;
  DxSharedSurface = -1073741811;
  v9 = 32LL;
  memset(Src, 0, sizeof(Src));
  v10 = 0;
  v34 = 0LL;
  v35[0] = 0LL;
  v33 = 0LL;
  v32 = 0;
  v30 = 0;
  EnterSharedCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  if ( !v11 )
    goto LABEL_54;
  if ( a2 >= 5 )
  {
LABEL_3:
    v13 = -1073741821;
LABEL_53:
    UserSetLastStatus(v13, 1);
    goto LABEL_54;
  }
  StyleWindow = GetStyleWindow(v11, 2568);
  v18 = (HWND *)StyleWindow;
  v36 = (struct tagWND *)StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) == 0x29D )
    goto LABEL_52;
  v19 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v19 = (unsigned int *)MmUserProbeAddress;
  v20 = *v19;
  v31 = *v19;
  if ( a2 )
  {
    v12 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      if ( !a3 )
        goto LABEL_52;
      v9 = 16LL;
      if ( v20 < 0x10 )
        goto LABEL_16;
      v22 = 16;
      v31 = 16;
    }
    else
    {
      v12 = (unsigned int)(a2 - 2);
      if ( a2 == 2 )
      {
        if ( !a3 )
          goto LABEL_52;
        v22 = 4;
        if ( v20 < 4 )
          goto LABEL_16;
        v31 = 4;
        v9 = 4LL;
      }
      else
      {
        if ( a2 != 3 )
          goto LABEL_3;
        CurrentProcess = PsGetCurrentProcess(v12, v15, v16, v17);
        if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
        {
          v13 = -1073741790;
          goto LABEL_53;
        }
        if ( !a3 )
          goto LABEL_52;
        v9 = 16LL;
        if ( v20 < 0x10 )
        {
LABEL_16:
          v13 = -1073741306;
          goto LABEL_53;
        }
        v22 = 16;
        v31 = 16;
        v12 = MmUserProbeAddress;
        v23 = a3;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v23 = (_OWORD *)MmUserProbeAddress;
        Src[0] = *v23;
        v18 = (HWND *)v36;
      }
    }
  }
  else
  {
    if ( !a3 )
      goto LABEL_52;
    if ( v20 < 0x20 )
      goto LABEL_16;
    v22 = 32;
    v31 = 32;
    v12 = MmUserProbeAddress;
    v24 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v24 = (_OWORD *)MmUserProbeAddress;
    Src[0] = *v24;
    Src[1] = v24[1];
    v30 = DWORD1(Src[0]);
    if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
      goto LABEL_52;
  }
  if ( !a2 )
  {
    v33 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*v18, v35, &v33, &v32, &v30, &v34);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v27 = (HWND *)v36;
      DxSharedSurface = RecreateRedirectionBitmap(v36, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_52;
      DxSharedSurface = GreGetDxSharedSurface(*v27, v35, &v33, &v32, &v30, &v34);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src[0] = __PAIR64__(v30, v32);
      *((_QWORD *)&Src[0] + 1) = v34;
      *(_QWORD *)&Src[1] = v33;
      *((_QWORD *)&Src[1] + 1) = v35[0];
      goto LABEL_46;
    }
LABEL_52:
    v13 = DxSharedSurface;
    goto LABEL_53;
  }
  v25 = a2 - 1;
  if ( v25 )
  {
    if ( v25 != 1 )
      goto LABEL_46;
    HwndUpdateIds = GreGetDxSharedSurface(*v18, v35, &v33, &v32, &v30, &v34);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_36:
      LODWORD(Src[0]) = v30;
      goto LABEL_46;
    }
    if ( HwndUpdateIds >= 0 )
      goto LABEL_36;
LABEL_38:
    v13 = HwndUpdateIds;
    goto LABEL_53;
  }
  HwndUpdateIds = GreGetHwndUpdateIds(*v18);
  DxSharedSurface = HwndUpdateIds;
  if ( HwndUpdateIds < 0 )
    goto LABEL_38;
LABEL_46:
  if ( DxSharedSurface >= 0 )
  {
    v10 = 1;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    memmove(a3, Src, v9);
    v12 = MmUserProbeAddress;
    v28 = (_DWORD *)v37;
    if ( v37 >= MmUserProbeAddress )
      v28 = (_DWORD *)MmUserProbeAddress;
    *v28 = v22;
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
