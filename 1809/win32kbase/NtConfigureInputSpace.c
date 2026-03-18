/*
 * XREFs of NtConfigureInputSpace @ 0x1C00ECB10
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C003C428 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C003DBA8 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C003DE68 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01534CC (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C0153860 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 */

__int64 __fastcall NtConfigureInputSpace(ULONG64 a1, char *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v6; // r14d
  char *v7; // rdi
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  BOOL v10; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  ULONG64 v13; // rcx
  int v14; // eax
  __int64 v15; // r15
  CInputConfig *v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  char v21[4]; // [rsp+20h] [rbp-788h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-784h]
  char *v23; // [rsp+30h] [rbp-778h]
  __int64 v24; // [rsp+40h] [rbp-768h] BYREF
  int v25; // [rsp+48h] [rbp-760h]
  _OWORD v26[5]; // [rsp+60h] [rbp-748h] BYREF
  int v27; // [rsp+B0h] [rbp-6F8h]
  _BYTE v28[504]; // [rsp+B8h] [rbp-6F0h] BYREF
  __int64 v29; // [rsp+2B0h] [rbp-4F8h] BYREF
  int v30; // [rsp+2B8h] [rbp-4F0h]

  v3 = (unsigned int)a3;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v21, (__int64)a2, a3);
  v24 = 0LL;
  v25 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v29, (const struct INPUT_SPACE *)&v24, 0);
  v6 = 0;
  v22 = 0;
  v7 = 0LL;
  v23 = 0LL;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v8);
  v10 = 0;
  v11 = 1;
  if ( CurrentProcess )
    v10 = CurrentProcess == g_pepDwm;
  if ( !v10 )
  {
    v12 = 5LL;
LABEL_5:
    v11 = 0;
LABEL_6:
    UserSetLastError(v12);
    goto LABEL_32;
  }
  if ( (_DWORD)v3 )
  {
    v6 = -1;
    if ( (unsigned __int64)(84 * v3) <= 0xFFFFFFFF )
      v6 = 84 * v3;
    v22 = v6;
    if ( (unsigned __int64)(84 * v3) > 0xFFFFFFFF )
      goto LABEL_11;
    v7 = (char *)Win32AllocPoolWithQuota(v6, 0x63736955u);
    v23 = v7;
    if ( !v7 )
    {
      v12 = 8LL;
      goto LABEL_5;
    }
  }
  v13 = a1 + 12;
  if ( a1 + 12 < a1 || v13 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v14 = *(_DWORD *)(a1 + 8);
  v29 = *(_QWORD *)a1;
  v30 = v14;
  if ( (_DWORD)v3 )
  {
    v15 = 84 * v3;
    if ( 84 * v3 )
    {
      if ( ((unsigned __int8)a2 & (PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0)) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v15] > MmUserProbeAddress || &a2[v15] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v7, a2, v6);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v29, (const struct INPUT_SPACE_REGION *)v7, v3) )
  {
LABEL_11:
    v12 = 87LL;
    goto LABEL_5;
  }
  if ( (_DWORD)v3 )
  {
    v17 = 0;
    do
    {
      v18 = 84LL * v17;
      v26[0] = *(_OWORD *)&v7[v18];
      v26[1] = *(_OWORD *)&v7[v18 + 16];
      v26[2] = *(_OWORD *)&v7[v18 + 32];
      v26[3] = *(_OWORD *)&v7[v18 + 48];
      v26[4] = *(_OWORD *)&v7[v18 + 64];
      v27 = *(_DWORD *)&v7[v18 + 80];
      memset(v28, 0, 289);
      memset(&v28[296], 0, 0xC8uLL);
      v19 = CInputSpace::AddRegion((CInputSpace *)&v29, (const struct CInputSpaceRegion *)v26, 0LL);
      if ( v19 < 0 )
        goto LABEL_31;
    }
    while ( ++v17 != (_DWORD)v3 );
  }
  v19 = CInputConfig::ConfigureInputSpace(v16, (struct CInputSpace *)&v29);
  if ( v19 < 0 )
  {
LABEL_31:
    v11 = 0;
    v12 = RtlNtStatusToDosError(v19);
    goto LABEL_6;
  }
LABEL_32:
  CInputSpace::FreeRegions((CInputSpace *)&v29);
  if ( v7 )
    Win32FreePool((__int64)v7);
  UserSessionSwitchLeaveCrit();
  return v11;
}
