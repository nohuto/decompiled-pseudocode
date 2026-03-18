/*
 * XREFs of NtUserFunctionalizeDisplayConfig @ 0x1C0114EF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     EnterSharedCrit @ 0x1C002ACE0 (EnterSharedCrit.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C00A3270 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C012B584 (DrvFunctionalizeDisplayConfig.c)
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
  unsigned int v24; // ebx
  unsigned int v26; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-114h]
  _DWORD v28[2]; // [rsp+38h] [rbp-110h] BYREF
  void *v29; // [rsp+40h] [rbp-108h]
  __int64 v30; // [rsp+48h] [rbp-100h]
  int v31; // [rsp+50h] [rbp-F8h]
  int v32; // [rsp+58h] [rbp-F0h]
  int v33; // [rsp+5Ch] [rbp-ECh]
  __int64 *v34; // [rsp+70h] [rbp-D8h]
  __int64 v35; // [rsp+78h] [rbp-D0h] BYREF
  int v36; // [rsp+80h] [rbp-C8h]
  __int64 v37; // [rsp+90h] [rbp-B8h]
  void *v38; // [rsp+98h] [rbp-B0h]
  __int64 v39; // [rsp+A0h] [rbp-A8h]
  _QWORD v40[10]; // [rsp+C0h] [rbp-88h] BYREF

  v39 = a5;
  v29 = 0LL;
  v26 = 0;
  v28[0] = -1;
  v30 = 0LL;
  v31 = 0;
  memset(v40, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v37 = MEMORY[0xFFFFF78000000014];
  v40[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 59;
  LOBYTE(v40[6]) = -1;
  v28[1] = -1073741811;
  EnterSharedCrit(0, 1);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( gbVideoInitialized )
  {
    v14 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v26 = *a2;
    if ( v26 - 1 > 0x3FF )
      ExRaiseStatus(-1073741811);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
    ProbeForWrite(a3, 200LL * v26, CurrentProcessWow64Process != 0 ? 1 : 4);
    v13 = Win32AllocPoolWithQuotaZInit(200LL * v26, 0x63447355u);
    v29 = v13;
    if ( !v13 )
      ExRaiseStatus(-1073741801);
    v16 = 0;
    v32 = 0;
    v17 = 0;
    for ( i = (__int64 *)a3; ; i += 25 )
    {
      v34 = i;
      v27 = v17;
      if ( v17 >= v26 )
        break;
      if ( *i < 0 )
        v32 = ++v16;
      ++v17;
    }
    if ( v26 != v16 )
      ExRaiseStatus(-1073741811);
    v19 = a3;
    v34 = (__int64 *)a3;
    v20 = v13;
    v38 = v13;
    v21 = 0;
    v33 = 0;
    for ( j = 0; ; ++j )
    {
      v27 = j;
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
        v33 = ++v21;
        v20 = (_OWORD *)((char *)v20 + 200);
        v38 = v20;
      }
      v19 = (_OWORD *)((char *)v19 + 200);
      v34 = (__int64 *)v19;
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
      v30 = *(_QWORD *)a4;
      v31 = *(_DWORD *)(a4 + 8);
    }
    if ( (unsigned int)UserIsWddmConnectedSession() )
    {
      if ( !a4 || (v35 = 0LL, v36 = 0, DrvSampleDisplayState(&v35), v36 == v31) && v35 == v30 )
      {
        v12 = DrvFunctionalizeDisplayConfig(
                (unsigned int)&v26,
                (_DWORD)v13,
                a1,
                v39,
                (unsigned __int64)v28 & -(__int64)(Address != 0LL));
        if ( v12 == -2147483643 )
          v12 = -1073741789;
        v24 = v26;
        memmove((void *)a3, v13, 200LL * v26);
        *a2 = v24;
        *Address = v28[0];
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
    v13 = v29;
  }
  if ( v13 )
  {
    Win32FreePool((__int64)v13);
    v29 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
