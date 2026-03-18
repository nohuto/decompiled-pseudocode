/*
 * XREFs of InitializeInputComponents @ 0x1C0007964
 * Callers:
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 * Callees:
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00079F8 (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0007A48 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C0007B40 (-Initialize@CInputThread@@SAJXZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C0007BA4 (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0007C0C (-Initialize@CCursorClip@@SAJXZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C0007D08 (--0CInputGlobals@@AEAA@XZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0007D88 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0007E60 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 */

__int64 InitializeInputComponents()
{
  __int64 result; // rax
  CInputGlobals *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  result = InputExtensibilityCallout::Initialize();
  if ( (int)result >= 0 )
  {
    result = CDeviceIdentity::Initialize();
    if ( (int)result >= 0 )
    {
      v1 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL);
      if ( v1 )
        v1 = CInputGlobals::CInputGlobals(v1);
      gpInputGlobals = v1;
      if ( v1 )
      {
        result = CCursorClip::Initialize();
        if ( (int)result >= 0 )
        {
          result = CForegroundInfo::Initialize();
          if ( (int)result >= 0 )
          {
            result = CInputThread::Initialize();
            if ( (int)result >= 0 )
            {
              result = CInputConfig::Initialize();
              if ( (int)result >= 0 )
              {
                InputDelegation::CInputDelegationInfo::gInstance = 0uLL;
                return anonymous_namespace_::CFrameIdGenerator::Initialize(v3, v2);
              }
            }
          }
        }
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
