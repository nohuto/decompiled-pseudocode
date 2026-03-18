/*
 * XREFs of InitializeInputComponents @ 0x1C012E614
 * Callers:
 *     InputInitialize @ 0x1C01315F8 (InputInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C0120268 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0120B50 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C01212CC (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C0121354 (--0CInputGlobals@@AEAA@XZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C012DBB0 (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C0131CA8 (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C01331F0 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C013359C (-Initialize@CInputThread@@SAJXZ.c)
 */

__int64 __fastcall InitializeInputComponents(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  CInputGlobals *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = InputExtensibilityCallout::Initialize(a1, a2);
  if ( (int)result >= 0 )
  {
    result = CDeviceIdentity::Initialize();
    if ( (int)result >= 0 )
    {
      v3 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL, 0x72705443u);
      if ( v3 )
        v3 = CInputGlobals::CInputGlobals(v3);
      gpInputGlobals = v3;
      if ( v3 )
      {
        result = CCursorClip::Initialize();
        if ( (int)result >= 0 )
        {
          result = CForegroundInfo::Initialize(v5, v4);
          if ( (int)result >= 0 )
          {
            result = CInputThread::Initialize();
            if ( (int)result >= 0 )
            {
              result = CInputConfig::Initialize();
              if ( (int)result >= 0 )
              {
                InputDelegation::CInputDelegationInfo::gInstance = 0uLL;
                return anonymous_namespace_::CFrameIdGenerator::Initialize();
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
