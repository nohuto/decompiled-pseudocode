/*
 * XREFs of PiCMOpenClassKey @ 0x1406CE0E0
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _CmOpenInstallerClassRegKey @ 0x1405BD0C4 (_CmOpenInstallerClassRegKey.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140623E10 (_CmOpenInterfaceClassRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x140657A70 (RtlUpcaseUnicodeString.c)
 *     PiCMReleaseRegistryInputData @ 0x1406CE464 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406CE494 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406CE518 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406CE72C (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     _CmCreateInterfaceClass @ 0x14072B0F8 (_CmCreateInterfaceClass.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14072D10C (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInstallerClass @ 0x140933D44 (_CmCreateInstallerClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v10; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v12; // ecx
  int v13; // edi
  int v14; // r8d
  int v15; // edi
  int inited; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r9
  bool v23; // sf
  int InterfaceClass; // eax
  HANDLE v26; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  PCWSTR v28[7]; // [rsp+60h] [rbp-1h] BYREF

  memset(v28, 0, 0x30uLL);
  v10 = Handle;
  Handle = 0LL;
  v26 = 0LL;
  *v10 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = PiCMCaptureRegistryInputData(a1, a2, a5, v28);
  if ( v13 < 0 )
    goto LABEL_19;
  if ( HIDWORD(v28[0])
    || HIDWORD(v28[4])
    || !a3
    || a4 < 0x10
    || (v15 = (int)v28[1], (unsigned int)(LODWORD(v28[1]) - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_15;
  }
  if ( !v28[2] )
  {
    v20 = HIDWORD(v28[3]);
    inited = PnpCtxOpenContextBaseKey(
               v12,
               8 - (unsigned int)(LODWORD(v28[1]) != 3),
               v14,
               HIDWORD(v28[3]),
               (__int64)&Handle);
    v23 = inited < 0;
LABEL_13:
    if ( !v23 )
    {
      LOBYTE(v22) = PreviousMode;
      inited = PiCMDuplicateRegistryHandle(Handle, v21, v20, v22, &v26);
    }
    goto LABEL_15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v28[2]);
  if ( inited >= 0 )
  {
    inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
    if ( inited >= 0 )
    {
      v19 = v15 == 3;
      v20 = HIDWORD(v28[3]);
      if ( v19 )
      {
        inited = CmOpenInterfaceClassRegKey(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)v28[2],
                   v17,
                   v18,
                   SHIDWORD(v28[3]),
                   0,
                   (__int64)&Handle,
                   0LL);
        if ( inited != -1073741772 )
          goto LABEL_12;
        if ( LODWORD(v28[4]) == 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
          {
            InterfaceClass = CmCreateInterfaceClass(PiPnpRtlCtx, v28[2], v20, (unsigned int)&Handle, 0LL, 0);
LABEL_25:
            inited = InterfaceClass;
            goto LABEL_12;
          }
          goto LABEL_24;
        }
      }
      else
      {
        inited = CmOpenInstallerClassRegKey(
                   PiPnpRtlCtx,
                   (int)v28[2],
                   v17,
                   v18,
                   SHIDWORD(v28[3]),
                   0,
                   (__int64)&Handle,
                   0LL);
        if ( inited != -1073741772 )
        {
LABEL_12:
          v23 = inited < 0;
          goto LABEL_13;
        }
        if ( LODWORD(v28[4]) == 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
          {
            InterfaceClass = CmCreateInstallerClass(PiPnpRtlCtx, v28[2], v20, (unsigned int)&Handle, 0LL, 0);
            goto LABEL_25;
          }
LABEL_24:
          inited = -1073741790;
        }
      }
    }
  }
LABEL_15:
  v13 = PiCMReturnHandleResultData((unsigned int)inited, v26, LODWORD(v28[5]), a3, a4, v10);
  if ( Handle )
    ZwClose(Handle);
  if ( v13 < 0 || inited < 0 )
  {
    if ( v26 )
      ObCloseHandle(v26, PreviousMode);
  }
LABEL_19:
  PiCMReleaseRegistryInputData(v28);
  return (unsigned int)v13;
}
