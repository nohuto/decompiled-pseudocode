/*
 * XREFs of NtUserHwndQueryRedirectionInfo @ 0x1C022FE30
 * Callers:
 *     <none>
 * Callees:
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     GreGetDxSharedSurface @ 0x1C012258C (GreGetDxSharedSurface.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GreGetHwndUpdateIds @ 0x1C026D03C (GreGetHwndUpdateIds.c)
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
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  HWND *v30; // r15
  _DWORD *v31; // rax
  unsigned int v33; // [rsp+30h] [rbp-C8h] BYREF
  int v34; // [rsp+34h] [rbp-C4h]
  unsigned int v35; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-A8h] BYREF
  struct tagWND *v39; // [rsp+60h] [rbp-98h]
  ULONG64 v40; // [rsp+70h] [rbp-88h]
  _OWORD Src[2]; // [rsp+98h] [rbp-60h] BYREF

  v40 = a4;
  DxSharedSurface = -1073741811;
  v9 = 32LL;
  memset(Src, 0, sizeof(Src));
  v10 = 0;
  v37 = 0LL;
  v38[0] = 0LL;
  v36 = 0LL;
  v35 = 0;
  v33 = 0;
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
  v39 = (struct tagWND *)StyleWindow;
  if ( !StyleWindow || (*(_WORD *)(*(_QWORD *)(StyleWindow + 40) + 42LL) & 0x3FFF) == 0x29D )
    goto LABEL_52;
  v19 = (unsigned int *)a4;
  if ( a4 >= MmUserProbeAddress )
    v19 = (unsigned int *)MmUserProbeAddress;
  v20 = *v19;
  v34 = *v19;
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
      v34 = 16;
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
        v34 = 4;
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
        v34 = 16;
        v12 = MmUserProbeAddress;
        v23 = a3;
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          v23 = (_OWORD *)MmUserProbeAddress;
        Src[0] = *v23;
        v18 = (HWND *)v39;
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
    v34 = 32;
    v12 = MmUserProbeAddress;
    v24 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v24 = (_OWORD *)MmUserProbeAddress;
    Src[0] = *v24;
    Src[1] = v24[1];
    v33 = DWORD1(Src[0]);
    if ( (DWORD1(Src[0]) & 0xFFFFFFFB) != 0 )
      goto LABEL_52;
  }
  if ( !a2 )
  {
    v36 = *(_QWORD *)&Src[1];
    DxSharedSurface = GreGetDxSharedSurface(*v18, v38, &v36, &v35, &v33, &v37);
    if ( DxSharedSurface == -1071775484 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v27, v28, v29);
      v30 = (HWND *)v39;
      DxSharedSurface = RecreateRedirectionBitmap(v39, 0, 0, 0, 1, 0LL);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      if ( DxSharedSurface < 0 )
        goto LABEL_52;
      DxSharedSurface = GreGetDxSharedSurface(*v30, v38, &v36, &v35, &v33, &v37);
    }
    if ( DxSharedSurface >= 0 )
    {
      *(_QWORD *)&Src[0] = __PAIR64__(v33, v35);
      *((_QWORD *)&Src[0] + 1) = v37;
      *(_QWORD *)&Src[1] = v36;
      *((_QWORD *)&Src[1] + 1) = v38[0];
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
    HwndUpdateIds = GreGetDxSharedSurface(*v18, v38, &v36, &v35, &v33, &v37);
    DxSharedSurface = HwndUpdateIds;
    if ( HwndUpdateIds == -1073741822 )
    {
      DxSharedSurface = 0;
LABEL_36:
      LODWORD(Src[0]) = v33;
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
    v31 = (_DWORD *)v40;
    if ( v40 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    *v31 = v22;
  }
LABEL_54:
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
