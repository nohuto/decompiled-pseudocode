/*
 * XREFs of ?AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013C80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 */

int __stdcall ResourceManagerClientProxy::AcquireResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        bool *a10,
        struct ExecutionModel::IResourceSet *a11,
        struct ExecutionModel::IResourceSet **a12)
{
  return ResourceManagerClientProxy::AcquireResourceSetImpl(this, a2, a3, a4, a5, Sid, a7, a8, a9, 0, a10, a11, a12);
}
