/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C00F37B0
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C00F5D84 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00F5EA4 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00F5FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 *     rimFindReferencedRimObj @ 0x1C00DEBE0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00DFD50 (RIMAddInjectionDeviceOfType.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00F21B0 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C00F2BC8 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int128 *a6,
        char a7,
        char a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v13; // rbx
  __int64 v15; // rcx
  int v16; // edi
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-B1h]
  PVOID Object; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v28; // [rsp+48h] [rbp-99h] BYREF
  struct _UNICODE_STRING v29; // [rsp+50h] [rbp-91h] BYREF
  __int128 v30[9]; // [rsp+68h] [rbp-79h] BYREF

  *(_QWORD *)&v29.Length = 0LL;
  v29.Buffer = 0LL;
  v13 = 0LL;
  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0(v15, &PseudoDevCreationStart, &W32kControlGuid);
  if ( (int)RIMIDECreateDeviceInstancePath(2u, a1, a2, (__int64)&v29) >= 0 )
  {
    Object = 0LL;
    if ( (int)rimFindReferencedRimObj(28, a1, a2, (struct _LIST_ENTRY **)&Object) < 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0x13u,
        (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids);
    }
    else
    {
      if ( (int)RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
      {
        v16 = HIDWORD(v30[0]);
        if ( a5 )
          v16 = HIDWORD(v30[0]) | 1;
        *(_QWORD *)&v30[5] = a5;
        DWORD2(v30[5]) = a3;
        v17 = a6[1];
        v30[1] = *a6;
        v18 = a6[2];
        v30[2] = v17;
        v19 = a6[3];
        v30[3] = v18;
        v30[4] = v19;
        v20 = *((_QWORD *)gptiCurrent + 52);
        *(_QWORD *)((char *)&v30[7] + 4) = *(_QWORD *)(v20 + 872);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
        *(_QWORD *)&v30[8] = __PAIR64__(a9, a4);
        HIDWORD(v30[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        *((_QWORD *)&v30[8] + 1) = a10;
        HIDWORD(v30[0]) = v16 & 0xFFFFFFF9 | (2 * (a7 & 1 | (2 * (a8 & 1))));
        v22 = RIMAddInjectionDeviceOfType((char *)Handle, &v29, 2, v30, 0, (ULONG64)&v28);
        if ( v22 < 0 )
        {
          LODWORD(v25) = v22;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x12u,
            0x12u,
            (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids,
            v25);
        }
        ZwClose(Handle);
        v13 = v28;
      }
      ObfDereferenceObject(Object);
    }
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0(v23, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return v13;
}
