/*
 * XREFs of ?GetEndpointExtendedSpatialLicenseInfo@CPolicyConfig@@UEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x1800D29D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180138D68 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 */

__int64 __fastcall CPolicyConfig::GetEndpointExtendedSpatialLicenseInfo(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct ExtendedSpatialAudioEncoderInfo *a4)
{
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( a4 )
  {
    EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
    v10 = &CSpatialAudioTech::s_atmosLock;
    if ( CSpatialAudioTech::s_spAtmosCheck )
    {
      AtmosCheck::GetEndpointExtendedSpatialLicenseInfo(CSpatialAudioTech::s_spAtmosCheck, a2, a3, a4);
      LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
    }
    else
    {
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v10);
      return (unsigned int)-2147418113;
    }
  }
  else
  {
    v4 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      4765LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
  }
  return v4;
}
