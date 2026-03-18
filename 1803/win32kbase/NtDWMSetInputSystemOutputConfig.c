/*
 * XREFs of NtDWMSetInputSystemOutputConfig @ 0x1C00B34F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0131D38 (-OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 */

__int64 __fastcall NtDWMSetInputSystemOutputConfig(ULONG64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // r12
  int v6; // ebx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  BOOL v9; // edx
  ULONG v10; // ecx
  unsigned int v11; // edi
  __int64 v12; // r15
  CInputConfig *v13; // rcx
  struct CRegionConfig *v14; // rdi
  unsigned int v15; // edx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm4
  __int64 v20; // rax
  NTSTATUS v21; // esi
  __int64 v22; // rcx
  _BYTE v24[4]; // [rsp+20h] [rbp-268h] BYREF
  int v25; // [rsp+24h] [rbp-264h]
  int v26; // [rsp+30h] [rbp-258h]
  unsigned int v27; // [rsp+34h] [rbp-254h]
  _BYTE v28[8]; // [rsp+40h] [rbp-248h] BYREF
  __int64 v29; // [rsp+48h] [rbp-240h]
  int v30; // [rsp+50h] [rbp-238h]
  __int64 v31; // [rsp+58h] [rbp-230h]
  unsigned int v32; // [rsp+60h] [rbp-228h]
  struct CRegionConfig *v33; // [rsp+68h] [rbp-220h]
  __int128 v34; // [rsp+C0h] [rbp-1C8h]
  __int128 v35; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-1A8h]
  __int128 v37; // [rsp+F0h] [rbp-198h]
  __int128 v38; // [rsp+100h] [rbp-188h]
  __int128 v39; // [rsp+110h] [rbp-178h]
  __int128 v40; // [rsp+120h] [rbp-168h]
  __int128 v41; // [rsp+130h] [rbp-158h]
  __int128 v42; // [rsp+140h] [rbp-148h]
  _OWORD v43[3]; // [rsp+150h] [rbp-138h] BYREF
  __int128 v44; // [rsp+180h] [rbp-108h]
  __int128 v45; // [rsp+190h] [rbp-F8h]
  __int128 v46; // [rsp+1A0h] [rbp-E8h]
  __int128 v47; // [rsp+1B0h] [rbp-D8h]
  __int128 v48; // [rsp+1C0h] [rbp-C8h]
  __int128 v49; // [rsp+1D0h] [rbp-B8h]
  __int128 v50; // [rsp+1E0h] [rbp-A8h]
  __int128 v51; // [rsp+1F0h] [rbp-98h]
  __int128 v52; // [rsp+200h] [rbp-88h]
  __int128 v53; // [rsp+210h] [rbp-78h]
  __int128 v54; // [rsp+220h] [rbp-68h]
  __int128 v55; // [rsp+230h] [rbp-58h]
  __int128 v56; // [rsp+240h] [rbp-48h]

  v4 = (unsigned int)a2;
  v6 = 0;
  v26 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v24, a2, a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  v29 = 0LL;
  v30 = 0;
  v35 = 0uLL;
  *(_QWORD *)&v36 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  *(_QWORD *)&v44 = 0LL;
  BYTE8(v44) = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v7);
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( v9 )
  {
    v11 = -1;
    if ( (unsigned __int64)(80 * v4) <= 0xFFFFFFFF )
      v11 = 80 * v4;
    v27 = v11;
    if ( (unsigned __int64)(80 * v4) <= 0xFFFFFFFF )
    {
      if ( a1 + 12 < a1 || a1 + 12 > MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      v31 = *(_QWORD *)a1;
      v32 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)&v45 = v31;
      *((_QWORD *)&v45 + 1) = v32;
      *(_QWORD *)&v46 = 0LL;
      *(_QWORD *)&v51 = 0LL;
      *(_QWORD *)&v56 = 0LL;
      BYTE8(v56) = 0;
      v35 = v45;
      v36 = v46;
      v37 = v47;
      v38 = v48;
      v39 = v49;
      v40 = v50;
      v41 = v51;
      v42 = v52;
      v43[0] = v53;
      v43[1] = v54;
      v43[2] = v55;
      v44 = v56;
      v12 = 72 * v4;
      if ( 72 * v4 )
      {
        if ( ((unsigned __int8)a3 & (PsGetCurrentProcessWow64Process(v43) == 0 ? 3 : 0)) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v12 + a3 > MmUserProbeAddress || v12 + a3 < a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v14 = (struct CRegionConfig *)Win32AllocPoolWithQuota(v11, 0x63736955u);
      v33 = v14;
      if ( !v14 )
        ExRaiseStatus(-1073741801);
      v15 = 0;
      v25 = 0;
      while ( v15 != (_DWORD)v4 )
      {
        v13 = (CInputConfig *)v15;
        v16 = *(_OWORD *)(a3 + 72LL * v15);
        v17 = *(_OWORD *)(a3 + 72LL * v15 + 16);
        v18 = *(_OWORD *)(a3 + 72LL * v15 + 32);
        v19 = *(_OWORD *)(a3 + 72LL * v15 + 48);
        v34 = *(unsigned __int64 *)(a3 + 72LL * v15 + 64);
        v20 = 10LL * v15;
        *(_OWORD *)((char *)v14 + 8 * v20) = v16;
        *(_OWORD *)((char *)v14 + 8 * v20 + 16) = v17;
        *(_OWORD *)((char *)v14 + 8 * v20 + 32) = v18;
        *(_OWORD *)((char *)v14 + 8 * v20 + 48) = v19;
        *(_OWORD *)((char *)v14 + 8 * v20 + 64) = v34;
        v25 = ++v15;
      }
      v21 = CInputConfig::OnNewConfiguration(v13, (struct COutputConfig *)&v35, v4, v14);
      if ( v21 >= 0 )
      {
        v6 = 1;
        goto LABEL_27;
      }
      Win32FreePool((__int64)v14);
      v10 = RtlNtStatusToDosError(v21);
    }
    else
    {
      v10 = 8;
    }
  }
  else
  {
    v10 = 5;
  }
  UserSetLastError(v10);
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  UserSessionSwitchLeaveCrit(v22);
  return v6;
}
