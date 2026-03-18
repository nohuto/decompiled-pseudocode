/*
 * XREFs of PipGenerateContainerID @ 0x140700980
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401C5BB0 (RtlCompareMemory.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 *     _CmGetDeviceRegProp @ 0x1405C699C (_CmGetDeviceRegProp.c)
 *     ExUuidCreate @ 0x1406062C0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x14065AA30 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  int v7; // ebx
  GUID *p_Guid; // rcx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  PVOID PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // edi
  __int64 i; // rdi
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-51h] BYREF
  int v19; // [rsp+54h] [rbp-4Dh] BYREF
  GUID Guid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v7 = 0;
  *a5 = 0LL;
  if ( !a3 )
  {
    p_Guid = (GUID *)(*(_QWORD *)(a1 + 16) + 664LL);
    goto LABEL_3;
  }
  if ( !a4 )
  {
    if ( a2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v14 = *(_QWORD *)(a1 + 48);
      v18 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v14,
                        a2,
                        37,
                        (__int64)&v19,
                        (__int64)SourceString,
                        (__int64)&v18,
                        0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( DeviceRegProp >= 0 && v19 == 1 && RtlCreateUnicodeString(&UnicodeString, SourceString) )
      {
        v7 = RtlGUIDFromString(&UnicodeString, &Guid);
        if ( v7 >= 0 )
        {
          for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( (GUID *)(i + 664) == &Guid || RtlCompareMemory((const void *)(i + 664), &Guid, 0x10uLL) == 16 )
              goto LABEL_27;
          }
LABEL_4:
          if ( v7 < 0 )
            return (unsigned int)v7;
          goto LABEL_5;
        }
LABEL_27:
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    v7 = ExUuidCreate(&Guid);
    if ( v7 < 0 )
      return (unsigned int)v7;
    p_Guid = &Guid;
LABEL_3:
    v7 = RtlStringFromGUIDEx(&p_Guid->Data1, (__int64)&UnicodeString, 1);
    goto LABEL_4;
  }
  if ( !RtlCreateUnicodeString(&UnicodeString, a4) )
    return (unsigned int)-1073741670;
LABEL_5:
  Buffer = UnicodeString.Buffer;
  if ( UnicodeString.Buffer )
  {
    MaximumLength = UnicodeString.MaximumLength;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength, 0x6E657050u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, Buffer, MaximumLength);
    else
      v7 = -1073741670;
    RtlFreeAnsiString(&UnicodeString);
  }
  return (unsigned int)v7;
}
