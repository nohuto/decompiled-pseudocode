/*
 * XREFs of PiCMOpenClassKey @ 0x1406A7FC0
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _CmOpenInterfaceClassRegKey @ 0x14059FB44 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14059FB8C (_CmOpenInstallerClassRegKey.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 *     PiCMReleaseRegistryInputData @ 0x1406A8484 (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x1406A84B4 (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x1406A8540 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8754 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _CmCreateInterfaceClass @ 0x140705B4C (_CmCreateInterfaceClass.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140707540 (_PnpCtxOpenContextBaseKey.c)
 *     _CmCreateInstallerClass @ 0x1408F7344 (_CmCreateInstallerClass.c)
 */

__int64 __fastcall PiCMOpenClassKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *Handle)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // ecx
  int v11; // edi
  int v12; // r8d
  int v13; // edi
  int inited; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r9
  bool v21; // sf
  int InterfaceClass; // eax
  HANDLE v24; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v26[4]; // [rsp+60h] [rbp-1h] BYREF
  int v27; // [rsp+64h] [rbp+3h]
  int v28; // [rsp+68h] [rbp+7h]
  PCWSTR SourceString; // [rsp+70h] [rbp+Fh]
  unsigned int v30; // [rsp+7Ch] [rbp+1Bh]
  int v31; // [rsp+80h] [rbp+1Fh]
  int v32; // [rsp+84h] [rbp+23h]
  unsigned int v33; // [rsp+88h] [rbp+27h]

  v6 = Handle;
  Handle = 0LL;
  v24 = 0LL;
  *v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = PiCMCaptureRegistryInputData(a1, a2, a5, v26);
  if ( v11 < 0 )
    goto LABEL_19;
  if ( v27 || v32 || !a3 || a4 < 0x10 || (v13 = v28, (unsigned int)(v28 - 2) > 1) )
  {
    inited = -1073741811;
    goto LABEL_15;
  }
  if ( !SourceString )
  {
    v18 = v30;
    inited = PnpCtxOpenContextBaseKey(v10, 8 - (unsigned int)(v28 != 3), v12, v30, (__int64)&Handle);
    v21 = inited < 0;
LABEL_13:
    if ( !v21 )
    {
      LOBYTE(v20) = PreviousMode;
      inited = PiCMDuplicateRegistryHandle(Handle, v19, v18, v20, &v24);
    }
    goto LABEL_15;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited >= 0 )
  {
    inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
    if ( inited >= 0 )
    {
      v17 = v13 == 3;
      v18 = v30;
      if ( v17 )
      {
        inited = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (int)SourceString, v15, v16, v30, 0, (__int64)&Handle, 0LL);
        if ( inited != -1073741772 )
          goto LABEL_12;
        if ( v31 == 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
          {
            InterfaceClass = CmCreateInterfaceClass(
                               PiPnpRtlCtx,
                               (_DWORD)SourceString,
                               v18,
                               (unsigned int)&Handle,
                               0LL,
                               0);
LABEL_25:
            inited = InterfaceClass;
            goto LABEL_12;
          }
          goto LABEL_24;
        }
      }
      else
      {
        inited = CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v15, v16, v30, 0, (__int64)&Handle, 0LL);
        if ( inited != -1073741772 )
        {
LABEL_12:
          v21 = inited < 0;
          goto LABEL_13;
        }
        if ( v31 == 1 )
        {
          if ( (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
          {
            InterfaceClass = CmCreateInstallerClass(
                               PiPnpRtlCtx,
                               (_DWORD)SourceString,
                               v18,
                               (unsigned int)&Handle,
                               0LL,
                               0);
            goto LABEL_25;
          }
LABEL_24:
          inited = -1073741790;
        }
      }
    }
  }
LABEL_15:
  v11 = PiCMReturnHandleResultData((unsigned int)inited, v24, v33, a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( v11 < 0 || inited < 0 )
  {
    if ( v24 )
      ObCloseHandle(v24, PreviousMode);
  }
LABEL_19:
  PiCMReleaseRegistryInputData(v26);
  return (unsigned int)v11;
}
