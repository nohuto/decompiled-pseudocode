/*
 * XREFs of NtConfigureInputSpace @ 0x1C0110CB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0051618 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x1C00518E4 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00A0D78 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C0185C0C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1C0186040 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 */

__int64 __fastcall NtConfigureInputSpace(ULONG64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  unsigned int v7; // r14d
  char *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  BOOL v13; // ecx
  __int64 v14; // rcx
  ULONG64 v15; // rcx
  __int64 v16; // r15
  CInputConfig *v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // [rsp+40h] [rbp-778h] BYREF
  int v25; // [rsp+48h] [rbp-770h]
  __int64 v26; // [rsp+50h] [rbp-768h]
  int v27; // [rsp+58h] [rbp-760h]
  _OWORD v28[5]; // [rsp+70h] [rbp-748h] BYREF
  int v29; // [rsp+C0h] [rbp-6F8h]
  _BYTE v30[504]; // [rsp+C8h] [rbp-6F0h] BYREF
  __int64 v31; // [rsp+2C0h] [rbp-4F8h] BYREF
  int v32; // [rsp+2C8h] [rbp-4F0h]

  v3 = a3;
  v6 = 1;
  EnterCrit(0, 1);
  v24 = 0LL;
  v25 = 0;
  CInputSpace::CInputSpace((CInputSpace *)&v31, (const struct INPUT_SPACE *)&v24, 0);
  v7 = 0;
  v8 = 0LL;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
  v13 = 0;
  if ( CurrentProcess )
    v13 = CurrentProcess == g_pepDwm;
  if ( !v13 )
  {
    v14 = 5LL;
LABEL_5:
    v6 = 0;
LABEL_6:
    UserSetLastError(v14, v12);
    goto LABEL_30;
  }
  if ( (_DWORD)v3 )
  {
    v7 = 84 * v3;
    if ( (unsigned __int64)(84 * v3) > 0xFFFFFFFF )
    {
LABEL_11:
      v14 = 87LL;
      goto LABEL_5;
    }
    v8 = (char *)Win32AllocPoolWithQuota(v7, 0x63736955u);
    if ( !v8 )
    {
      v14 = 8LL;
      goto LABEL_5;
    }
  }
  v15 = a1 + 12;
  if ( a1 + 12 < a1 || v15 > MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v26 = *(_QWORD *)a1;
  v27 = *(_DWORD *)(a1 + 8);
  v31 = v26;
  v32 = v27;
  if ( (_DWORD)v3 )
  {
    v16 = 84 * v3;
    if ( 84 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v15) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v16] > MmUserProbeAddress || &a2[v16] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v8, a2, v7);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v31, (const struct INPUT_SPACE_REGION *)v8, v3) )
    goto LABEL_11;
  if ( (_DWORD)v3 )
  {
    v18 = 0;
    do
    {
      v19 = 84LL * v18;
      v28[0] = *(_OWORD *)&v8[v19];
      v28[1] = *(_OWORD *)&v8[v19 + 16];
      v28[2] = *(_OWORD *)&v8[v19 + 32];
      v28[3] = *(_OWORD *)&v8[v19 + 48];
      v28[4] = *(_OWORD *)&v8[v19 + 64];
      v29 = *(_DWORD *)&v8[v19 + 80];
      memset(v30, 0, 289);
      memset(&v30[296], 0, 0xC8uLL);
      v20 = CInputSpace::AddRegion((CInputSpace *)&v31, (const struct CInputSpaceRegion *)v28, 0LL);
      if ( v20 < 0 )
        goto LABEL_29;
    }
    while ( ++v18 != (_DWORD)v3 );
  }
  v20 = CInputConfig::ConfigureInputSpace(v17, (struct CInputSpace *)&v31);
  if ( v20 < 0 )
  {
LABEL_29:
    v6 = 0;
    v14 = RtlNtStatusToDosError(v20);
    goto LABEL_6;
  }
LABEL_30:
  CInputSpace::FreeRegions((CInputSpace *)&v31);
  if ( v8 )
    Win32FreePool((__int64)v8);
  UserSessionSwitchLeaveCrit(v22, v21);
  return v6;
}
