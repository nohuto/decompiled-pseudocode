/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01E08F8
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01DF570 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01E07F0 (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *DeviceInfo; // rsi
  HANDLE *v7; // r14
  unsigned __int64 v8; // xmm0_8
  struct tagRECT v9; // xmm6
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  HANDLE v13; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A9h] BYREF
  struct tagRECT v16; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v17[18]; // [rsp+58h] [rbp-89h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  DeviceInfo = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  v7 = (HANDLE *)(a3 + 88);
  if ( (int)CHidInput::GetKernelHandleToRimObj(gpHidInput, (void **)(a3 + 88)) >= 0 )
  {
    v8 = _mm_srli_si128(*(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v16), 8).m128i_u64[0];
    v16 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    v9 = v16;
    _UpdateReportDescriptor(&v16, 3937 * ((int)v8 / 1000) / 0x64u, 3937 * (SHIDWORD(v8) / 1000) / 0x64u);
    memset(v17, 0, sizeof(v17));
    LODWORD(v17[1]) = 498;
    v17[0] = &unk_1C0323980;
    v17[10] = 0LL;
    *(struct tagRECT *)((char *)&v17[11] + 4) = v9;
    LODWORD(v17[11]) = a1;
    HIDWORD(v17[13]) = (int)v8 / 1000;
    LODWORD(v17[14]) = SHIDWORD(v8) / 1000;
    *(_QWORD *)((char *)&v17[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v11, v10) + 872);
    HIDWORD(v17[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v17[14] + 4), v12) + 12) & 0x80000000;
    v13 = *v7;
    LODWORD(v17[16]) = a2;
    if ( (int)RIMAddInjectionDeviceOfType(v13, &DestinationString, 2LL, v17, 0, a3 + 96) < 0 )
    {
      ZwClose(*v7);
      *v7 = 0LL;
      *(_QWORD *)(a3 + 96) = 0LL;
    }
    else
    {
      DeviceInfo = CBaseInput::FindDeviceInfo(gpHidInput, *(void **)(a3 + 96), 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
