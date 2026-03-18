/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C00EF890
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z @ 0x1C00A9618 (--0EnterLeaveCritSharedPti@@QEAA@PEAPEAUtagTHREADINFO@@@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D350 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(int a1, unsigned int a2, __int64 a3, char *a4, volatile void *Address)
{
  __int64 v6; // rbx
  int PointerRawDataInternal; // edi
  volatile void *v10; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v19; // rcx
  CTouchProcessor *v20; // rcx
  struct tagTHREADINFO *v22[10]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+C8h] [rbp+10h]
  unsigned int v25; // [rsp+D0h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  v6 = (unsigned int)a3;
  EnterLeaveCritSharedPti::EnterLeaveCritSharedPti((EnterLeaveCritSharedPti *)&v23, v22, a3);
  PointerRawDataInternal = 0;
  if ( !a1
    || HIWORD(a1)
    || !a2
    || !(_DWORD)v6
    || !a4
    || (v10 = Address) == 0LL
    || (v11 = (unsigned int)v6, v12 = v6 * a2, v12 > 0xFFFFFFFF)
    || (v13 = (unsigned int)v12, v14 = 28 * v11, (unsigned __int64)(28 * v11) > 0xFFFFFFFF) )
  {
    v15 = 87LL;
    goto LABEL_20;
  }
  if ( (unsigned int)v14 >= 0x2710000
    || (v17 = (struct tagTHREADINFO *)Win32AllocPoolWithQuota((unsigned int)v14, 0x78707355u), (v22[1] = v17) == 0LL) )
  {
    v15 = 8LL;
LABEL_20:
    UserSetLastError(v15);
    goto LABEL_21;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
  ProbeForWrite(v10, 4 * v13, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v14 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v19) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v14] > MmUserProbeAddress || &a4[v14] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v17, a4, (unsigned int)v14);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(v20, v22[0], a1, v24, v25, v17, v13, (int *)v10);
  Win32FreePool((__int64)v17);
LABEL_21:
  UserSessionSwitchLeaveCrit();
  return PointerRawDataInternal;
}
