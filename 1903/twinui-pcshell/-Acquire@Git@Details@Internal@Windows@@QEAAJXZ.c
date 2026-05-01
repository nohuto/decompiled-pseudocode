/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18010F750
 * Callers:
 *     ?Initialize@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180113B20 (-Initialize@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XW.c)
 *     ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x1801411C0 (--0GitPtr@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180146164 (-Initialize@-$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJP.c)
 *     ?Initialize@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Z @ 0x1801F3AD0 (-Initialize@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Interna.c)
 *     ?Initialize@?$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUITreeNode@ComposableShell@Internal@Windows@@@Z @ 0x180210240 (-Initialize@-$GitStorageType@UITreeNode@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJP.c)
 *     ?Initialize@?$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180264470 (-Initialize@-$GitStorageType@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@detail@XWinRT@@Q.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  void *v2; // rcx
  LPVOID v3; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  if ( qword_18059A2A8 )
  {
    v1 = 0;
    _InterlockedIncrement(&Windows::Internal::Details::_git);
  }
  else
  {
    ppv = 0LL;
    v1 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v1 >= 0 )
    {
      v2 = ppv;
      if ( !_InterlockedCompareExchange64(&qword_18059A2A8, (signed __int64)ppv, 0LL) )
        v2 = 0LL;
      ppv = v2;
      _InterlockedIncrement(&Windows::Internal::Details::_git);
    }
    v3 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return (unsigned int)v1;
}
