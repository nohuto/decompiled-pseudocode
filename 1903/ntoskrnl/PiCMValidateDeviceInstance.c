/*
 * XREFs of PiCMValidateDeviceInstance @ 0x14071FD3C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBB44 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpOpenObjectRegKey @ 0x1405BBEC0 (_PnpOpenObjectRegKey.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceStatus @ 0x140625EA8 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1406D02A8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406D04DC (PiCMCaptureObjectInputData.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegQueryValue @ 0x1406F30B4 (_PnpCtxRegQueryValue.c)
 *     PiCMReturnBasicResultData @ 0x14071FF68 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMValidateDeviceInstance(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r12
  __int64 v11; // rcx
  int v12; // ebx
  const WCHAR *v13; // rdi
  int v14; // esi
  int v15; // ebx
  unsigned int v17; // [rsp+38h] [rbp-49h]
  int v18[2]; // [rsp+48h] [rbp-39h] BYREF
  int v19; // [rsp+50h] [rbp-31h] BYREF
  int v20; // [rsp+54h] [rbp-2Dh] BYREF
  int v21; // [rsp+58h] [rbp-29h] BYREF
  int v22; // [rsp+5Ch] [rbp-25h] BYREF
  int v23; // [rsp+60h] [rbp-21h] BYREF
  __int64 v24[5]; // [rsp+68h] [rbp-19h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  memset(v24, 0, sizeof(v24));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v10 = a6;
  *(_QWORD *)v18 = 0LL;
  LOBYTE(a6) = 1;
  *v10 = 0;
  v12 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v24);
  if ( v12 < 0 )
    goto LABEL_17;
  v13 = (const WCHAR *)v24[2];
  if ( !v24[2]
    || (v14 = HIDWORD(v24[0]), v11 = 1LL, (unsigned int)(HIDWORD(v24[0]) - 1) > 1)
    || LODWORD(v24[1]) != 1
    || HIDWORD(v24[3])
    || !a3
    || a4 < 8 )
  {
    v15 = -1073741811;
    goto LABEL_14;
  }
  v15 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v24[2], 1u, 1, 0, (__int64)v18);
  if ( v15 >= 0 )
  {
    if ( v14 == 2 && (unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
LABEL_19:
      LODWORD(a6) = 4;
      if ( (int)PnpCtxRegQueryValue(v11, *(void **)v18, L"Phantom", &v19, &v20, (unsigned int *)&a6) < 0
        || v19 != 4
        || (_DWORD)a6 != 4
        || !v20 )
      {
        goto LABEL_14;
      }
      goto LABEL_21;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v15 = PiPnpRtlApplyMandatoryFilters(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)v13,
            1,
            *(__int64 *)v18,
            &SubjectContext,
            &a6);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 >= 0 )
    {
      if ( !(_BYTE)a6 )
        goto LABEL_21;
      if ( v14 == 2 )
        goto LABEL_19;
      if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v13, *(__int64 *)v18, &v23, &v22, &v21, v17) < 0 )
LABEL_21:
        v15 = -1073741810;
    }
  }
LABEL_14:
  if ( *(_QWORD *)v18 )
    PnpCtxRegCloseKey(v11, *(void **)v18);
  v12 = PiCMReturnBasicResultData((unsigned int)v15, LODWORD(v24[4]), a3, a4, v10);
LABEL_17:
  PiCMReleaseObjectInputData((__int64)v24);
  return (unsigned int)v12;
}
