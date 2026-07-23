/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x140839C90
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x1405C86D0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140837718 (PiCMCaptureRegisterInterfaceInputData.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  unsigned int v9; // ebx
  _WORD *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  signed int v13; // r10d
  unsigned int v14; // edx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  wchar_t *v19; // rsi
  const wchar_t *v20; // r14
  int v21; // eax
  __int64 v22; // rbx
  _WORD *v23; // [rsp+58h] [rbp-31h] BYREF
  char v24[4]; // [rsp+60h] [rbp-29h] BYREF
  int v25; // [rsp+64h] [rbp-25h]
  int v26[4]; // [rsp+68h] [rbp-21h] BYREF
  wchar_t *v27; // [rsp+78h] [rbp-11h]
  wchar_t *v28; // [rsp+88h] [rbp-1h]
  unsigned int v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+94h] [rbp+Bh]

  v6 = a6;
  v23 = 0LL;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, v24);
  if ( v11 < 0 )
    goto LABEL_8;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v13 = -1073741790;
LABEL_4:
    v14 = 0;
LABEL_5:
    v15 = PiCMReturnBufferResultData(v13, v14, 0, 0LL, 0, v30, a3, a4, a6);
    goto LABEL_6;
  }
  v19 = v27;
  if ( !v27 || v25 )
  {
    v13 = -1073741811;
  }
  else
  {
    v20 = v28;
    if ( v28 && v29 < 2 || !a3 || a4 < 0x14 )
    {
      v13 = -1073741811;
      goto LABEL_4;
    }
    if ( a4 - 20 < 2 )
    {
      v13 = -1073741811;
      goto LABEL_4;
    }
    v13 = CmValidateDeviceName(v12, v27);
    if ( v13 >= 0 )
    {
      v21 = IopRegisterDeviceInterface(v19, v26, v20, 1, (PVOID *)&v23, 0LL);
      v10 = v23;
      v13 = v21;
      if ( v21 >= 0 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( v23[v22] );
        v9 = v22 + 1;
        if ( 2 * (unsigned __int64)v9 > a4 - 20 )
        {
          v13 = -1073741789;
          v14 = 2 * v9;
          goto LABEL_5;
        }
      }
    }
    v6 = a6;
  }
  v14 = 2 * v9;
  if ( v13 < 0 )
    goto LABEL_5;
  v15 = PiCMReturnBufferResultData(v13, v14, 0, v10, v14, v30, a3, a4, v6);
LABEL_6:
  v11 = v15;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( v27 )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, v27);
  if ( v28 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v28);
  return (unsigned int)v11;
}
