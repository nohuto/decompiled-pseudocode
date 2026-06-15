/*
 * XREFs of ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800188D0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D6F4 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x180017FE8 (-CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002A9E8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall GetProcessModuleNameAndAppId(HANDLE ProcessHandle, unsigned __int16 **a2, unsigned __int16 **a3)
{
  unsigned __int16 *v3; // rdi
  unsigned __int16 *v4; // r14
  char **v5; // rsi
  int v9; // eax
  signed int LastError; // eax
  int v11; // ebx
  unsigned __int16 **v12; // r8
  unsigned __int16 *v13; // rax
  unsigned __int16 *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG ProcessInformationLength; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 *v17; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v15[0] = 0LL;
  v17 = 0LL;
  if ( !ProcessHandle )
    goto LABEL_11;
  v9 = NtQueryInformationProcess(ProcessHandle, ProcessImageFileName, 0LL, 0, &ProcessInformationLength);
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741820 )
    goto LABEL_4;
  v5 = (char **)LocalAlloc(0x40u, ProcessInformationLength);
  v11 = v5 == 0LL ? 0x8007000E : 0;
  if ( !v5 )
    goto LABEL_19;
  v9 = NtQueryInformationProcess(
         ProcessHandle,
         ProcessImageFileName,
         v5,
         ProcessInformationLength,
         &ProcessInformationLength);
  if ( v9 < 0 )
  {
LABEL_4:
    RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v9);
    LastError = GetLastError();
    v11 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v11 = LastError;
    goto LABEL_19;
  }
  v11 = CoAllocStringLen(v5[1], (unsigned __int64)*((unsigned __int16 *)v5 + 1) >> 1, v15);
  if ( v11 < 0 )
    goto LABEL_18;
  v3 = v15[0];
  if ( !v15[0] )
  {
LABEL_11:
    v11 = CoAllocString(&word_18003D1D0, v15);
    if ( v11 >= 0 )
    {
      v3 = v15[0];
      goto LABEL_13;
    }
LABEL_18:
    v3 = v15[0];
    goto LABEL_19;
  }
LABEL_13:
  CallerIdentity::GetProcessAppId(ProcessHandle, &v17, v12);
  v13 = v17;
  if ( v17 )
  {
LABEL_16:
    *a2 = v3;
    v3 = 0LL;
    *a3 = v13;
    goto LABEL_19;
  }
  v11 = CoAllocString(&word_18003D1D0, &v17);
  if ( v11 >= 0 )
  {
    v13 = v17;
    goto LABEL_16;
  }
  v4 = v17;
LABEL_19:
  CoTaskMemFree(v3);
  CoTaskMemFree(v4);
  LocalFree(v5);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, v11);
    }
    AudPolicyLogError("GetProcessModuleNameAndAppId", 356, v11);
  }
  return (unsigned int)v11;
}
