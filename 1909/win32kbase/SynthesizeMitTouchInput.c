/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C018C72C
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C01130D0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0145948 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C016E1FC (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C018C5AC (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C018C6A4 (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  char v1; // r14
  _QWORD *v3; // rdi
  void *v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned int *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  CInpLockGuard *v14; // rdx
  CTouchProcessor *v15; // rcx
  struct tagRECT v17; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v18; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  v1 = 1;
  memset(v20, 0, sizeof(v20));
  memset(v19, 0, sizeof(v19));
  if ( *a1 - 1 > 9 )
    return 0;
  if ( !TouchExtensibility::ghInjectionDevice )
    goto LABEL_22;
  if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19) )
    TouchExtensibility::ghInjectionDevice = 0LL;
  if ( !TouchExtensibility::ghInjectionDevice )
  {
LABEL_22:
    if ( !(unsigned int)CreateInjectionDevice() )
      return 0;
  }
  v3 = Win32AllocPoolWithQuotaZInit(0x78uLL, 0x7A747355u);
  v4 = Win32AllocPoolWithQuotaZInit(192LL * *a1, 0x7A747355u);
  v5 = (__int64)v4;
  if ( !v3 || !v4 )
    goto LABEL_13;
  v3[14] = v4;
  v6 = 0;
  v3[4] = TouchExtensibility::ghInjectionDevice;
  *((_DWORD *)v3 + 18) = 1;
  v3[5] = *((_QWORD *)a1 + 12);
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 6) = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v21 = 0LL;
      v7 = 18LL * v6;
      v8 = 192LL * v6;
      v9 = &a1[36 * v6];
      v10 = (_OWORD *)(v8 + v5);
      v10[1] = *((_OWORD *)v9 + 1);
      v10[2] = *((_OWORD *)v9 + 2);
      v10[3] = *((_OWORD *)v9 + 3);
      v10[4] = *((_OWORD *)v9 + 4);
      v10[5] = *((_OWORD *)v9 + 5);
      v10[6] = *((_OWORD *)v9 + 6);
      v10[7] = *((_OWORD *)v9 + 7);
      v10[8] = *((_OWORD *)v9 + 8);
      v10[9] = *((_OWORD *)v9 + 9);
      v11 = *((_QWORD *)v9 + 8);
      *(_QWORD *)(v8 + v5 + 48) = v11;
      v17 = TouchExtensibility::rcHimetricRect;
      v18 = TouchExtensibility::rcLogicalRect;
      if ( !(unsigned int)ConvertPointCoordinates(v11, &v18.left, &v17.left, &v21) )
        break;
      v12 = v21;
      ++v6;
      *(_QWORD *)(v8 + v5 + 56) = v21;
      *(_QWORD *)(v8 + v5 + 72) = v12;
      *(_QWORD *)(v8 + v5 + 32) = v3[4];
      *(_DWORD *)(v8 + v5 + 80) = a1[2 * v7 + 20];
      *(_QWORD *)(v8 + v5 + 96) = *(_QWORD *)&a1[2 * v7 + 24];
      LOWORD(v12) = a1[2 * v7 + 5];
      *(_DWORD *)(v8 + v5 + 20) = 0;
      *(_WORD *)(v8 + v5 + 8) = v12;
      if ( v6 >= *a1 )
        goto LABEL_12;
    }
LABEL_13:
    v1 = 0;
    goto LABEL_14;
  }
LABEL_12:
  PushW32ThreadLock(v3, v20, Win32FreePool);
  PushW32ThreadLock(v5, v19, Win32FreePool);
  v13 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
  InputTraceLogging::RIM::InjectInput(v13, 0);
  CTouchProcessor::ProcessInjectedInput(v15, v14, (struct RIMCOMPLETEFRAME *)v3, a1[1] != 0, a1[3], a1[2] != 0);
  PopW32ThreadLock(v19);
  PopW32ThreadLock(v20);
LABEL_14:
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v5 )
    Win32FreePool(v5);
  return v1;
}
