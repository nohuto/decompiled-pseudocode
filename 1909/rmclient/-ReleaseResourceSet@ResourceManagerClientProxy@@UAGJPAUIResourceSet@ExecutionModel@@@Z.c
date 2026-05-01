/*
 * XREFs of ?ReleaseResourceSet@ResourceManagerClientProxy@@UAGJPAUIResourceSet@ExecutionModel@@@Z @ 0x10014AD0
 * Callers:
 *     <none>
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IAEJPBUIResourceSet@ExecutionModel@@AAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@@Z @ 0x100146DA (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IAEJPBUIResourceSet@ExecutionModel@@AAV-$.c)
 */

int __stdcall ResourceManagerClientProxy::ReleaseResourceSet(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExecutionModel::IResourceSet *a2)
{
  int ResourceSetMapIterator; // edi
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  EnterCriticalSection(this + 23);
  ResourceSetMapIterator = ResourceManagerClientProxy::GetResourceSetMapIterator(this, (int)a2, &v4);
  if ( ResourceSetMapIterator >= 0 )
    ResourceSetMapIterator = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 24) + 60))(
                               *(_DWORD *)(**(_DWORD **)(v4 + 24) + 60),
                               *(_DWORD *)(v4 + 24));
  LeaveCriticalSection(this + 23);
  return ResourceSetMapIterator;
}
