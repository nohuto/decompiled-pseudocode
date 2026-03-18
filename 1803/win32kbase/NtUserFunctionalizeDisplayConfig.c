/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C00B5D30
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00D4D70 (DrvFunctionalizeDisplayConfig.c)
 */

__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        _DWORD *Address)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  void *v17; // r14
  _DWORD *v18; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 *i; // rcx
  _OWORD *v23; // r9
  _OWORD *v24; // r11
  unsigned int v25; // r8d
  unsigned int v26; // r10d
  int v27; // eax
  unsigned int v28; // ebx
  unsigned int v30; // [rsp+30h] [rbp-108h] BYREF
  int v31; // [rsp+34h] [rbp-104h]
  _DWORD v32[2]; // [rsp+38h] [rbp-100h] BYREF
  void *v33; // [rsp+40h] [rbp-F8h]
  __int64 v34; // [rsp+48h] [rbp-F0h]
  int v35; // [rsp+50h] [rbp-E8h]
  int v36; // [rsp+58h] [rbp-E0h]
  int v37; // [rsp+5Ch] [rbp-DCh]
  __int64 *v38; // [rsp+70h] [rbp-C8h]
  __int64 v39; // [rsp+78h] [rbp-C0h]
  int v40; // [rsp+80h] [rbp-B8h]
  void *v41; // [rsp+90h] [rbp-A8h]
  __int64 v42; // [rsp+98h] [rbp-A0h]
  _QWORD v43[10]; // [rsp+B0h] [rbp-88h] BYREF

  v42 = a5;
  v33 = 0LL;
  v30 = 0;
  v32[0] = -1;
  v34 = 0LL;
  v35 = 0;
  memset(v43, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v43[1]);
  v43[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v43[3]) = 59;
  LOBYTE(v43[6]) = -1;
  v32[1] = -1073741811;
  UserSessionSwitchEnterCrit(v11, v10, v12);
  if ( gbVideoInitialized )
  {
    v18 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = *v18;
    v30 = *a2;
    if ( v30 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v30, CurrentProcessWow64Process != 0 ? 1 : 4);
    v17 = Win32AllocPoolWithQuotaZInit(200LL * v30, 0x63447355u);
    v33 = v17;
    if ( !v17 )
      ExRaiseStatus(-1073741801);
    v20 = 0;
    v36 = 0;
    v21 = 0;
    for ( i = (__int64 *)a3; ; i += 25 )
    {
      v38 = i;
      v31 = v21;
      if ( v21 >= v30 )
        break;
      if ( *i < 0 )
        v36 = ++v20;
      ++v21;
    }
    if ( v30 != v20 )
      ExRaiseStatus(-1073741811);
    v23 = a3;
    v38 = (__int64 *)a3;
    v24 = v17;
    v41 = v17;
    v25 = 0;
    v37 = 0;
    v26 = 0;
    v31 = 0;
    while ( v26 < v20 )
    {
      if ( *(__int64 *)v23 < 0 )
      {
        if ( v25 >= v20 )
          ExRaiseStatus(-1073741811);
        *v24 = *v23;
        v24[1] = v23[1];
        v24[2] = v23[2];
        v24[3] = v23[3];
        v24[4] = v23[4];
        v24[5] = v23[5];
        v24[6] = v23[6];
        v24[7] = v23[7];
        v24[8] = v23[8];
        v24[9] = v23[9];
        v24[10] = v23[10];
        v24[11] = v23[11];
        *((_QWORD *)v24 + 24) = *((_QWORD *)v23 + 24);
        if ( *(__int64 *)v24 >= 0 )
          ExRaiseStatus(-1073741790);
        v37 = ++v25;
        v24 = (_OWORD *)((char *)v24 + 200);
        v41 = v24;
      }
      v31 = ++v26;
      v23 = (_OWORD *)((char *)v23 + 200);
      v38 = (__int64 *)v23;
    }
    if ( v25 != v20 )
      ExRaiseStatus(-1073741811);
    if ( !Address )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(Address, 4uLL, 4u);
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = a4 + 12;
      v13 = MmUserProbeAddress;
      if ( a4 + 12 > MmUserProbeAddress || v14 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v34 = *(_QWORD *)a4;
      v35 = *(_DWORD *)(a4 + 8);
    }
    if ( gProtocolType )
    {
      v16 = -1073741790;
    }
    else if ( !a4
           || (v39 = 0LL,
               v14 = *((unsigned int *)gpGdiSharedMemory + 393252),
               LODWORD(v39) = *((_DWORD *)gpGdiSharedMemory + 393252),
               v13 = *((unsigned int *)gpGdiSharedMemory + 393258),
               HIDWORD(v39) = *((_DWORD *)gpGdiSharedMemory + 393258),
               v40 = *((_DWORD *)gpGdiSharedMemory + 393256),
               v40 == v35)
           && __PAIR64__(v13, v14) == v34 )
    {
      v27 = DrvFunctionalizeDisplayConfig(
              (unsigned int)&v30,
              (_DWORD)v17,
              a1,
              v42,
              (unsigned __int64)v32 & -(__int64)(Address != 0LL));
      v16 = v27;
      if ( v27 == -2147483643 )
      {
        v16 = -1073741789;
      }
      else if ( v27 != -1073741789 )
      {
        if ( v27 < 0
          && v27 != -1073741811
          && v27 != -1073741801
          && v27 != -1073741790
          && v27 != -1073741776
          && v27 != -1073741637
          && (v27 <= -1073741586 || v27 > -1073741574) )
        {
          v27 = -1073741823;
        }
        v16 = v27;
      }
      v28 = v30;
      memmove((void *)a3, v17, 200LL * v30);
      *a2 = v28;
      *Address = v32[0];
    }
    else
    {
      v16 = -1071774921;
    }
  }
  else
  {
    v16 = -1073741823;
    v17 = v33;
  }
  if ( v17 )
  {
    Win32FreePool((__int64)v17);
    v33 = 0LL;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v14, v13, v15);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v16;
}
