/*
 * XREFs of InjectLegacyISMTouch @ 0x1C0132140
 * Callers:
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00B44D0 (NtMITInjectLegacyISMTouchFrame.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0119A94 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0131FCC (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C01320BC (ConvertPointCoordinates.c)
 */

__int64 __fastcall InjectLegacyISMTouch(__int64 a1)
{
  _QWORD *v2; // rsi
  void *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // rdx
  CTouchProcessor *v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  __int128 v14; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v15[24]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v16[24]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+10h] BYREF

  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19) )
      TouchExtensibility::ghInjectionDevice = 0LL;
    if ( TouchExtensibility::ghInjectionDevice )
      goto LABEL_6;
  }
  if ( (unsigned int)CreateInjectionDevice() )
  {
LABEL_6:
    v2 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x79737355u);
    v3 = Win32AllocPoolWithQuotaZInit(0x690uLL, 0x79737355u);
    v4 = (__int64)v3;
    if ( v2 )
    {
      if ( v3 && *(_DWORD *)a1 <= 0xAu )
      {
        v2[11] = v3;
        v5 = 0LL;
        v2[4] = TouchExtensibility::ghInjectionDevice;
        *((_DWORD *)v2 + 12) = 1;
        v6 = *(_QWORD *)(a1 + 8);
        *((_DWORD *)v2 + 7) = 0;
        v2[5] = v6;
        *((_DWORD *)v2 + 6) = *(_DWORD *)a1;
        if ( !*(_DWORD *)a1 )
        {
LABEL_14:
          PushW32ThreadLock(v2, v16, Win32FreePool);
          PushW32ThreadLock(v4, v15, Win32FreePool);
          CTouchProcessor::ProcessInjectedInput(v11, v10, (struct RIMCOMPLETEFRAME *)v2, 0, 0, 0);
          PopW32ThreadLock(v15);
          PopW32ThreadLock(v16);
          Win32FreePool((__int64)v2);
          Win32FreePool(v4);
          return 0LL;
        }
        while ( 1 )
        {
          v7 = 168LL * (unsigned int)v5;
          *(_OWORD *)(v4 + v7 + 16) = *(_OWORD *)(96 * v5 + a1 + 24);
          *(_OWORD *)(v4 + v7 + 32) = *(_OWORD *)(96 * v5 + a1 + 40);
          *(_OWORD *)(v4 + v7 + 48) = *(_OWORD *)(96 * v5 + a1 + 56);
          *(_OWORD *)(v4 + v7 + 64) = *(_OWORD *)(96 * v5 + a1 + 72);
          *(_OWORD *)(v4 + v7 + 80) = *(_OWORD *)(96 * v5 + a1 + 88);
          *(_OWORD *)(v4 + v7 + 96) = *(_OWORD *)(96 * v5 + a1 + 104);
          v8 = *(_QWORD *)(96 * v5 + a1 + 72);
          v13 = *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
          v14 = *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.Busy;
          if ( !(unsigned int)ConvertPointCoordinates(v8, (int *)&v14, (int *)&v13, &v17) )
            break;
          v9 = v17;
          *(_QWORD *)(v4 + v7 + 56) = v17;
          *(_QWORD *)(v4 + v7 + 72) = v9;
          *(_QWORD *)(v4 + v7 + 48) = v8;
          *(_QWORD *)(v4 + v7 + 32) = v2[4];
          *(_DWORD *)(v4 + v7 + 80) = *(_DWORD *)(a1 + 4);
          *(_QWORD *)(v4 + v7 + 96) = *(_QWORD *)(a1 + 8);
          LOWORD(v9) = *(_WORD *)(96 * v5 + a1 + 28);
          *(_DWORD *)(v4 + v7 + 20) = 0;
          *(_WORD *)(v4 + v7 + 8) = v9;
          if ( *(_DWORD *)(a1 + 16) )
            *(_DWORD *)(v4 + v7 + 160) = 1;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *(_DWORD *)a1 )
            goto LABEL_14;
        }
      }
      Win32FreePool((__int64)v2);
    }
    if ( v4 )
      Win32FreePool(v4);
  }
  return 3221225473LL;
}
