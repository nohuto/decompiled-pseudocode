/*
 * XREFs of ndisCloseIrpHandler @ 0x1C0001070
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisDummyHandler @ 0x1C0094F8C (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCloseIrpHandler(__int64 a1, _IRP *a2)
{
  __int64 v2; // rdi
  _IRP *v3; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  char v5; // bl
  _FILE_OBJECT *FileObject; // rax
  unsigned int v7; // ebp
  _BYTE *FsContext; // rbx
  KIRQL v9; // al
  KIRQL v10; // al
  int v11; // edx
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-28h]
  char v15; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = a1;
  if ( *(_BYTE *)v2 == 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = (char)a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        29,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v2,
        v14);
    }
    FileObject = CurrentStackLocation->FileObject;
    v7 = 0;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 4432));
    if ( FsContext[24] )
      --*(_DWORD *)(v2 + 3752);
    else
      --*(_DWORD *)(v2 + 3676);
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 4432), v9);
    ExFreePoolWithTag(FsContext, 0);
    ndisReferencePackage((__int64)&ndisPkgs);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
    --*(_DWORD *)(v2 + 1800);
    *(_QWORD *)(v2 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v10);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    ndisDereferenceMiniport(v2);
    if ( (*(_DWORD *)(v2 + 124) & 0x2000) != 0 )
    {
      v13 = *(_QWORD *)(v2 + 3984);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD))(v13 + 40))(*(_QWORD *)(v13 + 8));
    }
    v3->IoStatus.Status = 0;
    IofCompleteRequest(v3, 2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        11,
        30,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v2,
        (char)v3);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = (char)a2;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        28,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v2,
        v15);
    }
    return (unsigned int)ndisDummyHandler(v5);
  }
  return v7;
}
