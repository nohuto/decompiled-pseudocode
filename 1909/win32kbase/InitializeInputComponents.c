/*
 * XREFs of InitializeInputComponents @ 0x1C00A90D8
 * Callers:
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C00A91B0 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     _anonymous_namespace_::CFrameIdGenerator::Initialize @ 0x1C00A94FC (_anonymous_namespace_--CFrameIdGenerator--Initialize.c)
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C00A954C (-Initialize@CInputConfig@@SAJXZ.c)
 *     ?Initialize@CInputThread@@SAJXZ @ 0x1C00A9650 (-Initialize@CInputThread@@SAJXZ.c)
 *     ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C00A96B4 (-Initialize@CForegroundInfo@@SAJXZ.c)
 *     ?Initialize@CCursorClip@@SAJXZ @ 0x1C00A9914 (-Initialize@CCursorClip@@SAJXZ.c)
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C00A9D44 (--0CInputGlobals@@AEAA@XZ.c)
 *     ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C00A9DC4 (-Initialize@CDeviceIdentity@@SAJXZ.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C00A9E4C (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C0181C48 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

__int64 InitializeInputComponents()
{
  __int64 result; // rax
  CInputGlobals *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rax

  result = InputExtensibilityCallout::Initialize();
  if ( (int)result >= 0 )
  {
    result = CDeviceIdentity::Initialize();
    if ( (int)result >= 0 )
    {
      v1 = (CInputGlobals *)Win32AllocPoolZInit(0x70uLL, 1919964227LL);
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
                result = anonymous_namespace_::CFrameIdGenerator::Initialize(v3, v2);
                if ( (int)result >= 0 )
                {
                  result = CInputSystemMetrics::Initialize();
                  if ( (int)result >= 0 )
                  {
                    if ( isChildPartition() )
                    {
                      Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
                      *((_QWORD *)Instance + 1) = Instance;
                      *(_QWORD *)Instance = Instance;
                    }
                    InputObjectMap::s_hashTable = 0;
                    qword_1C02157D0 = 0LL;
                    dword_1C02157CC = 0;
                    InputObjectMap::s_hashTableLock = 0LL;
                    return 0LL;
                  }
                }
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
