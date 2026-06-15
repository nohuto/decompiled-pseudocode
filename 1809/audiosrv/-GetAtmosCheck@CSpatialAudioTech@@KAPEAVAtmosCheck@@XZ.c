/*
 * XREFs of ?GetAtmosCheck@CSpatialAudioTech@@KAPEAVAtmosCheck@@XZ @ 0x180054608
 * Callers:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x1800545C0 (--0CSpatialAudioTech@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ??$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x180054A44 (--$Make@VAtmosCheck@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct AtmosCheck *CSpatialAudioTech::GetAtmosCheck(void)
{
  unsigned int v0; // eax
  AtmosCheck *v1; // rbx
  __int64 *v3; // rax
  AtmosCheck *v4; // rcx
  AtmosCheck *v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+50h] [rbp+18h]

  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  v7 = &CSpatialAudioTech::s_atmosLock;
  v0 = CSpatialAudioTech::s_uAtmosRefCount + 1;
  CSpatialAudioTech::s_uAtmosRefCount = v0;
  if ( v0 == 1 )
  {
    v3 = (__int64 *)Microsoft::WRL::Details::Make<AtmosCheck,>(&v6);
    v4 = 0LL;
    if ( &v5 != (AtmosCheck **)v3 )
    {
      v4 = (AtmosCheck *)*v3;
      *v3 = 0LL;
    }
    v5 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_spAtmosCheck = v4;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v5);
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v6);
    v1 = CSpatialAudioTech::s_spAtmosCheck;
    if ( CSpatialAudioTech::s_spAtmosCheck )
    {
      if ( (int)AtmosCheck::Initialize(CSpatialAudioTech::s_spAtmosCheck) < 0 )
      {
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&CSpatialAudioTech::s_spAtmosCheck);
        CSpatialAudioTech::s_uAtmosRefCount = 0;
      }
      v1 = CSpatialAudioTech::s_spAtmosCheck;
    }
  }
  else
  {
    v1 = CSpatialAudioTech::s_spAtmosCheck;
    CSpatialAudioTech::s_uAtmosRefCount = CSpatialAudioTech::s_spAtmosCheck != 0LL ? v0 : 0;
  }
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  return v1;
}
