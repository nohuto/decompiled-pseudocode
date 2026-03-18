/*
 * XREFs of PiCMGetDeviceIdList @ 0x1406DF488
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     McTemplateK0d @ 0x1402A1010 (McTemplateK0d.c)
 *     McTemplateK0zzt @ 0x1402A11DC (McTemplateK0zzt.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406DF6E4 (_CmGetMatchingFilteredDeviceList.c)
 *     PiCMConvertDeviceListFilters @ 0x1406DF7E8 (PiCMConvertDeviceListFilters.c)
 *     PiCMCaptureDeviceListInputData @ 0x1406DF88C (PiCMCaptureDeviceListInputData.c)
 *     _CmGetDeviceRelationsList @ 0x14093847C (_CmGetDeviceRelationsList.c)
 */

__int64 __fastcall PiCMGetDeviceIdList(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _WORD *PoolWithTag; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // r14d
  unsigned int v16; // edi
  unsigned int v17; // r10d
  signed int DeviceRelationsList; // ebx
  int v19; // r10d
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  const wchar_t *v24; // rcx
  int v25; // [rsp+58h] [rbp-9h] BYREF
  int v26; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v27; // [rsp+60h] [rbp-1h] BYREF
  wchar_t *v28; // [rsp+68h] [rbp+7h]
  __int64 v29; // [rsp+70h] [rbp+Fh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp+17h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  PoolWithTag = 0LL;
  v25 = 0;
  v26 = 0;
  *a6 = 0;
  v13 = PiCMCaptureDeviceListInputData(a1, a2, a5, &v27);
  if ( v13 < 0 )
    goto LABEL_21;
  v15 = HIDWORD(v27);
  if ( (byte_14042BDBB & 2) != 0 )
  {
    if ( WORD2(v27) )
    {
      switch ( WORD2(v27) )
      {
        case 1u:
          v24 = L"Enum";
          break;
        case 2u:
          v24 = L"Service";
          break;
        case 4u:
          v24 = L"EjectRelations";
          break;
        case 8u:
          v24 = L"RemovalRelations";
          break;
        case 0x10u:
          v24 = L"PowerRelations";
          break;
        case 0x20u:
          v24 = L"BusRelations";
          break;
        case 0x40u:
          v24 = L"TransportRelations";
          break;
        case 0x80u:
          v24 = L"Class";
          break;
        default:
          v24 = L"Unknown";
          break;
      }
    }
    else
    {
      v24 = L"None";
    }
    McTemplateK0zzt((__int64)v24, v11, v14, v28, v24, BYTE6(v27) & 1);
  }
  if ( !a3 || a4 < 0x14 )
  {
    DeviceRelationsList = -1073741811;
LABEL_17:
    if ( DeviceRelationsList >= 0 )
    {
      v22 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v25, 0, PoolWithTag, 2 * v25, SHIDWORD(v29), a3, a4, a6);
      goto LABEL_19;
    }
    goto LABEL_27;
  }
  v16 = 0;
  if ( a4 - 20 >= 2 )
    v16 = a4 - 20;
  if ( v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x34706E50u);
    if ( !PoolWithTag )
    {
      DeviceRelationsList = -1073741670;
      goto LABEL_27;
    }
    v17 = v16 >> 1;
  }
  else
  {
    v17 = 0;
  }
  v25 = v17;
  DeviceRelationsList = PiCMConvertDeviceListFilters(v15, &v26);
  if ( DeviceRelationsList >= 0 )
  {
    v20 = (unsigned int)(unsigned __int16)v15 - 4;
    if ( (unsigned int)v20 <= 0x3C && (v21 = 0x1000000010001011LL, _bittest64(&v21, v20)) )
    {
      if ( !v28 )
      {
        DeviceRelationsList = -1073741811;
        goto LABEL_27;
      }
      DeviceRelationsList = CmGetDeviceRelationsList(
                              PiPnpRtlCtx,
                              (_DWORD)v28,
                              v26 & 0xFFFFFEFF,
                              (_DWORD)PoolWithTag,
                              v19,
                              (__int64)&v25);
      if ( DeviceRelationsList < 0 )
        goto LABEL_27;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      DeviceRelationsList = CmGetMatchingFilteredDeviceList(
                              PiPnpRtlCtx,
                              (_DWORD)v28,
                              v26,
                              (unsigned int)&PiCMMandatoryFilterCallback,
                              (__int64)&SubjectContext,
                              (__int64)PoolWithTag,
                              v25,
                              (__int64)&v25);
      SeReleaseSubjectContext(&SubjectContext);
      if ( DeviceRelationsList < 0 )
        goto LABEL_27;
    }
    if ( !v25 )
    {
      v25 = 1;
      if ( v16 < 2 )
      {
        DeviceRelationsList = -1073741789;
        goto LABEL_27;
      }
      *PoolWithTag = 0;
    }
    goto LABEL_17;
  }
LABEL_27:
  v22 = PiCMReturnBufferResultData(DeviceRelationsList, 2 * v25, 0, 0LL, 0, SHIDWORD(v29), a3, a4, a6);
LABEL_19:
  v13 = v22;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_21:
  if ( v28 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v28);
  if ( (byte_14042BDBB & 2) != 0 )
    McTemplateK0d(v12, &KMPnPEvt_CfgMgr_DeviceList_Stop, v14, v13);
  return (unsigned int)v13;
}
