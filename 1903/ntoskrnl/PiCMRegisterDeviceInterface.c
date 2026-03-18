/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x140873630
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x1405C3240 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140870E94 (PiCMCaptureRegisterInterfaceInputData.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v11; // esi
  _WORD *v12; // r14
  int v13; // edi
  __int64 v14; // rcx
  signed int v15; // r10d
  unsigned int v16; // edx
  int v17; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  wchar_t *v21; // rbx
  const wchar_t *v22; // rdi
  int v23; // eax
  __int64 v24; // rsi
  _WORD *v25; // [rsp+58h] [rbp-31h] BYREF
  const wchar_t *v26[7]; // [rsp+60h] [rbp-29h] BYREF

  v6 = a6;
  memset(v26, 0, sizeof(v26));
  *a6 = 0;
  v11 = 0;
  v25 = 0LL;
  v12 = 0LL;
  v13 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, (char *)v26);
  if ( v13 < 0 )
    goto LABEL_8;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v15 = -1073741790;
LABEL_4:
    v16 = 0;
LABEL_5:
    v17 = PiCMReturnBufferResultData(v15, v16, 0, 0LL, 0, SHIDWORD(v26[6]), a3, a4, a6);
    goto LABEL_6;
  }
  v21 = (wchar_t *)v26[3];
  if ( !v26[3] || HIDWORD(v26[0]) )
  {
    v15 = -1073741811;
  }
  else
  {
    v22 = v26[5];
    if ( v26[5] && LODWORD(v26[6]) < 2 || !a3 || a4 < 0x14 || a4 - 20 < 2 )
    {
      v15 = -1073741811;
      goto LABEL_4;
    }
    v15 = CmValidateDeviceName(v14, v26[3]);
    if ( v15 >= 0 )
    {
      v23 = IopRegisterDeviceInterface(v21, (int *)&v26[1], v22, 1, (PVOID *)&v25, 0LL);
      v12 = v25;
      v15 = v23;
      if ( v23 >= 0 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( v25[v24] );
        v11 = v24 + 1;
        if ( 2 * (unsigned __int64)v11 > a4 - 20 )
        {
          v15 = -1073741789;
          v16 = 2 * v11;
          goto LABEL_5;
        }
      }
    }
    v6 = a6;
  }
  v16 = 2 * v11;
  if ( v15 < 0 )
    goto LABEL_5;
  v17 = PiCMReturnBufferResultData(v15, v16, 0, v12, v16, SHIDWORD(v26[6]), a3, a4, v6);
LABEL_6:
  v13 = v17;
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_8:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( v26[3] )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, (void *)v26[3]);
  if ( v26[5] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)v26[5]);
  return (unsigned int)v13;
}
