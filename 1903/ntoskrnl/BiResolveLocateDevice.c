/*
 * XREFs of BiResolveLocateDevice @ 0x14092EE3C
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x14073E4C8 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1401C0870 (ZwQueryAttributesFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BcdGetElementData @ 0x14073BD08 (BcdGetElementData.c)
 */

__int64 __fastcall BiResolveLocateDevice(HANDLE BcdObjectHandle, _DWORD *a2)
{
  __int64 v4; // r14
  const WCHAR *v5; // r14
  WCHAR *v6; // rsi
  int v7; // eax
  ULONG v8; // edx
  unsigned int ElementData; // ebx
  WCHAR *PoolWithTag; // rax
  const WCHAR *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG BufferSize; // [rsp+20h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-31h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+68h] [rbp-1h] BYREF

  memset(&FileInformation, 0, sizeof(FileInformation));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = (unsigned int)a2[6];
  *(_QWORD *)&Destination.Length = 0LL;
  v5 = (const WCHAR *)((char *)a2 + v4);
  Destination.Buffer = 0LL;
  v6 = 0LL;
  if ( *(_DWORD *)v5 != 2 )
    goto LABEL_16;
  v7 = a2[5];
  if ( !v7 )
  {
    v8 = a2[7];
    if ( (v8 & 0xF000000) == 0x2000000 )
    {
      BufferSize = 0;
      ElementData = BcdGetElementData(BcdObjectHandle, v8, 0LL, &BufferSize);
      if ( ElementData != -1073741789 )
        goto LABEL_17;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferSize, 0x4B444342u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ElementData = -1073741670;
        goto LABEL_17;
      }
      BcdGetElementData(BcdObjectHandle, a2[7], PoolWithTag, &BufferSize);
      v11 = v6;
      goto LABEL_10;
    }
LABEL_16:
    ElementData = -1073741637;
    goto LABEL_17;
  }
  if ( v7 != 1 )
    goto LABEL_16;
  v11 = (const WCHAR *)(a2 + 8);
LABEL_10:
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v5[v13 + 10] );
  do
    ++v12;
  while ( v11[v12] );
  Destination.MaximumLength = 2 * (v12 + v13 + 1);
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(2 * (v13 + v12) + 2), 0x4B444342u);
  if ( !Destination.Buffer )
  {
    ElementData = -1073741670;
    goto LABEL_19;
  }
  RtlAppendUnicodeToString(&Destination, v5 + 10);
  RtlAppendUnicodeToString(&Destination, v11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ElementData = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
LABEL_17:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
LABEL_19:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return ElementData;
}
