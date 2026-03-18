/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C00EE9A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCritShared@@QEAA@XZ @ 0x1C00A8208 (--0EnterLeaveCritShared@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0104C14 (DrvFunctionalizeDisplayConfig.c)
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
  __int64 v11; // r8
  unsigned int v12; // esi
  void *v13; // r14
  _DWORD *v14; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax
  __int64 *i; // rcx
  _OWORD *v19; // r9
  _OWORD *v20; // r11
  unsigned int v21; // r8d
  unsigned int j; // r10d
  __int64 v23; // rcx
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ebx
  unsigned int v28; // [rsp+30h] [rbp-118h] BYREF
  char v29[4]; // [rsp+34h] [rbp-114h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-110h]
  _DWORD v31[3]; // [rsp+3Ch] [rbp-10Ch] BYREF
  void *v32; // [rsp+48h] [rbp-100h]
  __int64 v33; // [rsp+50h] [rbp-F8h]
  int v34; // [rsp+58h] [rbp-F0h]
  int v35; // [rsp+60h] [rbp-E8h]
  int v36; // [rsp+64h] [rbp-E4h]
  __int64 *v37; // [rsp+78h] [rbp-D0h]
  __int64 v38; // [rsp+80h] [rbp-C8h]
  int v39; // [rsp+88h] [rbp-C0h]
  void *v40; // [rsp+98h] [rbp-B0h]
  __int64 v41; // [rsp+A0h] [rbp-A8h]
  _QWORD v42[10]; // [rsp+C0h] [rbp-88h] BYREF

  v41 = a5;
  v32 = 0LL;
  v28 = 0;
  v31[0] = -1;
  v33 = 0LL;
  v34 = 0;
  memset(v42, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v42[1]);
  v42[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v42[3]) = 59;
  LOBYTE(v42[6]) = -1;
  v31[1] = -1073741811;
  EnterLeaveCritShared::EnterLeaveCritShared((EnterLeaveCritShared *)v29, v10, v11);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( gbVideoInitialized )
  {
    v14 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v28 = *a2;
    if ( v28 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v28, CurrentProcessWow64Process != 0 ? 1 : 4);
    v13 = Win32AllocPoolWithQuotaZInit(200LL * v28, 0x63447355u);
    v32 = v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    v16 = 0;
    v35 = 0;
    v17 = 0;
    for ( i = (__int64 *)a3; ; i += 25 )
    {
      v37 = i;
      v30 = v17;
      if ( v17 >= v28 )
        break;
      if ( *i < 0 )
        v35 = ++v16;
      ++v17;
    }
    if ( v28 != v16 )
      ExRaiseStatus(-1073741811);
    v19 = a3;
    v37 = (__int64 *)a3;
    v20 = v13;
    v40 = v13;
    v21 = 0;
    v36 = 0;
    for ( j = 0; ; ++j )
    {
      v30 = j;
      if ( j >= v16 )
        break;
      if ( *(__int64 *)v19 < 0 )
      {
        if ( v21 >= v16 )
          ExRaiseStatus(-1073741811);
        *v20 = *v19;
        v20[1] = v19[1];
        v20[2] = v19[2];
        v20[3] = v19[3];
        v20[4] = v19[4];
        v20[5] = v19[5];
        v20[6] = v19[6];
        v20[7] = v19[7];
        v20[8] = v19[8];
        v20[9] = v19[9];
        v20[10] = v19[10];
        v20[11] = v19[11];
        *((_QWORD *)v20 + 24) = *((_QWORD *)v19 + 24);
        if ( *(__int64 *)v20 >= 0 )
          ExRaiseStatus(-1073741790);
        v36 = ++v21;
        v20 = (_OWORD *)((char *)v20 + 200);
        v40 = v20;
      }
      v19 = (_OWORD *)((char *)v19 + 200);
      v37 = (__int64 *)v19;
    }
    if ( v21 != v16 )
      ExRaiseStatus(-1073741811);
    if ( !Address )
      ExRaiseStatus(-1073741811);
    ProbeForWrite(Address, 4uLL, 4u);
    if ( a4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v23) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v33 = *(_QWORD *)a4;
      v34 = *(_DWORD *)(a4 + 8);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( !a4
        || (v38 = 0LL,
            v24 = *((_DWORD *)gpGdiSharedMemory + 393252),
            LODWORD(v38) = v24,
            v25 = *((_DWORD *)gpGdiSharedMemory + 393258),
            HIDWORD(v38) = v25,
            v39 = *((_DWORD *)gpGdiSharedMemory + 393256),
            v39 == v34)
        && __PAIR64__(v25, v24) == v33 )
      {
        v12 = DrvFunctionalizeDisplayConfig(
                (unsigned int)&v28,
                (_DWORD)v13,
                a1,
                v41,
                (unsigned __int64)v31 & -(__int64)(Address != 0LL));
        if ( v12 == -2147483643 )
          v12 = -1073741789;
        v26 = v28;
        memmove((void *)a3, v13, 200LL * v28);
        *a2 = v26;
        *Address = v31[0];
      }
      else
      {
        v12 = -1071774921;
      }
    }
    else
    {
      v12 = -1073741790;
    }
  }
  else
  {
    v12 = -1073741823;
    v13 = v32;
  }
  if ( v13 )
  {
    Win32FreePool((__int64)v13);
    v32 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v12;
}
