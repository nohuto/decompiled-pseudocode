/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C01209A8 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C0120AE4 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0120C20 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0065D00 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C010BA0C (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C010BB60 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C010C710 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C011D640 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        __int16 a2,
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
  __int128 v15; // xmm0
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  unsigned int v17; // eax
  __int16 v18; // dx
  __int16 v19; // r8
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 CurrentProcessWin32Process; // rax
  int v24; // eax
  struct _MCGEN_TRACE_CONTEXT *v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-D8h]
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-A8h]
  __int128 v33; // [rsp+68h] [rbp-98h]
  __int128 v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+88h] [rbp-78h]
  __int128 v36[9]; // [rsp+A0h] [rbp-60h] BYREF
  char v37; // [rsp+130h] [rbp+30h] BYREF

  v13 = 0LL;
  *(_DWORD *)&v31.Length = 0x1000000;
  v32 = *a6;
  v33 = a6[1];
  v30 = 0LL;
  v34 = a6[2];
  v15 = a6[3];
  v31.Buffer = (PWSTR)&v37;
  v35 = v15;
  memset(v36, 0, sizeof(v36));
  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    McTemplateK0(v16, &PseudoDevCreationStart, (const GUID *)&Context.Flags);
  if ( (int)RIMIDECreateDeviceInstancePath(2, a1, a2, &v31) >= 0 )
  {
    Object = 0LL;
    v17 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    if ( (int)rimFindReferencedRimObj(v17, v18, v19, (struct _LIST_ENTRY **)&Object) < 0 )
    {
      WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0x12u, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids);
    }
    else
    {
      if ( (int)RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
      {
        v20 = HIDWORD(v36[0]);
        if ( a5 )
          v20 = HIDWORD(v36[0]) | 1;
        *(_QWORD *)&v36[5] = a5;
        v21 = *((_QWORD *)gptiCurrent + 53);
        v36[1] = v32;
        DWORD2(v36[5]) = a3;
        v22 = *(_QWORD *)(v21 + 880);
        v36[2] = v33;
        *(_QWORD *)((char *)&v36[7] + 4) = v22;
        v36[3] = v34;
        v36[4] = v35;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        *(_QWORD *)&v36[8] = __PAIR64__(a9, a4);
        *((_QWORD *)&v36[8] + 1) = a10;
        HIDWORD(v36[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        HIDWORD(v36[0]) = v20 & 0xFFFFFFF9 | (2 * (a7 & 1 | (2 * (a8 & 1))));
        v24 = RIMAddInjectionDeviceOfType((char *)Handle, &v31, 2u, v36, 0, (ULONG64)&v30);
        if ( v24 < 0 )
        {
          LODWORD(v27) = v24;
          WPP_RECORDER_SF_d(gRimLog, 2u, 0x13u, 0x11u, (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids, v27);
        }
        ZwClose(Handle);
        v13 = v30;
      }
      ObfDereferenceObject(Object);
    }
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
      McTemplateK0(v25, &PseudoDevCreationStop, (const GUID *)&Context.Flags);
  }
  return v13;
}
