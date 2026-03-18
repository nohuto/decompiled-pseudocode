/*
 * XREFs of RIMGetProductString @ 0x1C013DE8C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C009BC88 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     wcscmp_0 @ 0x1C00BE77C (wcscmp_0.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax
  size_t Information; // r8
  void *v13; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+C8h] [rbp+48h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 0x6B707352u);
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    v9 = (int)v8;
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
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 3;
          WPP_RECORDER_SF_D(
            (_DWORD)gRimLog,
            v10,
            1,
            21,
            (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids,
            Status);
        }
      }
      else if ( IoStatusBlock.Information > 0x200 )
      {
        Status = -1073741811;
      }
      else
      {
        v11 = Win32AllocPool(IoStatusBlock.Information + 2, 0x77647352u);
        *(_QWORD *)(a1 + 328) = v11;
        if ( v11 )
        {
          *(_WORD *)(v11 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v13 = *(void **)(a1 + 328);
          *(_WORD *)(a1 + 320) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 322) = Information + 2;
          memmove(v13, OutputBuffer, Information);
          if ( (int)RtlStringCbLengthW(*(const unsigned __int16 **)(a1 + 328), *(unsigned __int16 *)(a1 + 322), &v17) >= 0 )
            *(_WORD *)(a1 + 320) = v17;
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 328), L"VHidPen") )
            *(_DWORD *)(a1 + 312) |= 0x4000u;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 20, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    }
    Win32FreePool((__int64)OutputBuffer);
  }
  return Status;
}
