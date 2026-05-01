/*
 * XREFs of ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IAEJPBUIResourceSet@ExecutionModel@@AAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@@Z @ 0x100146DA
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 *     ?ReleaseResourceSet@ResourceManagerClientProxy@@UAGJPAUIResourceSet@ExecutionModel@@@Z @ 0x10014AD0 (-ReleaseResourceSet@ResourceManagerClientProxy@@UAGJPAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ResourceManagerClientProxy::GetResourceSetMapIterator(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // edx
  _DWORD *v4; // ecx
  _DWORD *i; // eax

  v3 = 0;
  v4 = this + 144;
  for ( i = (_DWORD *)*v4; ; i = (_DWORD *)*i )
  {
    *a3 = i;
    if ( i == v4 )
      break;
    if ( i[6] == a2 )
      return v3;
  }
  return -2147024809;
}
