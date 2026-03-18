/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01323A4
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C00B4F90 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0119A94 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0131FCC (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01320BC (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  char v1; // bp
  _QWORD *v3; // rdi
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned int *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rdx
  CTouchProcessor *v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-78h] BYREF
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v20[24]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+8h] BYREF

  v1 = 1;
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
  v3 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x7A747355u);
  v4 = Win32AllocPoolWithQuotaZInit(168LL * *a1, 0x7A747355u);
  v5 = (__int64)v4;
  if ( !v3 || !v4 )
    goto LABEL_13;
  v3[11] = v4;
  v6 = 0LL;
  v3[4] = TouchExtensibility::ghInjectionDevice;
  *((_DWORD *)v3 + 12) = 1;
  v7 = *((_QWORD *)a1 + 12);
  *((_DWORD *)v3 + 7) = 0;
  v3[5] = v7;
  *((_DWORD *)v3 + 6) = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v8 = 168LL * (unsigned int)v6;
      v9 = 18 * v6;
      v10 = &a1[36 * v6];
      v11 = (_OWORD *)(v8 + v5);
      v11[1] = *((_OWORD *)v10 + 1);
      v11[2] = *((_OWORD *)v10 + 2);
      v11[3] = *((_OWORD *)v10 + 3);
      v11[4] = *((_OWORD *)v10 + 4);
      v11[5] = *((_OWORD *)v10 + 5);
      v11[6] = *((_OWORD *)v10 + 6);
      v11[7] = *((_OWORD *)v10 + 7);
      v11[8] = *((_OWORD *)v10 + 8);
      v11[9] = *((_OWORD *)v10 + 9);
      v12 = *((_QWORD *)v10 + 8);
      *(_QWORD *)(v8 + v5 + 48) = v12;
      v17 = *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      v18 = *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
      if ( !(unsigned int)ConvertPointCoordinates(v12, (int *)&v18, (int *)&v17, &v21) )
        break;
      v13 = v21;
      v6 = (unsigned int)(v6 + 1);
      *(_QWORD *)(v8 + v5 + 56) = v21;
      *(_QWORD *)(v8 + v5 + 72) = v13;
      *(_QWORD *)(v8 + v5 + 32) = v3[4];
      *(_DWORD *)(v8 + v5 + 80) = a1[2 * v9 + 20];
      *(_QWORD *)(v8 + v5 + 96) = *(_QWORD *)&a1[2 * v9 + 24];
      LOWORD(v13) = a1[2 * v9 + 5];
      *(_DWORD *)(v8 + v5 + 20) = 0;
      *(_WORD *)(v8 + v5 + 8) = v13;
      if ( (unsigned int)v6 >= *a1 )
        goto LABEL_12;
    }
LABEL_13:
    v1 = 0;
    goto LABEL_14;
  }
LABEL_12:
  PushW32ThreadLock(v3, v20, Win32FreePool);
  PushW32ThreadLock(v5, v19, Win32FreePool);
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
