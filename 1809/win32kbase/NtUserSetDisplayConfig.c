/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00F1220
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     xxxUserSetDisplayConfig @ 0x1C0049150 (xxxUserSetDisplayConfig.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0069D7C (CheckAccessForIntegrityLevelEx.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v7; // r13
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // r12
  unsigned int v9; // r14d
  int v10; // rbx^4
  __int64 v11; // rdx
  __int64 v12; // r8
  char *v13; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // r9d
  unsigned int v24; // esi
  int v25; // eax
  int v26; // esi
  char v28[4]; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-114h]
  int v30; // [rsp+58h] [rbp-110h]
  unsigned int v31; // [rsp+5Ch] [rbp-10Ch]
  unsigned int v32; // [rsp+60h] [rbp-108h]
  int v33; // [rsp+64h] [rbp-104h]
  unsigned int v34; // [rsp+68h] [rbp-100h]
  int v35; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v36; // [rsp+80h] [rbp-E8h]
  __int64 v37; // [rsp+88h] [rbp-E0h]
  int v38; // [rsp+90h] [rbp-D8h]
  __int64 v39; // [rsp+98h] [rbp-D0h]
  __int64 v40; // [rsp+A0h] [rbp-C8h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v41; // [rsp+B0h] [rbp-B8h]
  __int64 v42; // [rsp+B8h] [rbp-B0h]
  __int64 v43; // [rsp+C0h] [rbp-A8h]
  _BYTE v44[32]; // [rsp+D0h] [rbp-98h] BYREF
  _QWORD v45[10]; // [rsp+F0h] [rbp-78h] BYREF

  v34 = a3;
  v7 = a1;
  v43 = a5;
  memset(v45, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v45[1]);
  v45[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v45[3]) = 29;
  LOBYTE(v45[6]) = -1;
  v39 = 0xFFFFFFFF00002000uLL;
  v8 = 0LL;
  v40 = 0LL;
  v9 = 0;
  v31 = 0;
  v10 = 0;
  v42 = 0LL;
  v37 = 0LL;
  v33 = 0;
  v38 = 0;
  v35 = -1073741811;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v28, v11, v12);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v16 = -1073741823;
    goto LABEL_73;
  }
  v17 = (unsigned __int64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
  {
    v13 = *(char **)(*((_QWORD *)gptiCurrent + 53) + 768LL);
    v18 = *((_DWORD *)v13 + 6) & 0x10;
  }
  else
  {
    v18 = 0;
  }
  if ( v18 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v39, 0) )
  {
    v16 = -1073741790;
    goto LABEL_70;
  }
  if ( (unsigned int)v7 > 0x400 )
  {
    v16 = -1073741811;
    goto LABEL_73;
  }
  if ( (_DWORD)v7 )
  {
    v19 = 200 * v7;
    if ( 200 * v7 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 + a2 > MmUserProbeAddress || v19 + a2 < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = 0;
    v32 = 0;
    v21 = 0;
    v13 = (char *)a2;
    v15 = 200LL;
    while ( 1 )
    {
      v36 = (unsigned __int64)v13;
      v29 = v21;
      if ( v21 >= (unsigned int)v7 )
        break;
      if ( *(__int64 *)v13 < 0 )
        v32 = ++v20;
      ++v21;
      v13 += 200;
    }
    if ( v20 )
    {
      v22 = Win32AllocPoolWithQuota(200LL * v20, 0x63447355u);
      v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v22;
      v40 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v22, v44, Win32FreePool);
      v15 = 200LL;
    }
    v14 = v8;
    v41 = v8;
    v9 = 0;
    v31 = 0;
    v17 = 0LL;
    while ( 1 )
    {
      v29 = v17;
      v36 = a2;
      if ( (unsigned int)v17 >= (unsigned int)v7 )
        break;
      if ( *(__int64 *)a2 < 0 )
      {
        if ( v9 >= v20 )
        {
          v16 = -1073741811;
          v30 = -1073741811;
          goto LABEL_70;
        }
        *(_OWORD *)v14 = *(_OWORD *)a2;
        *((_OWORD *)v14 + 1) = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v14 + 2) = *(_OWORD *)(a2 + 32);
        *((_OWORD *)v14 + 3) = *(_OWORD *)(a2 + 48);
        *((_OWORD *)v14 + 4) = *(_OWORD *)(a2 + 64);
        *((_OWORD *)v14 + 5) = *(_OWORD *)(a2 + 80);
        *((_OWORD *)v14 + 6) = *(_OWORD *)(a2 + 96);
        v13 = (char *)v14 + 128;
        *((_OWORD *)v14 + 7) = *(_OWORD *)(a2 + 112);
        *((_OWORD *)v14 + 8) = *(_OWORD *)(a2 + 128);
        *((_OWORD *)v14 + 9) = *(_OWORD *)(a2 + 144);
        *((_OWORD *)v14 + 10) = *(_OWORD *)(a2 + 160);
        *((_OWORD *)v14 + 11) = *(_OWORD *)(a2 + 176);
        *((_QWORD *)v14 + 24) = *(_QWORD *)(a2 + 192);
        if ( *(__int64 *)v14 >= 0 )
        {
          v16 = -1073741790;
          v30 = -1073741790;
          goto LABEL_70;
        }
        v31 = ++v9;
        v14 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v14 + 200);
        v41 = v14;
      }
      v17 = (unsigned int)(v17 + 1);
      a2 += 200LL;
    }
    if ( v9 != v20 )
    {
      v16 = -1073741811;
      v30 = -1073741811;
      goto LABEL_70;
    }
    v10 = HIDWORD(v42);
  }
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v37 = *(_QWORD *)a4;
    v38 = *(_DWORD *)(a4 + 8);
    v10 = HIDWORD(v37);
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
    goto LABEL_2;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v16 = -1073741790;
    goto LABEL_73;
  }
  if ( a4
    && (*((_DWORD *)gpGdiSharedMemory + 393256) != v23
     || *((_DWORD *)gpGdiSharedMemory + 393252) != (_DWORD)v37
     || *((_DWORD *)gpGdiSharedMemory + 393258) != v10) )
  {
    v16 = -1071774921;
    goto LABEL_73;
  }
  v24 = v34;
  v25 = xxxUserSetDisplayConfig(v9, v8, v34, 0, 0LL, 1, v43, 0LL, 0LL, (__int64)v45);
  v16 = v25;
  if ( v25 == -2147483643 )
  {
    v16 = -1073741789;
    goto LABEL_73;
  }
  if ( v25 == -1073741789 )
    goto LABEL_73;
  v26 = v24 & 0x10000;
  if ( v25 == -1071774970 )
  {
    if ( !v26 )
      v16 = -2147023286;
  }
  else if ( !v26
         && v25 < 0
         && v25 != -1073741811
         && v25 != -1073741801
         && v25 != -1073741790
         && v25 != -1073741776
         && v25 != -1073741637
         && (v25 <= -1073741586 || v25 > -1073741574) )
  {
    v16 = -1073741823;
  }
LABEL_70:
  if ( v16 >= 0 && (int)IsAutoRotationUpdateRegistrySupported(v13, v17, v14, v15) >= 0 )
    AutoRotationUpdateRegistry();
LABEL_73:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock(v44);
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v16;
}
