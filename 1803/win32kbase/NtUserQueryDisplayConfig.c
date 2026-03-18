/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C00415E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     DrvQueryDisplayConfig @ 0x1C00426D0 (DrvQueryDisplayConfig.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(__int64 a1, unsigned int *a2, volatile void *a3, int *a4, _DWORD *Address)
{
  unsigned int v8; // ebx
  const void *v9; // r14
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcessWow64Process; // rax
  void *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v20; // [rsp+20h] [rbp-98h] BYREF
  int v21; // [rsp+24h] [rbp-94h]
  int v22; // [rsp+28h] [rbp-90h] BYREF
  const void *v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  int v25; // [rsp+40h] [rbp-78h]
  int v26; // [rsp+48h] [rbp-70h]
  _BYTE v27[24]; // [rsp+78h] [rbp-40h] BYREF

  v8 = a1;
  v9 = 0LL;
  v23 = 0LL;
  v20 = 0;
  v22 = -1;
  v24 = 0LL;
  v25 = 0;
  UserSessionSwitchEnterCrit(a1, (__int64)a2, (__int64)a3);
  if ( !gbVideoInitialized )
  {
    v15 = -1073741823;
    goto LABEL_29;
  }
  if ( (v8 & 0xFFFFFFC8) != 0 || (v11 = v8 & 7, (((_DWORD)v11 - 1) & 0xFFFFFFFC) != 0) || (_DWORD)v11 == 3 )
  {
    v15 = -1073741811;
    goto LABEL_29;
  }
  v11 = MmUserProbeAddress;
  v10 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  v20 = *a2;
  if ( !v20 )
  {
    v15 = -1073741811;
    v21 = -1073741811;
    v9 = v23;
    goto LABEL_29;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
  ProbeForWrite(a3, 200LL * v20, CurrentProcessWow64Process != 0 ? 1 : 4);
  v14 = Win32AllocPoolWithQuotaZInit(200LL * v20, 0x63447355u);
  v9 = v14;
  v23 = v14;
  if ( !v14 )
    ExRaiseStatus(-1073741801);
  PushW32ThreadLock(v14, v27, Win32FreePool);
  v26 = v8 & 4;
  if ( (v8 & 4) != 0 )
  {
    ProbeForWrite(a4, 4uLL, 4u);
  }
  else if ( a4 )
  {
    v15 = -1073741811;
    v21 = -1073741811;
    goto LABEL_29;
  }
  if ( Address )
  {
    v16 = PsGetCurrentProcessWow64Process(v11);
    ProbeForWrite(Address, 0xCuLL, v16 != 0 ? 1 : 4);
  }
  if ( gProtocolType )
  {
    v15 = -1073741790;
    goto LABEL_29;
  }
  if ( Address )
  {
    LODWORD(v24) = *((_DWORD *)gpGdiSharedMemory + 393252);
    HIDWORD(v24) = *((_DWORD *)gpGdiSharedMemory + 393258);
    v25 = *((_DWORD *)gpGdiSharedMemory + 393256);
  }
  v17 = DrvQueryDisplayConfig(v8, &v20, v9, &v22);
  v15 = v17;
  v21 = v17;
  if ( v17 == -2147483643 )
  {
    v15 = -1073741789;
LABEL_24:
    v21 = v15;
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
      v15 = -1073741823;
    }
    goto LABEL_24;
  }
LABEL_25:
  v18 = v20;
  memmove((void *)a3, v9, 200LL * v20);
  *a2 = v18;
  if ( v26 )
    *a4 = v22;
  if ( Address )
  {
    *(_QWORD *)Address = v24;
    Address[2] = v25;
  }
LABEL_29:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v27);
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v11, (__int64)v10, v12);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v15;
}
