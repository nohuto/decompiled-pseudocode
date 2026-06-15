/*
 * XREFs of ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1801264C0
 * Callers:
 *     ?HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801258B0 (-HoloshellStateChangeCallback@CExclusiveModeListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x180127070 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CExclusiveModeListener::OnHoloshellStateChange(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const GUID *v6; // r8
  const GUID *v7; // r9
  BOOL v8; // esi
  int updated; // eax
  BOOL v10; // [rsp+30h] [rbp-A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp-A0h]
  __int64 v12; // [rsp+48h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp-88h]
  GUID v14; // [rsp+58h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-68h] BYREF
  GUID *v16; // [rsp+90h] [rbp-48h]
  int v17; // [rsp+98h] [rbp-40h]
  int v18; // [rsp+9Ch] [rbp-3Ch]
  __int64 v19; // [rsp+A0h] [rbp-38h]
  int v20; // [rsp+A8h] [rbp-30h]
  int v21; // [rsp+ACh] [rbp-2Ch]
  BOOL *v22; // [rsp+B0h] [rbp-28h]
  int v23; // [rsp+B8h] [rbp-20h]
  int v24; // [rsp+BCh] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v12 = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v13 = v5;
  v8 = a2 <= 2 || a2 == 5;
  v14 = GUID_00000000_0000_0000_0000_000000000000;
  v10 = v8;
  if ( (unsigned int)dword_1801B5350 > 5 )
  {
    v16 = &v14;
    v17 = 16;
    v18 = 0;
    v19 = a1 + 136;
    v20 = 16;
    v21 = 0;
    v22 = &v10;
    v23 = 4;
    v24 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179C1A, v6, v7, 5u, &pData);
  }
  try
  {
    *(_DWORD *)(a1 + 176) = v8 + 1;
    updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)a1);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13C,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)updated);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      321LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    v5 = v11;
    v4 = v11;
  }
  if ( v4 )
    LeaveCriticalSection(v5);
}
