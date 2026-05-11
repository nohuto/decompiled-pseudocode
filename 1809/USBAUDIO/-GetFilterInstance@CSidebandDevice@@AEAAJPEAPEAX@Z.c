/*
 * XREFs of ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C0009884
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C0009AA0 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetFilterInstance(CSidebandDevice *this, void **a2)
{
  __int64 v4; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v6; // rdx
  signed int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  PZZWSTR v10; // rax
  __int64 v11; // rcx
  __int64 FileAttributes; // [rsp+28h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+E0h] [rbp+67h] BYREF
  void *FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF

  FileHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  SymbolicLinkList = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x3Eu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  v4 = *((_QWORD *)this + 4);
  *a2 = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(
                       &USBSIDEBANDAUDIO_KSCATEGORY_AUDIO,
                       *(PDEVICE_OBJECT *)(v4 + 32),
                       0,
                       &SymbolicLinkList);
  v7 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v8 = 63;
LABEL_5:
    LODWORD(FileAttributes) = DeviceInterfaces;
LABEL_6:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      v8,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      FileAttributes);
    goto LABEL_26;
  }
  v9 = 0LL;
  if ( SymbolicLinkList )
  {
    v10 = SymbolicLinkList;
    v6 = 512LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v6;
    }
    while ( v6 );
    v7 = v6 == 0 ? 0xC000000D : 0;
    if ( v6 )
      v9 = 512 - v6;
    else
      v9 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    v11 = 0LL;
  else
    v11 = 2 * v9;
  if ( v7 < 0 )
  {
    v8 = 64;
LABEL_20:
    LODWORD(FileAttributes) = v7;
    goto LABEL_6;
  }
  if ( !v11 )
  {
    v7 = -1073741275;
    v8 = 65;
    goto LABEL_20;
  }
  RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DeviceInterfaces = ZwCreateFile(
                       &FileHandle,
                       0xC0000000,
                       &ObjectAttributes,
                       &IoStatusBlock,
                       0LL,
                       0x80u,
                       3u,
                       3u,
                       0,
                       0LL,
                       0);
  v7 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v8 = 66;
    goto LABEL_5;
  }
  *a2 = FileHandle;
LABEL_26:
  if ( SymbolicLinkList )
  {
    ExFreePool(SymbolicLinkList);
    SymbolicLinkList = 0LL;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(FileAttributes) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      0x43u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      FileAttributes);
  }
  return (unsigned int)v7;
}
