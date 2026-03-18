/*
 * XREFs of ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C006F0A8
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C006FBA4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxUnloadKeyboardLayout @ 0x1C01809C0 (xxxUnloadKeyboardLayout.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     ThreadUnlock1 @ 0x1C0025E10 (ThreadUnlock1.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C006F87C (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0070060 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0070920 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0071450 (HKLtoPKL.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C00A96F0 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxInternalUnloadKeyboardLayout(struct tagWINDOWSTATION *a1, struct tagKL *a2, __int64 a3)
{
  struct tagTHREADINFO *v3; // rdi
  __int64 result; // rax
  int v5; // r15d
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagKL *v10; // rax
  struct tagKL *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[16]; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v22; // [rsp+68h] [rbp+17h] BYREF
  struct tagKL *v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]
  _QWORD v25[3]; // [rsp+80h] [rbp+2Fh] BYREF

  v3 = gptiCurrent;
  result = 0LL;
  v5 = a3;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( a2 != (struct tagKL *)gspklBaseLayout || (int)a3 < 0 )
  {
    v22 = *((_QWORD *)gptiCurrent + 51);
    *((_QWORD *)gptiCurrent + 51) = &v22;
    v23 = a2;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v19,
      (__int64)a2,
      a3);
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( a2 == (struct tagKL *)gspklGlobalActive )
      HMAssignmentUnlock(&gspklGlobalActive);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v20,
      v8,
      v9);
    HMMarkObjectDestroyWorker(a2);
    *((_DWORD *)a2 + 8) |= 0x20000000u;
    if ( v5 >= 0 && *((struct tagKL **)v3 + 54) == a2 )
    {
      v14 = HKLtoPKL(v3, 1LL);
      if ( v14 )
      {
        v15 = *((_QWORD *)v3 + 51);
        v25[2] = 0LL;
        v25[0] = v15;
        *((_QWORD *)v3 + 51) = v25;
        v25[1] = v14;
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v21,
          v12,
          v13);
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        xxxInternalActivateKeyboardLayout(a1, v14, (unsigned int)v5, 0LL);
        ThreadUnlock1();
      }
    }
    if ( a1 )
      v10 = (struct tagKL *)*((_QWORD *)a1 + 5);
    else
      v10 = (struct tagKL *)gspklWinstaLessSessionLayouts;
    if ( v10 == a2 )
    {
      v11 = (struct tagKL *)*((_QWORD *)a2 + 2);
      if ( a2 != v11 && !LockKbdLayoutListHead(a1, v11) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
    }
    ThreadUnlock1();
    xxxWindowEvent(0x80000000LL, 0LL, 0LL);
    ApiSetEditionNotifyShellLanguageHook(v3, 0LL, 0LL);
    return 1LL;
  }
  return result;
}
