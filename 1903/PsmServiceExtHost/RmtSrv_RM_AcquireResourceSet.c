/*
 * XREFs of RmtSrv_RM_AcquireResourceSet @ 0x180061760
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x18006199C (-Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGP.c)
 */

int __fastcall RmtSrv_RM_AcquireResourceSet(
        void *a1,
        struct RmResourceSetInfo *a2,
        unsigned __int8 a3,
        const unsigned __int16 *a4,
        unsigned __int8 *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        int a10,
        int *a11,
        int a12,
        unsigned __int64 *a13)
{
  unsigned int v14; // [rsp+50h] [rbp-28h]
  unsigned __int64 v15; // [rsp+60h] [rbp-18h]

  return ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
           g_pProxy,
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           v14,
           a11,
           v15,
           a13);
}
