/*
 * XREFs of VrpCleanupNamespace @ 0x140841254
 * Callers:
 *     VrpJobContextDelete @ 0x140841870 (VrpJobContextDelete.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNodeList @ 0x140843CF0 (VrpDestroyNamespaceNodeList.c)
 *     VrpUnloadDifferencingHive @ 0x140847524 (VrpUnloadDifferencingHive.c)
 */

void __fastcall VrpCleanupNamespace(__int64 a1)
{
  _WORD *v2; // rbx
  __int64 v3; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  VrpDestroyNamespaceNodeList();
  while ( 1 )
  {
    v2 = *(_WORD **)(a1 + 24);
    if ( !v2 )
      break;
    v3 = *(_QWORD *)v2;
    *(_QWORD *)&String1.Length = 0LL;
    *(_QWORD *)(a1 + 24) = v3;
    String1.Buffer = v2 + 5;
    String1.MaximumLength = v2[4];
    String1.Length = String1.MaximumLength;
    VrpUnloadDifferencingHive(&String1);
    ExFreePoolWithTag(v2, 0x67655256u);
  }
}
