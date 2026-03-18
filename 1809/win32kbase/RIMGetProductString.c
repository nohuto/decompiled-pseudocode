/*
 * XREFs of RIMGetProductString @ 0x1C0117DDC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     wcscmp_0 @ 0x1C00AE91A (wcscmp_0.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     RtlStringCbLengthW @ 0x1C011A178 (RtlStringCbLengthW.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  __int64 v9; // rax
  size_t Information; // r8
  void *v11; // rcx
  __int64 OutputBufferLength; // [rsp+28h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  size_t pcbLength; // [rsp+B8h] [rbp+20h] BYREF

  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 0x6B707352u);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    if ( v8 )
    {
      v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      Status = IofCallDriver(a2, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        LODWORD(OutputBufferLength) = Status;
        WPP_RECORDER_SF_d(
          gRimLog,
          3u,
          0x14u,
          0x15u,
          (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids,
          OutputBufferLength);
      }
      else if ( IoStatusBlock.Information > 0x200 )
      {
        Status = -1073741811;
      }
      else
      {
        v9 = Win32AllocPool(IoStatusBlock.Information + 2, 0x77647352u);
        *(_QWORD *)(a1 + 320) = v9;
        if ( v9 )
        {
          *(_WORD *)(v9 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v11 = *(void **)(a1 + 320);
          *(_WORD *)(a1 + 312) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 314) = Information + 2;
          memmove(v11, OutputBuffer, Information);
          if ( RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a1 + 320), *(unsigned __int16 *)(a1 + 314), &pcbLength) >= 0 )
            *(_WORD *)(a1 + 312) = pcbLength;
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 320), L"VHidPen") )
            *(_DWORD *)(a1 + 308) |= 0x10000u;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x14u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
    }
    Win32FreePool((__int64)OutputBuffer);
  }
  return Status;
}
