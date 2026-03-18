/*
 * XREFs of NtGdiSwapBuffers @ 0x1C029E800
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C025F28C (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C025F3FC (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0289C70 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  __int64 v3; // r9
  struct EWNDOBJ *v4; // r15
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 DeviceHdev; // rdx
  __int64 v10; // r8
  unsigned int (__fastcall *v11)(__int64, struct EWNDOBJ *); // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-69h] BYREF
  struct _RECTL v15; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v16[104]; // [rsp+68h] [rbp-39h] BYREF
  struct EWNDOBJ *v17; // [rsp+D0h] [rbp+2Fh]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v1 = 0;
  if ( !v13[0] || !*(_QWORD *)(v13[0] + 496LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_21;
  }
  v2 = 1;
  if ( *(_DWORD *)(v13[0] + 32LL) == 1 )
  {
LABEL_21:
    v1 = v2;
    goto LABEL_22;
  }
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v16, (struct XDCOBJ *)v13);
  if ( (v16[24] & 1) != 0 )
  {
    if ( v17 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v17 + 4)) )
        goto LABEL_18;
      ++*(_DWORD *)(*(_QWORD *)(v13[0] + 496LL) + 92LL);
      v4 = v17;
      v5 = *(_QWORD *)(v13[0] + 48LL);
      v6 = (*(_QWORD *)(v13[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v13[0] + 496LL) != 0LL);
      v7 = v6;
      if ( (*(_DWORD *)(v5 + 40) & 0x20000) != 0 )
      {
        v8 = *(_QWORD **)(v13[0] + 48LL);
        v15 = *(struct _RECTL *)(v13[0] + 1032LL);
        DeviceHdev = hdevFindDeviceHdev(v8, &v15, v17, v3);
        v7 = v6;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v13[0] + 496LL) == *(_QWORD *)(v5 + 2552) )
          {
            v10 = *(_QWORD *)(DeviceHdev + 2552);
            if ( v10 )
              v7 = v10 + 24;
            else
              v7 = 0LL;
          }
          v5 = DeviceHdev;
        }
      }
      v11 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *))(v5 + 3136);
      if ( v11 )
      {
        if ( v11(v7, v4) )
LABEL_18:
          v1 = 1;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
  }
  else
  {
    LOBYTE(v1) = (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v13) != 0;
  }
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v16);
LABEL_22:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v14);
  return v1;
}
