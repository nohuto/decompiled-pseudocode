/*
 * XREFs of RegistryInitProductNameKey @ 0x1C002833C
 * Callers:
 *     FilterInitComponentId @ 0x1C002157C (FilterInitComponentId.c)
 * Callees:
 *     RegistryCreateMediaCategoriesKey @ 0x1C0028230 (RegistryCreateMediaCategoriesKey.c)
 */

__int64 __fastcall RegistryInitProductNameKey(const GUID *a1, void *a2, ULONG a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rbx
  struct _UNICODE_STRING GuidString; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v5 = RtlStringFromGUID(a1, &GuidString);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v5 = RegistryCreateMediaCategoriesKey(&GuidString, &KeyHandle);
      if ( v5 >= 0 )
      {
        v6 = KeyHandle;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"Name");
        v5 = ZwSetValueKey(v6, &DestinationString, 0, 1u, a2, a3);
      }
    }
  }
  RtlFreeUnicodeString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
