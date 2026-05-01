/*
 * XREFs of _RmAccessCheck@8 @ 0x1000A030
 * Callers:
 *     <none>
 * Callees:
 *     CreateResourceManagerProxy @ 0x100077AD (CreateResourceManagerProxy.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@K@Z @ 0x1000A07B (-RmAccessCheck@ResourceManagerProxy@@QAEJW4RmResourceType@@K@Z.c)
 */

int __stdcall RmAccessCheck(int a1, int a2)
{
  int v2; // esi
  int ResourceManagerProxy; // edi
  int v5; // [esp+8h] [ebp-4h]

  RtlEnterCriticalSection(&s_csProxy);
  v2 = dword_10018418;
  if ( dword_10018418 )
    goto LABEL_2;
  ResourceManagerProxy = CreateResourceManagerProxy();
  if ( ResourceManagerProxy >= 0 )
  {
    v2 = dword_10018418;
LABEL_2:
    ResourceManagerProxy = 0;
    goto LABEL_3;
  }
  v2 = v5;
LABEL_3:
  RtlLeaveCriticalSection(&s_csProxy);
  if ( ResourceManagerProxy < 0 )
    return ResourceManagerProxy;
  else
    return ResourceManagerProxy::RmAccessCheck(v2, a1, a2);
}
