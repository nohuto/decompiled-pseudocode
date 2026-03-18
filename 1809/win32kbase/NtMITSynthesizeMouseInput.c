/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C00ED970
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0031610 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00EC7E8 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     SynthesizeMouseInputData @ 0x1C01516D8 (SynthesizeMouseInputData.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  CInputThread *v9; // rcx
  unsigned int v10; // r14d
  __int128 v11; // xmm2
  __int64 v12; // xmm0_8
  __int64 v14; // [rsp+28h] [rbp-90h] BYREF
  LPCWSTR *v15[2]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  char v19; // [rsp+D8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v15, L"MITSynthesizeMouseInput", 0LL);
  LODWORD(v6) = 0;
  v14 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v19, v7, v8);
  v10 = 0;
  if ( CInputThread::IsInputThread(v9) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v11 = *(_OWORD *)a1;
    v18 = *(_OWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 32);
    v16[0] = v11;
    v16[1] = v18;
    v17 = v12;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v6 = *a3;
      v14 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v10 = SynthesizeMouseInputData(v16, a2, (unsigned __int64)&v14 & -(__int64)((_DWORD)v6 != 0));
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v15);
  return v10;
}
