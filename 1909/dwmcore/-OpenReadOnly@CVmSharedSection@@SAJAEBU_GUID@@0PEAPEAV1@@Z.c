/*
 * XREFs of ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x180228E98
 * Callers:
 *     _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BB250 (_anonymous_namespace_--TryOpenVmConsumerQueue.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DFAE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     LocalFree_0 @ 0x1800E96E9 (LocalFree_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??RVmMappedSectionDeleter@@QEAAXPEAE@Z @ 0x1801758E0 (--RVmMappedSectionDeleter@@QEAAXPEAE@Z.c)
 *     _anonymous_namespace_::MapSharedMemory @ 0x180228DE8 (_anonymous_namespace_--MapSharedMemory.c)
 *     ConstructVmSharedMemorySectionHostPath @ 0x18025CA18 (ConstructVmSharedMemorySectionHostPath.c)
 */

__int64 __fastcall CVmSharedSection::OpenReadOnly(
        const struct _GUID *a1,
        const struct _GUID *a2,
        struct CVmSharedSection **a3)
{
  WCHAR *v3; // rbx
  NTSTATUS v6; // edi
  PWSTR Buffer; // rcx
  int v8; // edi
  int v9; // eax
  char *v10; // rax
  HANDLE v11; // rcx
  ULONG_PTR v12; // rdx
  WCHAR *v14; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR ViewSize; // [rsp+28h] [rbp-21h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-19h] BYREF
  void **p_hObject; // [rsp+40h] [rbp-9h]
  void *SectionHandle; // [rsp+48h] [rbp-1h] BYREF
  char v19; // [rsp+50h] [rbp+7h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  HANDLE hObject; // [rsp+C8h] [rbp+7Fh] BYREF

  hObject = 0LL;
  v3 = 0LL;
  p_hObject = &hObject;
  ViewSize = 0LL;
  SectionHandle = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v14 = 0LL;
  v19 = 1;
  v6 = ConstructVmSharedMemorySectionHostPath(&Destination);
  if ( v6 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenSection(&SectionHandle, 4u, &ObjectAttributes);
  }
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
    LocalFree_0(Destination.Buffer);
  v8 = v6 | 0x10000000;
  if ( v19 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      p_hObject,
      SectionHandle);
  if ( v8 >= 0 )
  {
    v9 = anonymous_namespace_::MapSharedMemory(hObject, &ViewSize, 1u, (void **)&v14);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = (char *)DefaultHeap::Alloc(0x28uLL);
      if ( v10 )
      {
        v11 = hObject;
        hObject = 0LL;
        v12 = ViewSize;
        *(_QWORD *)v10 = v11;
        Buffer = v14;
        *(struct _GUID *)(v10 + 8) = *a1;
        *((_QWORD *)v10 + 3) = Buffer;
        *((_QWORD *)v10 + 4) = v12;
      }
      else
      {
        v3 = v14;
      }
      *a3 = (struct CVmSharedSection *)v10;
      if ( v10 )
      {
        v8 = 0;
      }
      else
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4D,
          (__int64)"onecoreuap\\windows\\dwm\\common\\comp\\vmsharedsection.cpp",
          (const char *)0x8007000ELL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"onecoreuap\\windows\\dwm\\common\\comp\\vmsharedsection.cpp",
        (const char *)(unsigned int)v9);
      v3 = v14;
    }
  }
  if ( v3 )
    VmMappedSectionDeleter::operator()((__int64)Buffer, v3);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return (unsigned int)v8;
}
