/*
 * XREFs of WmipTranslateFileHandle @ 0x1408B5508
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14071EC98 (WmipGetGuidObjectInstanceInfo.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 */

__int64 __fastcall WmipTranslateFileHandle(__int64 a1, unsigned int *a2)
{
  void *v4; // rcx
  int FilePDO; // ebx
  unsigned __int16 Length; // r12
  unsigned int v7; // edi
  wchar_t *Buffer; // rdx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  PVOID v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = *(void **)a1;
  UnicodeString.Buffer = 0LL;
  FilePDO = WmipGetFilePDO(v4, 1, &v13);
  if ( FilePDO < 0 )
    return (unsigned int)FilePDO;
  FilePDO = ObReferenceObjectByHandle(*(HANDLE *)(a1 + 8), 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( FilePDO >= 0 )
  {
    FilePDO = WmipGetGuidObjectInstanceInfo((__int64)Object, (ULONG_PTR)v13, &UnicodeString, &v11);
    if ( FilePDO < 0 )
    {
LABEL_12:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_14;
    }
    Length = UnicodeString.Length;
    v7 = UnicodeString.Length + 26;
    if ( *a2 >= v7 )
    {
      Buffer = UnicodeString.Buffer;
      *(_DWORD *)(a1 + 16) = v11;
      *(_WORD *)(a1 + 20) = Length + 4;
      memmove((void *)(a1 + 22), Buffer, Length);
      *a2 = v7;
      *(_DWORD *)(a1 + 2 * ((unsigned __int64)Length >> 1) + 22) = 0;
    }
    else
    {
      if ( *a2 < 4 )
      {
        FilePDO = -1073741823;
        goto LABEL_10;
      }
      *(_DWORD *)a1 = v7;
      *a2 = 4;
    }
    FilePDO = 0;
LABEL_10:
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    goto LABEL_12;
  }
LABEL_14:
  if ( v13 )
    ObfDereferenceObject(v13);
  return (unsigned int)FilePDO;
}
