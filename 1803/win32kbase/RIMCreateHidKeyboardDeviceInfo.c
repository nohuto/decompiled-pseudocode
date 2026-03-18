/*
 * XREFs of RIMCreateHidKeyboardDeviceInfo @ 0x1C01036C0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C01039A0 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C0103EB4 (rimHidKeyboardIsButtonDevice.c)
 *     rimReadHidKeyboardFlags @ 0x1C01043D4 (rimReadHidKeyboardFlags.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C01045DC (rimValidateCustomHidKeyboardUsages.c)
 *     rimRegQueryRegistryDWord @ 0x1C0109414 (rimRegQueryRegistryDWord.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateHidKeyboardDeviceInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  char *v8; // rdi
  int IsButtonDevice; // ebx
  __int64 v10; // rax
  _DWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 76) & 0x20) == 0 || (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
    return (unsigned int)-1073741668;
  v8 = (char *)Win32AllocPoolZInit(0x1C0uLL, 0x626B4852u);
  if ( !v8 )
    goto LABEL_4;
  v10 = Win32AllocPool(a4[2], 0x626B4852u);
  *((_QWORD *)v8 + 55) = v10;
  if ( !v10 )
  {
    Win32FreePool((__int64)v8);
LABEL_4:
    IsButtonDevice = -1073741801;
    goto LABEL_22;
  }
  v28 = 0;
  *(_QWORD *)(a2 + 488) = v8;
  IsButtonDevice = rimContainsCustomHidKeyboardUsages(a3, a4, &v28);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  if ( !v28 )
  {
    *((_DWORD *)v8 + 93) = 1;
    IsButtonDevice = rimHidKeyboardIsButtonDevice(a3, a4);
    if ( IsButtonDevice >= 0 )
      goto LABEL_15;
LABEL_22:
    v21 = *(_QWORD **)(a2 + 488);
    if ( v21 )
    {
      --*(_BYTE *)(a1 + 832);
      v22 = v21[43];
      if ( v22 )
      {
        Win32FreePool(v22);
        v21[43] = 0LL;
      }
      v23 = v21[49];
      if ( v23 )
      {
        Win32FreePool(v23);
        v21[49] = 0LL;
      }
      v24 = v21[51];
      if ( v24 )
      {
        Win32FreePool(v24);
        v21[51] = 0LL;
      }
      v25 = v21[55];
      if ( v25 )
      {
        Win32FreePool(v25);
        v21[55] = 0LL;
      }
      Win32FreePool((__int64)v21);
      *(_QWORD *)(a2 + 488) = 0LL;
    }
    return (unsigned int)IsButtonDevice;
  }
  v11 = v8 + 368;
  IsButtonDevice = rimReadHidKeyboardFlags(v8 + 368);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  IsButtonDevice = rimValidateCustomHidKeyboardUsages(v12, a2, a3, a4);
  if ( IsButtonDevice < 0 )
    goto LABEL_22;
  *((_DWORD *)v8 + 93) = 0;
  if ( (*v11 & 0x400) == 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x14u,
      (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids);
    *v11 |= 0x400u;
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  }
  ++*((_DWORD *)v8 + 90);
LABEL_15:
  v15 = a4[23];
  *((_DWORD *)v8 + 88) = a4[23];
  v16 = (void *)Win32AllocPoolNonPaged(2 * v15, 0x626B4852u);
  *((_QWORD *)v8 + 43) = v16;
  if ( !v16 )
    goto LABEL_4;
  memset(v16, 0, 2LL * *((unsigned int *)v8 + 88));
  if ( (*((_DWORD *)v8 + 92) & 0x400) != 0 )
  {
    v17 = a4[3];
    *((_DWORD *)v8 + 100) = a4[3];
    v18 = Win32AllocPoolNonPaged(v17, 0x626B4852u);
    *((_QWORD *)v8 + 49) = v18;
    if ( !v18 )
      goto LABEL_4;
    v19 = a4[26];
    *((_DWORD *)v8 + 104) = a4[26];
    v20 = Win32AllocPoolNonPaged(2 * v19, 0x626B4852u);
    *((_QWORD *)v8 + 51) = v20;
    if ( !v20 )
      goto LABEL_4;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
  if ( (unsigned int)rimRegQueryRegistryDWord(&DestinationString, L"EnableStartOnIdle", 0LL) )
    *((_DWORD *)v8 + 108) = 1;
  return (unsigned int)IsButtonDevice;
}
