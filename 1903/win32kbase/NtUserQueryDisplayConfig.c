/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C004DAD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002A0D0 (EnterSharedCrit.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     DrvQueryDisplayConfig @ 0x1C00500E0 (DrvQueryDisplayConfig.c)
 *     DrvSampleDisplayState @ 0x1C00A4330 (DrvSampleDisplayState.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _DWORD *Address)
{
  const void *v9; // rsi
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  void *v13; // rax
  int v14; // r13d
  __int64 v15; // rax
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-98h] BYREF
  int v21; // [rsp+24h] [rbp-94h]
  int v22; // [rsp+28h] [rbp-90h] BYREF
  const void *v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  int v25; // [rsp+50h] [rbp-68h]
  _BYTE v26[48]; // [rsp+60h] [rbp-58h] BYREF

  v9 = 0LL;
  v23 = 0LL;
  memset(v26, 0, 24);
  v20 = 0;
  v22 = -1;
  v24 = 0LL;
  v25 = 0;
  EnterSharedCrit(0, 1);
  if ( !gbVideoInitialized )
  {
    v16 = -1073741823;
    goto LABEL_29;
  }
  if ( (a1 & 0xFFFFFFC8) != 0 || (v11 = a1 & 7, (((_DWORD)v11 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v11 == 3 )
  {
    v16 = -1073741811;
    goto LABEL_29;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = MmUserProbeAddress;
  v10 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  v20 = *a2;
  if ( !v20 )
  {
    v16 = -1073741811;
    v21 = -1073741811;
    v9 = v23;
    goto LABEL_29;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
  ProbeForWrite(a3, 200LL * v20, CurrentProcessWow64Process != 0 ? 1 : 4);
  v13 = Win32AllocPoolWithQuotaZInit(200LL * v20, 0x63447355u);
  v9 = v13;
  v23 = v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v13, v26, Win32FreePool);
  v14 = a1 & 4;
  if ( (a1 & 4) != 0 )
  {
    ProbeForWrite(a4, 4uLL, 4u);
  }
  else if ( a4 )
  {
    v16 = -1073741811;
    v21 = -1073741811;
    goto LABEL_29;
  }
  if ( Address )
  {
    v15 = PsGetCurrentProcessWow64Process(v11);
    ProbeForWrite(Address, 0xCuLL, v15 != 0 ? 1 : 4);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession(v11, v10) )
  {
    v16 = -1073741790;
    goto LABEL_29;
  }
  if ( Address )
    DrvSampleDisplayState(&v24);
  v17 = DrvQueryDisplayConfig(a1, &v20, v9, &v22);
  v16 = v17;
  v21 = v17;
  if ( v17 == -2147483643 )
  {
    v16 = -1073741789;
LABEL_24:
    v21 = v16;
    goto LABEL_25;
  }
  if ( v17 != -1073741789 )
  {
    if ( v17 < 0
      && v17 != -1073741811
      && v17 != -1073741801
      && v17 != -1073741790
      && v17 != -1073741776
      && v17 != -1073741637
      && (v17 <= -1073741586 || v17 > -1073741574) )
    {
      v16 = -1073741823;
    }
    goto LABEL_24;
  }
LABEL_25:
  v18 = v20;
  memmove((void *)a3, v9, 200LL * v20);
  *a2 = v18;
  if ( v14 )
    *a4 = v22;
  if ( Address )
  {
    *(_QWORD *)Address = v24;
    Address[2] = v25;
  }
LABEL_29:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v26);
  UserSessionSwitchLeaveCrit(v11, (__int64)v10);
  return v16;
}
