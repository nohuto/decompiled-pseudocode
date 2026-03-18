/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C012DDE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003FF20 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     UserGetHDevFromMonitor @ 0x1C004FC90 (UserGetHDevFromMonitor.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  unsigned int v6; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v9; // rsi
  int v10; // eax
  struct _LUID *v11; // rax
  int v12; // ebx
  bool v13; // sf
  const void *v14; // rbx
  int v15; // r13d
  int v16; // r15d
  int v17; // r14d
  size_t v18; // r12
  void *v19; // rdi
  struct _LUID *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-98h] BYREF
  __int128 v22; // [rsp+38h] [rbp-90h]
  __int128 v23; // [rsp+48h] [rbp-80h]
  _DWORD v24[4]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v25; // [rsp+68h] [rbp-60h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  void *v27; // [rsp+80h] [rbp-48h]
  int v28; // [rsp+88h] [rbp-40h] BYREF
  __int64 v29; // [rsp+8Ch] [rbp-3Ch]
  int v30; // [rsp+94h] [rbp-34h]

  EnterSharedCrit(0, 1);
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported() && !gbOSTestSigningEnabled )
  {
    v6 = -1073741822;
LABEL_6:
    UserSessionSwitchLeaveCrit(v5, v4);
    return v6;
  }
  if ( !a1 )
  {
LABEL_5:
    v6 = -1073741811;
    goto LABEL_6;
  }
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v22 = *(_OWORD *)a1;
  *(_QWORD *)&v23 = *(_QWORD *)(a1 + 16);
  HDevFromMonitor = UserGetHDevFromMonitor(v22);
  v9 = HDevFromMonitor;
  if ( !HDevFromMonitor )
    goto LABEL_10;
  v21 = HDevFromMonitor;
  v10 = *(_DWORD *)(HDevFromMonitor + 40);
  if ( (v10 & 1) == 0
    || (v4 = 1024LL, (v10 & 0x400) != 0)
    || (v10 & 0x20000) != 0
    || !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21) )
  {
    v12 = -1073741811;
  }
  else
  {
    v29 = *((_QWORD *)&v22 + 1);
    v28 = *(_DWORD *)(*(_QWORD *)(v9 + 2576) + 256LL);
    v30 = v23 & 1;
    if ( a2 )
    {
      v5 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (__int128 *)MmUserProbeAddress;
      v22 = *a2;
      v23 = a2[1];
      if ( (_DWORD)v22 != 1 || (v14 = (const void *)*((_QWORD *)&v23 + 1)) == 0LL )
      {
LABEL_10:
        UserSessionSwitchLeaveCrit(v5, v4);
        return 3221225485LL;
      }
      v15 = DWORD1(v22);
      if ( DWORD1(v22) > 0x100 )
        goto LABEL_5;
      v16 = DWORD2(v22);
      if ( DWORD2(v22) > 0x100 )
        goto LABEL_5;
      v17 = HIDWORD(v22);
      if ( HIDWORD(v22) > (unsigned int)v4 )
        goto LABEL_5;
      v18 = (unsigned int)(DWORD2(v22) * HIDWORD(v22));
      v19 = PALLOCMEM2(v18, 0x706D7447u, 1);
      v27 = v19;
      if ( !v19 )
      {
        v6 = -1073741823;
        goto LABEL_6;
      }
      if ( (unsigned __int64)v14 >= MmUserProbeAddress )
        v14 = (const void *)MmUserProbeAddress;
      memmove(v19, v14, v18);
      v25 = 0LL;
      v26 = 0LL;
      v24[0] = 2;
      v24[1] = v15;
      v24[2] = v16;
      v24[3] = v17;
      LODWORD(v25) = *(_DWORD *)(*(_QWORD *)(v9 + 2576) + 256LL);
      *((_QWORD *)&v25 + 1) = v19;
      v26 = v23;
      v20 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21);
      v12 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C0212298)(v20, &v28, v24, 0LL);
      Win32FreePool((__int64)v19);
      v13 = v12 < 0;
    }
    else
    {
      v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v21);
      v12 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C0212290)(v11, &v28, 0LL);
      v13 = v12 < 0;
    }
    if ( v13 )
      v12 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return (unsigned int)v12;
}
