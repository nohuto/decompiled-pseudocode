/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00FECE0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetHDevFromMonitor @ 0x1C00135D8 (UserGetHDevFromMonitor.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003F160 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _NtHWCursorUpdatePointer_::_2_::UserCritShared::UserCritShared @ 0x1C00AB34C (_NtHWCursorUpdatePointer_--_2_--UserCritShared--UserCritShared.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int128 *v3; // rdi
  __int64 HDevFromMonitor; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edx
  int v10; // r8d
  struct _LUID *v11; // rax
  int v12; // ebx
  bool v13; // sf
  const void *v14; // rdi
  int v15; // r13d
  int v16; // r15d
  int v17; // r14d
  size_t v18; // r12
  void *v19; // rsi
  unsigned int v20; // edi
  struct _LUID *v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-98h]
  __int128 v25; // [rsp+50h] [rbp-88h]
  void *v26; // [rsp+60h] [rbp-78h]
  _DWORD v27[6]; // [rsp+68h] [rbp-70h] BYREF
  void *v28; // [rsp+80h] [rbp-58h]
  __int64 v29; // [rsp+88h] [rbp-50h]
  int v30; // [rsp+90h] [rbp-48h] BYREF
  __int64 v31; // [rsp+94h] [rbp-44h]
  int v32; // [rsp+9Ch] [rbp-3Ch]

  v3 = (__int128 *)a2;
  NtHWCursorUpdatePointer_::_2_::UserCritShared::UserCritShared((__int64)v22, a2, a3);
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported() && !gbOSTestSigningEnabled )
  {
    UserSessionSwitchLeaveCrit();
    return 3221225474LL;
  }
  if ( a1 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v24 = *(_OWORD *)a1;
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 16);
    HDevFromMonitor = UserGetHDevFromMonitor();
    v7 = HDevFromMonitor;
    if ( HDevFromMonitor )
    {
      v23 = HDevFromMonitor;
      v8 = *(_DWORD *)(HDevFromMonitor + 40);
      if ( (v8 & 1) != 0
        && (v8 & 0x400) == 0
        && (v8 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23) )
      {
        v31 = *((_QWORD *)&v24 + 1);
        v30 = *(_DWORD *)(*(_QWORD *)(v7 + 2576) + 256LL);
        v32 = v10 & v25;
        if ( !v3 )
        {
          v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
          v12 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C01CDD08)(v11, &v30, 0LL);
          v13 = v12 < 0;
LABEL_14:
          if ( v13 )
            v12 = -1073741823;
          goto LABEL_32;
        }
        if ( (unsigned __int64)v3 >= MmUserProbeAddress )
          v3 = (__int128 *)MmUserProbeAddress;
        v24 = *v3;
        v25 = v3[1];
        if ( (_DWORD)v24 == v10
          && (v14 = (const void *)*((_QWORD *)&v25 + 1)) != 0LL
          && (v15 = DWORD1(v24), DWORD1(v24) <= 0x100)
          && (v16 = DWORD2(v24), DWORD2(v24) <= 0x100)
          && (v17 = HIDWORD(v24), HIDWORD(v24) <= v9) )
        {
          v18 = (unsigned int)(DWORD2(v24) * HIDWORD(v24));
          v19 = PALLOCMEM2(v18, 1886221383LL, v10);
          v26 = v19;
          if ( v19 )
          {
            if ( (unsigned __int64)v14 >= MmUserProbeAddress )
              v14 = (const void *)MmUserProbeAddress;
            memmove(v19, v14, v18);
            v27[0] = 2;
            v27[1] = v15;
            v27[2] = v16;
            v27[3] = v17;
            v27[4] = *(_DWORD *)(*(_QWORD *)(v7 + 2576) + 256LL);
            v28 = v19;
            v29 = v25;
            v21 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
            v12 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C01CDD10)(
                    v21,
                    &v30,
                    v27,
                    0LL);
            Win32FreePool((__int64)v19);
            v13 = v12 < 0;
            goto LABEL_14;
          }
          v20 = -1073741823;
        }
        else
        {
          v20 = -1073741811;
        }
        UserSessionSwitchLeaveCrit();
        return v20;
      }
    }
  }
  v12 = -1073741811;
LABEL_32:
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v12;
}
