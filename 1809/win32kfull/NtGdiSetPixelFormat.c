/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C029E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01D4AAC (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C026ACB8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0289C70 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C029E390 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  ULONG v11; // ecx
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 DeviceHdev; // rdx
  __int64 v16; // rsi
  unsigned int (__fastcall *v17)(__int64, _QWORD, __int64); // rax
  ULONG v18; // ecx
  _QWORD v20[2]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v21[32]; // [rsp+30h] [rbp-69h] BYREF
  struct _RECTL v22; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v23[32]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v24[80]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v25; // [rsp+110h] [rbp+77h] BYREF
  __int64 v26; // [rsp+118h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v20, (HDC)a1);
  v4 = 0;
  if ( !v20[0] || !*(_QWORD *)(v20[0] + 496LL) )
  {
    v18 = 6;
    goto LABEL_31;
  }
  v5 = XDCOBJ::ipfdDevMax((XDCOBJ *)v20);
  if ( a2 < 1 || a2 > v5 )
  {
    v18 = 87;
LABEL_31:
    EngSetLastError(v18);
    goto LABEL_32;
  }
  UserEnterUserCritSec(v7, v6, v8);
  DCOBJ::DCOBJ((DCOBJ *)v24);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v20, 0);
  v10 = v20[0];
  if ( (*(_DWORD *)(v20[0] + 36LL) & 1) == 0 )
  {
    v12 = 0LL;
    goto LABEL_14;
  }
  if ( (unsigned int)UserGetHwnd(a1, &v26, &v25) )
  {
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 188) != a2 )
      {
        v11 = 2000;
        goto LABEL_11;
      }
LABEL_27:
      v4 = 1;
      goto LABEL_28;
    }
    v10 = v20[0];
    v12 = v26;
LABEL_14:
    v13 = *(_QWORD *)(v10 + 48);
    v14 = (*(_QWORD *)(v10 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v10 + 496) != 0LL);
    if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
    {
      v22 = *(struct _RECTL *)(v10 + 1032);
      DeviceHdev = hdevFindDeviceHdev((_QWORD *)v13, &v22, 0LL, v9);
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(v20[0] + 496LL) == *(_QWORD *)(v13 + 2552) )
        {
          v16 = *(_QWORD *)(DeviceHdev + 2552);
          if ( v16 )
            v14 = v16 + 24;
          else
            v14 = 0LL;
        }
        v13 = DeviceHdev;
      }
    }
    if ( !*(_QWORD *)(v13 + 3136) )
      goto LABEL_28;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 0x200000) == 0 )
      goto LABEL_28;
    v17 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v13 + 3120);
    if ( !v17 || !v17(v14, (unsigned int)a2, v12) )
      goto LABEL_28;
    if ( gbWndobjUpdate )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    goto LABEL_27;
  }
  v11 = 2002;
LABEL_11:
  EngSetLastError(v11);
LABEL_28:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  UserLeaveUserCritSec();
LABEL_32:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v20);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v21);
  return v4;
}
