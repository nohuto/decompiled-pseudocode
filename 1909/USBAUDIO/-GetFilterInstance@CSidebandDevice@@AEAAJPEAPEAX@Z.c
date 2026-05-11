/*
 * XREFs of ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C0009D04
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C0009F88 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0012840 (memset.c)
 */

__int64 __fastcall CSidebandDevice::GetFilterInstance(CSidebandDevice *this, void **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v7; // rdx
  signed int v8; // ebx
  unsigned __int16 v9; // r9
  PZZWSTR v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 FileAttributes; // [rsp+28h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+E0h] [rbp+67h] BYREF
  void *FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  FileHandle = 0LL;
  SymbolicLinkList = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      9u,
      0x3Eu,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
  v5 = *((_QWORD *)this + 4);
  *a2 = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(
                       &USBSIDEBANDAUDIO_KSCATEGORY_AUDIO,
                       *(PDEVICE_OBJECT *)(v5 + 32),
                       0,
                       &SymbolicLinkList);
  v8 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v9 = 63;
    goto LABEL_7;
  }
  v10 = SymbolicLinkList;
  v11 = 0LL;
  if ( SymbolicLinkList )
  {
    v12 = 512LL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v12;
    }
    while ( v12 );
    v8 = v12 == 0 ? 0xC000000D : 0;
    if ( v12 )
      v11 = 512 - v12;
    else
      v11 = 0LL;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    v7 = 0LL;
  else
    v7 = 2 * v11;
  if ( v8 >= 0 )
  {
    if ( v7 )
    {
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
      v8 = DeviceInterfaces;
      if ( DeviceInterfaces >= 0 )
      {
        *a2 = FileHandle;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 66;
LABEL_7:
        LODWORD(FileAttributes) = DeviceInterfaces;
LABEL_8:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v7,
          9u,
          v9,
          (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
          FileAttributes);
      }
    }
    else
    {
      v8 = -1073741275;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = 65;
        goto LABEL_23;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 64;
LABEL_23:
    LODWORD(FileAttributes) = v8;
    goto LABEL_8;
  }
LABEL_31:
  if ( SymbolicLinkList )
  {
    ExFreePool(SymbolicLinkList);
    SymbolicLinkList = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(FileAttributes) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      9u,
      0x43u,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      FileAttributes);
  }
  return (unsigned int)v8;
}
