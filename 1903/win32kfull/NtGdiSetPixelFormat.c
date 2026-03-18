/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C02B5200
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01EA2BC (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02839B4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C029FF20 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02B4F00 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  ULONG v10; // ecx
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v15)(__int64, _QWORD, __int64); // rax
  ULONG v16; // ecx
  _QWORD v18[2]; // [rsp+20h] [rbp-39h] BYREF
  struct _RECTL v19; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp+7h] BYREF
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  __int16 v24; // [rsp+70h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, (HDC)a1);
  if ( !v18[0] || !*(_QWORD *)(v18[0] + 496LL) )
  {
    v16 = 6;
    goto LABEL_32;
  }
  v4 = XDCOBJ::ipfdDevMax((XDCOBJ *)v18);
  v8 = 1;
  if ( a2 < 1 || a2 > v4 )
  {
    v16 = 87;
LABEL_32:
    EngSetLastError(v16);
    v8 = 0;
    goto LABEL_33;
  }
  UserEnterUserCritSec(v6, v5, v7);
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v18, 0);
  v9 = v18[0];
  if ( (*(_DWORD *)(v18[0] + 36LL) & 1) == 0 )
  {
    v11 = 0LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)UserGetHwnd(a1, &v26, &v25) )
  {
    v10 = 2002;
LABEL_11:
    EngSetLastError(v10);
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  if ( !v25 )
  {
    v9 = v18[0];
    v11 = v26;
LABEL_18:
    v12 = *(_QWORD *)(v9 + 48);
    v13 = (*(_QWORD *)(v9 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 496) != 0LL);
    if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
    {
      v19 = *(struct _RECTL *)(v9 + 1032);
      DeviceHdev = hdevFindDeviceHdev((_QWORD *)v12, &v19, 0LL);
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(v18[0] + 496LL) == *(_QWORD *)(v12 + 2552) )
        {
          v13 = *(_QWORD *)(DeviceHdev + 2552);
          if ( v13 )
            v13 += 24LL;
        }
        v12 = DeviceHdev;
      }
    }
    if ( *(_QWORD *)(v12 + 3136) )
    {
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200000) != 0 )
      {
        v15 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v12 + 3120);
        if ( v15 )
        {
          if ( v15(v13, (unsigned int)a2, v11) )
          {
            if ( gbWndobjUpdate )
            {
              gbWndobjUpdate = 0;
              vForceClientRgnUpdate();
            }
            goto LABEL_13;
          }
        }
      }
    }
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v25 + 188) != a2 )
  {
    v10 = 2000;
    goto LABEL_11;
  }
LABEL_13:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
  if ( v21 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v21);
  UserLeaveUserCritSec();
LABEL_33:
  if ( v18[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return v8;
}
