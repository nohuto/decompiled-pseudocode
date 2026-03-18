/*
 * XREFs of NtUserSetDisplayConfig @ 0x1C011BCD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C002C1F4 (CheckAccessEx.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062520 (xxxUserSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C00628E0 (LogDiagSDC.c)
 *     DrvSampleDisplayState @ 0x1C00A4330 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall NtUserSetDisplayConfig(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  signed int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 v25; // [rsp+50h] [rbp-148h]
  unsigned int v26; // [rsp+64h] [rbp-134h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v27; // [rsp+68h] [rbp-130h]
  __int64 v28; // [rsp+70h] [rbp-128h]
  int v29; // [rsp+78h] [rbp-120h]
  __int64 v30; // [rsp+A8h] [rbp-F0h] BYREF
  int v31; // [rsp+B0h] [rbp-E8h]
  int v32[4]; // [rsp+B8h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-D0h]
  __int64 v34; // [rsp+D0h] [rbp-C8h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v35; // [rsp+D8h] [rbp-C0h]
  __int64 v36; // [rsp+E0h] [rbp-B8h]
  _QWORD v37[5]; // [rsp+E8h] [rbp-B0h] BYREF
  _QWORD v38[10]; // [rsp+110h] [rbp-88h] BYREF

  v8 = a1;
  v9 = a5;
  v36 = a5;
  memset(v38, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v38[1]);
  v33 = MEMORY[0xFFFFF78000000014];
  v38[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v38[3]) = 29;
  LOBYTE(v38[6]) = -1;
  v32[0] = 0x2000;
  v32[1] = -1;
  v27 = 0LL;
  memset(v37, 0, 24);
  v26 = 0;
  v28 = 0LL;
  v29 = 0;
  v34 = MEMORY[0xFFFFF78000000320];
  v25 = v34 * KeQueryTimeIncrement();
  EnterCrit(0, 1);
  if ( !gbVideoInitialized )
  {
    v13 = 0x80000000;
LABEL_3:
    v14 = -1073741823;
LABEL_4:
    v15 = v25;
LABEL_74:
    LogDiagSDC(v26, (__int64)v27, a3, v14, 0, v13, v15, 0);
    goto LABEL_75;
  }
  v16 = (__int64)gptiCurrent;
  if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 760LL);
    v17 = *(_DWORD *)(v10 + 24) & 0x10;
  }
  else
  {
    v17 = 0;
  }
  if ( v17 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 52) + 872LL), v32, 0) )
  {
    v14 = -1073741790;
    v13 = -2147483647;
    goto LABEL_72;
  }
  if ( (unsigned int)v8 > 0x400 )
  {
    v14 = -1073741811;
    v13 = -2147483646;
    goto LABEL_4;
  }
  v18 = 0;
  if ( (_DWORD)v8 )
  {
    v19 = 200 * v8;
    if ( 200 * v8 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v19 + a2 > MmUserProbeAddress || v19 + a2 < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = 0;
    v21 = 0;
    v10 = a2;
    v12 = 200LL;
    while ( v21 < (unsigned int)v8 )
    {
      if ( *(__int64 *)v10 < 0 )
        ++v20;
      ++v21;
      v10 += 200LL;
    }
    if ( v20 )
    {
      v22 = Win32AllocPoolWithQuota(200LL * v20, 0x63447355u);
      v27 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v22;
      if ( !v22 )
        ExRaiseStatus(-1073741801);
      PushW32ThreadLock(v22, v37, Win32FreePool);
      v12 = 200LL;
    }
    v11 = v27;
    v35 = v27;
    v16 = 0LL;
    while ( (unsigned int)v16 < (unsigned int)v8 )
    {
      if ( *(__int64 *)a2 < 0 )
      {
        if ( v18 >= v20 )
        {
          v14 = -1073741811;
          v13 = -2147483645;
          v15 = v25;
          goto LABEL_73;
        }
        *(_OWORD *)v11 = *(_OWORD *)a2;
        *((_OWORD *)v11 + 1) = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v11 + 2) = *(_OWORD *)(a2 + 32);
        *((_OWORD *)v11 + 3) = *(_OWORD *)(a2 + 48);
        *((_OWORD *)v11 + 4) = *(_OWORD *)(a2 + 64);
        *((_OWORD *)v11 + 5) = *(_OWORD *)(a2 + 80);
        *((_OWORD *)v11 + 6) = *(_OWORD *)(a2 + 96);
        v10 = (__int64)v11 + 128;
        *((_OWORD *)v11 + 7) = *(_OWORD *)(a2 + 112);
        *((_OWORD *)v11 + 8) = *(_OWORD *)(a2 + 128);
        *((_OWORD *)v11 + 9) = *(_OWORD *)(a2 + 144);
        *((_OWORD *)v11 + 10) = *(_OWORD *)(a2 + 160);
        *((_OWORD *)v11 + 11) = *(_OWORD *)(a2 + 176);
        *((_QWORD *)v11 + 24) = *(_QWORD *)(a2 + 192);
        if ( *(__int64 *)v11 >= 0 )
        {
          v14 = -1073741790;
          v13 = -2147483644;
          v15 = v25;
          goto LABEL_73;
        }
        ++v18;
        v11 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v11 + 200);
        v35 = v11;
      }
      v16 = (unsigned int)(v16 + 1);
      a2 += 200LL;
    }
    if ( v18 != v20 )
    {
      v14 = -1073741811;
      v13 = -2147483645;
      v15 = v25;
      goto LABEL_73;
    }
    v9 = v36;
  }
  v26 = v18;
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v28 = *(_QWORD *)a4;
    v29 = *(_DWORD *)(a4 + 8);
  }
  if ( gfSwitchInProgress )
  {
    v13 = -2147483643;
    goto LABEL_3;
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v14 = -1073741790;
    v13 = -2147483642;
    goto LABEL_4;
  }
  if ( a4 )
  {
    v30 = 0LL;
    v31 = 0;
    DrvSampleDisplayState(&v30);
    if ( v31 != v29 || v30 != v28 )
    {
      v14 = -1071774921;
      v13 = -2147483641;
      goto LABEL_4;
    }
  }
  v13 = 18;
  v23 = xxxUserSetDisplayConfig(v18, v27, a3, 0, 0LL, 1, v9, 0LL, 0LL, (__int64)v38);
  v14 = v23;
  if ( v23 == -2147483643 )
  {
    v14 = -1073741789;
    goto LABEL_72;
  }
  if ( v23 == -1073741789 )
  {
LABEL_72:
    v15 = v25;
    goto LABEL_73;
  }
  if ( v23 != -1071774970 )
  {
    if ( (a3 & 0x10000) == 0
      && v23 < 0
      && v23 != -1073741811
      && v23 != -1073741801
      && v23 != -1073741790
      && v23 != -1073741776
      && v23 != -1073741637
      && (v23 <= -1073741586 || v23 > -1073741574) )
    {
      v14 = -1073741823;
    }
    goto LABEL_72;
  }
  v15 = v25;
  if ( (a3 & 0x10000) == 0 )
    v14 = -2147023286;
LABEL_73:
  if ( v13 != 18 )
    goto LABEL_74;
LABEL_75:
  if ( v14 >= 0 && (int)IsAutoRotationUpdateRegistrySupported(v10, v16, v11, v12) >= 0 )
    AutoRotationUpdateRegistry();
  if ( v27 )
    PopAndFreeAlwaysW32ThreadLock(v37);
  UserSessionSwitchLeaveCrit(v10, v16);
  return (unsigned int)v14;
}
