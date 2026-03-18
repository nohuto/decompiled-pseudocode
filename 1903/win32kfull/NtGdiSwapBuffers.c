/*
 * XREFs of NtGdiSwapBuffers @ 0x1C02B5450
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0278944 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0278AB8 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029FF20 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiSwapBuffers(HDC a1)
{
  __int64 v1; // rax
  BOOL v2; // ebx
  struct EWNDOBJ *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v8)(__int64, struct EWNDOBJ *); // rax
  _QWORD v10[2]; // [rsp+28h] [rbp-29h] BYREF
  struct _RECTL v11; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v12[80]; // [rsp+48h] [rbp-9h] BYREF
  struct EWNDOBJ *v13; // [rsp+98h] [rbp+47h]

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v1 = v10[0];
  if ( !v10[0] || !*(_QWORD *)(v10[0] + 496LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_21;
  }
  v2 = 1;
  if ( *(_DWORD *)(v10[0] + 32LL) == 1 )
    goto LABEL_22;
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v12, (struct XDCOBJ *)v10);
  if ( (v12[24] & 1) != 0 )
  {
    if ( v13 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v13 + 4)) )
        goto LABEL_19;
      ++*(_DWORD *)(*(_QWORD *)(v10[0] + 496LL) + 92LL);
      v3 = v13;
      v4 = *(_QWORD *)(v10[0] + 48LL);
      v5 = (*(_QWORD *)(v10[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v10[0] + 496LL) != 0LL);
      v6 = v5;
      if ( (*(_DWORD *)(v4 + 40) & 0x20000) != 0 )
      {
        v11 = *(struct _RECTL *)(v10[0] + 1032LL);
        DeviceHdev = hdevFindDeviceHdev((_QWORD *)v4, &v11, v13);
        v6 = v5;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v10[0] + 496LL) == *(_QWORD *)(v4 + 2552) )
          {
            v6 = *(_QWORD *)(DeviceHdev + 2552);
            if ( v6 )
              v6 += 24LL;
          }
          else
          {
            v6 = v5;
          }
          v4 = DeviceHdev;
        }
      }
      v8 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *))(v4 + 3136);
      if ( v8 )
      {
        if ( v8(v6, v3) )
          goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v2 = 0;
  }
  else
  {
    v2 = XDCOBJ::bFullScreen((XDCOBJ *)v10) != 0;
  }
LABEL_19:
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v12);
LABEL_21:
  v1 = v10[0];
LABEL_22:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v2;
}
