/*
 * XREFs of ndisCloseIrpHandler @ 0x1C0009CA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisDummyHandler @ 0x1C00EE614 (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCloseIrpHandler(__int64 a1, _IRP *a2)
{
  __int64 v2; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  _FILE_OBJECT *FileObject; // rax
  unsigned int v7; // ebp
  _BYTE *FsContext; // rbx
  KIRQL v9; // al
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v13; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v2 == 17 )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(26LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v2, a2);
    FileObject = CurrentStackLocation->FileObject;
    v7 = 0;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 4472));
    if ( FsContext[24] )
      --*(_DWORD *)(v2 + 3784);
    else
      --*(_DWORD *)(v2 + 3700);
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 4472), v9);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage(&ndisPkgs);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    --*(_DWORD *)(v2 + 1800);
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v10);
    ndisDereferencePackage(&ndisPkgs);
    LOBYTE(v11) = 86;
    ndisDereferenceMiniport(v2, v11);
    if ( (*(_DWORD *)(v2 + 124) & 0x2000) != 0 )
    {
      v13 = *(_QWORD *)(v2 + 4016);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD))(v13 + 40))(*(_QWORD *)(v13 + 8));
    }
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 2);
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(27LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v2, a2);
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qq(25LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v2, a2);
    return (unsigned int)ndisDummyHandler(a1, v2, a2);
  }
  return v7;
}
