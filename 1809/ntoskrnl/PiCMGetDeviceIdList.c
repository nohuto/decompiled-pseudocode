/*
 * XREFs of PiCMGetDeviceIdList @ 0x1406BC914
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     McTemplateK0d @ 0x14028AE70 (McTemplateK0d.c)
 *     McTemplateK0zzt @ 0x14028B03C (McTemplateK0zzt.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406BCB4C (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x1406BCC50 (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406BCCF8 (PiCMCaptureDeviceListInputData.c)
 *     _CmGetDeviceRelationsList @ 0x1408FBADC (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  _WORD *PoolWithTag; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r14d
  unsigned int v15; // edi
  unsigned int v16; // r10d
  signed int DeviceRelationsList; // ebx
  int v18; // r10d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  const wchar_t *v23; // rcx
  int v24; // [rsp+58h] [rbp-9h] BYREF
  int v25; // [rsp+5Ch] [rbp-5h] BYREF
  _BYTE v26[4]; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v27; // [rsp+64h] [rbp+3h]
  wchar_t *v28; // [rsp+68h] [rbp+7h]
  int v29; // [rsp+74h] [rbp+13h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+17h] BYREF

  v6 = a6;
  v24 = 0;
  v25 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v12 = PiCMCaptureDeviceListInputData(a1, a2, a5, v26);
  if ( v12 < 0 )
    goto LABEL_22;
  v14 = v27;
  if ( (byte_140406847 & 2) != 0 )
  {
    if ( (_WORD)v27 )
    {
      switch ( (unsigned __int16)v27 )
      {
        case 1u:
          v23 = L"Enum";
          break;
        case 2u:
          v23 = L"Service";
          break;
        case 4u:
          v23 = L"EjectRelations";
          break;
        case 8u:
          v23 = L"RemovalRelations";
          break;
        case 0x10u:
          v23 = L"PowerRelations";
          break;
        case 0x20u:
          v23 = L"BusRelations";
          break;
        case 0x40u:
          v23 = L"TransportRelations";
          break;
        case 0x80u:
          v23 = L"Class";
          break;
        default:
          v23 = L"Unknown";
          break;
      }
    }
    else
    {
      v23 = L"None";
    }
    McTemplateK0zzt((__int64)v23, v10, v13, v28, v23, BYTE2(v27) & 1);
  }
  if ( a3 && a4 >= 0x14 )
  {
    v15 = 0;
    if ( a4 - 20 >= 2 )
      v15 = a4 - 20;
    if ( v15 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
      if ( !PoolWithTag )
      {
        DeviceRelationsList = -1073741670;
        goto LABEL_29;
      }
      v16 = v15 >> 1;
    }
    else
    {
      v16 = 0;
    }
    v24 = v16;
    DeviceRelationsList = PiCMConvertDeviceListFilters(v14, &v25);
    if ( DeviceRelationsList < 0 )
      goto LABEL_29;
    v19 = (unsigned int)(unsigned __int16)v14 - 4;
    if ( (unsigned int)v19 <= 0x3C && (v20 = 0x1000000010001011LL, _bittest64(&v20, v19)) )
    {
      if ( !v28 )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_29;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              (_DWORD)v28,
                              v25 & 0xFFFFFEFF,
                              (_DWORD)PoolWithTag,
                              v18,
                              (__int64)&v24);
      if ( DeviceRelationsList < 0 )
        goto LABEL_29;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              (_DWORD)v28,
                              v25,
                              (unsigned int)&PiCMMandatoryFilterCallback,
                              (__int64)&SubjectContext,
                              (__int64)PoolWithTag,
                              v24,
                              (__int64)&v24);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DeviceRelationsList < 0 )
      {
LABEL_17:
        v6 = a6;
        goto LABEL_18;
      }
    }
    if ( !v24 )
    {
      v24 = 1;
      if ( v15 < 2 )
      {
        DeviceRelationsList = -1073741789;
        goto LABEL_29;
      }
      *PoolWithTag = 0;
    }
    goto LABEL_17;
  }
  DeviceRelationsList = -1073741811;
LABEL_18:
  if ( DeviceRelationsList >= 0 )
  {
    v21 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v24, 0, PoolWithTag, 2 * v24, v29, a3, a4, v6);
    goto LABEL_20;
  }
LABEL_29:
  v21 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v24, 0, 0LL, 0, v29, a3, a4, a6);
LABEL_20:
  v12 = v21;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_22:
  if ( v28 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v28);
  if ( (byte_140406847 & 2) != 0 )
    McTemplateK0d(v11, &KMPnPEvt_CfgMgr_DeviceList_Stop, v13, v12);
  return (unsigned int)v12;
}
