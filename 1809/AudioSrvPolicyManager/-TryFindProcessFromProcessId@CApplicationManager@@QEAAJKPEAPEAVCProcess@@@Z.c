/*
 * XREFs of ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001E1B0
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x1800092B0 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x180009380 (-GetMixedRealitySpatialAudioFormatPolicyForProcess@CWindowsPolicyManager@@UEAAJKPEAW4MixedRealit.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001C620 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x18002178C (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedReality.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::TryFindProcessFromProcessId(RTL_SRWLOCK *this, int a2, struct CProcess **a3)
{
  RTL_SRWLOCK *v3; // rdi
  _QWORD *Ptr; // r9
  __int64 v8; // rcx

  *a3 = 0LL;
  v3 = this + 15;
  AcquireSRWLockShared(this + 15);
  Ptr = this[16].Ptr;
  while ( Ptr )
  {
    v8 = Ptr[2];
    Ptr = (_QWORD *)*Ptr;
    if ( !*(_DWORD *)(v8 + 448) && *(_DWORD *)(v8 + 192) == a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a3 = (struct CProcess *)v8;
      break;
    }
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
