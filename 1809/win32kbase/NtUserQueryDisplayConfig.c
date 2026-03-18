/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C004A2B0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     DrvQueryDisplayConfig @ 0x1C004A570 (DrvQueryDisplayConfig.c)
 *     ??0EnterLeaveCritShared@@QEAA@XZ @ 0x1C00A8208 (--0EnterLeaveCritShared@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        int *a4,
        _DWORD *Address)
{
  const void *v9; // rsi
  int v10; // ecx
  _DWORD *v11; // rdx
  __int64 CurrentProcessWow64Process; // rax
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  unsigned int v21; // [rsp+20h] [rbp-98h] BYREF
  int v22; // [rsp+24h] [rbp-94h]
  _BYTE v23[4]; // [rsp+28h] [rbp-90h] BYREF
  int v24; // [rsp+2Ch] [rbp-8Ch] BYREF
  const void *v25; // [rsp+30h] [rbp-88h]
  __int64 v26; // [rsp+38h] [rbp-80h]
  int v27; // [rsp+40h] [rbp-78h]
  _BYTE v28[32]; // [rsp+70h] [rbp-48h] BYREF

  v9 = 0LL;
  v25 = 0LL;
  v21 = 0;
  v24 = -1;
  v26 = 0LL;
  v27 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared((EnterLeaveCritShared *)v23);
  if ( !gbVideoInitialized )
  {
    v16 = -1073741823;
    goto LABEL_29;
  }
  if ( (a1 & 0xFFFFFFC8) != 0 || (v10 = a1 & 7, ((v10 - 1) & 0xFFFFFFFC) != 0) || v10 == 3 )
  {
    v16 = -1073741811;
    goto LABEL_29;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  *v11 = *v11;
  v21 = *a2;
  if ( !v21 )
  {
    v16 = -1073741811;
    v22 = -1073741811;
    v9 = v25;
    goto LABEL_29;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
  ProbeForWrite(a3, 200LL * v21, CurrentProcessWow64Process != 0 ? 1 : 4);
  v13 = Win32AllocPoolWithQuotaZInit(200LL * v21, 0x63447355u);
  v9 = v13;
  v25 = v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v13, v28, Win32FreePool);
  v15 = a1 & 4;
  if ( (a1 & 4) != 0 )
  {
    ProbeForWrite(a4, 4uLL, 4u);
  }
  else if ( a4 )
  {
    v16 = -1073741811;
    v22 = -1073741811;
    goto LABEL_29;
  }
  if ( Address )
  {
    v17 = PsGetCurrentProcessWow64Process(v14);
    ProbeForWrite(Address, 0xCuLL, v17 != 0 ? 1 : 4);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v16 = -1073741790;
    goto LABEL_29;
  }
  if ( Address )
  {
    LODWORD(v26) = *((_DWORD *)gpGdiSharedMemory + 393252);
    HIDWORD(v26) = *((_DWORD *)gpGdiSharedMemory + 393258);
    v27 = *((_DWORD *)gpGdiSharedMemory + 393256);
  }
  v18 = DrvQueryDisplayConfig(a1, &v21, v9, &v24);
  v16 = v18;
  v22 = v18;
  if ( v18 == -2147483643 )
  {
    v16 = -1073741789;
LABEL_24:
    v22 = v16;
    goto LABEL_25;
  }
  if ( v18 != -1073741789 )
  {
    if ( v18 < 0
      && v18 != -1073741811
      && v18 != -1073741801
      && v18 != -1073741790
      && v18 != -1073741776
      && v18 != -1073741637
      && (v18 <= -1073741586 || v18 > -1073741574) )
    {
      v16 = -1073741823;
    }
    goto LABEL_24;
  }
LABEL_25:
  v19 = v21;
  memmove((void *)a3, v9, 200LL * v21);
  *a2 = v19;
  if ( v15 )
    *a4 = v24;
  if ( Address )
  {
    *(_QWORD *)Address = v26;
    Address[2] = v27;
  }
LABEL_29:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v28);
  UserSessionSwitchLeaveCrit();
  return v16;
}
