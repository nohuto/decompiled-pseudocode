/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C00B8EC0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C001E8B0 (CheckAccessForIntegrityLevelEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
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
  unsigned __int64 v13; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // r8d
  int v24; // eax
  char v26[4]; // [rsp+50h] [rbp-128h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-124h]
  int v28; // [rsp+58h] [rbp-120h]
  unsigned int v29; // [rsp+5Ch] [rbp-11Ch]
  unsigned int v30; // [rsp+60h] [rbp-118h]
  int v31; // [rsp+64h] [rbp-114h]
  unsigned int v32; // [rsp+68h] [rbp-110h]
  int v33; // [rsp+78h] [rbp-100h]
  unsigned __int64 v34; // [rsp+80h] [rbp-F8h]
  __int64 v35; // [rsp+88h] [rbp-F0h]
  int v36; // [rsp+90h] [rbp-E8h]
  __int64 v37; // [rsp+98h] [rbp-E0h]
  __int64 v38; // [rsp+A0h] [rbp-D8h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v39; // [rsp+B0h] [rbp-C8h]
  __int64 v40; // [rsp+B8h] [rbp-C0h]
  __int64 v41; // [rsp+C0h] [rbp-B8h]
  _BYTE v42[32]; // [rsp+D0h] [rbp-A8h] BYREF
  _QWORD v43[10]; // [rsp+F0h] [rbp-88h] BYREF

  v32 = a3;
  v7 = a1;
  v41 = a5;
  memset(v43, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v43[1]);
  v43[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v43[3]) = 29;
  LOBYTE(v43[6]) = -1;
  v37 = 0xFFFFFFFF00002000uLL;
  v8 = 0LL;
  v38 = 0LL;
  v9 = 0;
  v29 = 0;
  v10 = 0;
  v40 = 0LL;
  v35 = 0LL;
  v31 = 0;
  v36 = 0;
  v33 = -1073741811;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v26, v11, v12);
  if ( !gbVideoInitialized )
  {
LABEL_2:
    v16 = -1073741823;
    goto LABEL_72;
  }
  v17 = (unsigned __int64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL);
    v18 = *(_DWORD *)(v13 + 24) & 0x10;
  }
  else
  {
    v18 = 0;
  }
  if ( v18 || !CheckAccessForIntegrityLevelEx(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v37, 0) )
  {
    v16 = -1073741790;
    goto LABEL_69;
  }
  if ( (unsigned int)v7 > 0x400 )
  {
    v16 = -1073741811;
    goto LABEL_72;
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
    v30 = 0;
    v21 = 0;
    v13 = a2;
    v15 = 200LL;
    while ( 1 )
    {
      v34 = v13;
      v27 = v21;
      if ( v21 >= (unsigned int)v7 )
        break;
      if ( *(__int64 *)v13 < 0 )
        v30 = ++v20;
      ++v21;
      v13 += 200LL;
    }
    if ( v20 )
    {
      v22 = Win32AllocPoolWithQuota(200LL * v20, 0x63447355u);
      v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v22;
      v38 = v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v22, v42, Win32FreePool);
      v15 = 200LL;
    }
    v14 = v8;
    v39 = v8;
    v9 = 0;
    v29 = 0;
    v17 = 0LL;
    while ( 1 )
    {
      v27 = v17;
      v34 = a2;
      if ( (unsigned int)v17 >= (unsigned int)v7 )
        break;
      if ( *(__int64 *)a2 < 0 )
      {
        if ( v9 >= v20 )
        {
          v16 = -1073741811;
          v28 = -1073741811;
          goto LABEL_69;
        }
        *(_OWORD *)v14 = *(_OWORD *)a2;
        *((_OWORD *)v14 + 1) = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v14 + 2) = *(_OWORD *)(a2 + 32);
        *((_OWORD *)v14 + 3) = *(_OWORD *)(a2 + 48);
        *((_OWORD *)v14 + 4) = *(_OWORD *)(a2 + 64);
        *((_OWORD *)v14 + 5) = *(_OWORD *)(a2 + 80);
        *((_OWORD *)v14 + 6) = *(_OWORD *)(a2 + 96);
        v13 = (unsigned __int64)v14 + 128;
        *((_OWORD *)v14 + 7) = *(_OWORD *)(a2 + 112);
        *((_OWORD *)v14 + 8) = *(_OWORD *)(a2 + 128);
        *((_OWORD *)v14 + 9) = *(_OWORD *)(a2 + 144);
        *((_OWORD *)v14 + 10) = *(_OWORD *)(a2 + 160);
        *((_OWORD *)v14 + 11) = *(_OWORD *)(a2 + 176);
        *((_QWORD *)v14 + 24) = *(_QWORD *)(a2 + 192);
        if ( *(__int64 *)v14 >= 0 )
        {
          v16 = -1073741790;
          v28 = -1073741790;
          goto LABEL_69;
        }
        v29 = ++v9;
        v14 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v14 + 200);
        v39 = v14;
      }
      v17 = (unsigned int)(v17 + 1);
      a2 += 200LL;
    }
    if ( v9 != v20 )
    {
      v16 = -1073741811;
      v28 = -1073741811;
      goto LABEL_69;
    }
    v10 = HIDWORD(v40);
  }
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = a4 + 12;
    if ( a4 + 12 > MmUserProbeAddress || v13 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v35 = *(_QWORD *)a4;
    v23 = *(_DWORD *)(a4 + 8);
    v36 = v23;
    v10 = HIDWORD(v35);
  }
  else
  {
    v23 = v31;
  }
  if ( gfSwitchInProgress )
    goto LABEL_2;
  if ( gProtocolType )
  {
    v16 = -1073741790;
    goto LABEL_72;
  }
  if ( a4 )
  {
    v13 = *((unsigned int *)gpGdiSharedMemory + 393252);
    if ( *((_DWORD *)gpGdiSharedMemory + 393256) != v23
      || (_DWORD)v13 != (_DWORD)v35
      || *((_DWORD *)gpGdiSharedMemory + 393258) != v10 )
    {
      v16 = -1071774921;
      goto LABEL_72;
    }
  }
  v24 = xxxUserSetDisplayConfig(v9, v8, v32, 0, 0LL, 1, v41, 0LL, 0LL, (__int64)v43);
  v16 = v24;
  switch ( v24 )
  {
    case -2147483643:
      v16 = -1073741789;
      goto LABEL_72;
    case -1073741789:
      goto LABEL_72;
    case -1071774970:
      v16 = -2147023286;
      goto LABEL_72;
  }
  if ( v24 < 0
    && v24 != -1073741811
    && v24 != -1073741801
    && v24 != -1073741790
    && v24 != -1073741776
    && v24 != -1073741637
    && (v24 <= -1073741586 || v24 > -1073741574) )
  {
    v16 = -1073741823;
  }
LABEL_69:
  if ( v16 >= 0 && (int)IsAutoRotationUpdateRegistrySupported(v13, v17, v14, v15) >= 0 )
    AutoRotationUpdateRegistry();
LABEL_72:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock(v42);
  UserSessionSwitchLeaveCrit(v13);
  return (unsigned int)v16;
}
