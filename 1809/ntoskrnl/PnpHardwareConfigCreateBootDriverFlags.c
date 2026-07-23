/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x14073D40C
 * Callers:
 *     IopMarkBootPartition @ 0x1409D7100 (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 *     PipHardwareConfigOpenKey @ 0x14073D5A8 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  _DWORD *v2; // rdi
  int v4; // ebx
  _DWORD *OutputBuffer; // rax
  __int64 v7; // rcx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+5Ch] [rbp-5h] BYREF
  int v13; // [rsp+60h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+7h] BYREF
  int v15; // [rsp+70h] [rbp+Fh] BYREF
  int v16; // [rsp+74h] [rbp+13h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+27h] BYREF
  __int64 InputBuffer; // [rsp+98h] [rbp+37h] BYREF
  int v21; // [rsp+A0h] [rbp+3Fh]

  v15 = 0;
  v2 = 0LL;
  v13 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v4 = PipHardwareConfigOpenKey(a1, 131097LL, &Handle);
  if ( v4 >= 0 )
  {
    v12 = 4;
    v4 = RegRtlQueryValue(Handle, L"BootDriverFlags", &v16, &v15, &v12);
    if ( v4 == -1073741772 )
    {
      InputBuffer = 0LL;
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      v21 = 0;
      NumberOfBytes = 0LL;
      v4 = ZwDeviceIoControlFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, &NumberOfBytes, 8u);
      if ( v4 >= 0 )
      {
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x6E697050u);
        v2 = OutputBuffer;
        if ( !OutputBuffer )
        {
          v4 = -1073741670;
          goto LABEL_4;
        }
        v4 = ZwDeviceIoControlFile(
               a2,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x2D1400u,
               &InputBuffer,
               0xCu,
               OutputBuffer,
               HIDWORD(NumberOfBytes));
        if ( v4 < 0 )
          goto LABEL_4;
        v7 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
        v4 = SysCtxRegOpenKey(
               v7,
               2147483650LL,
               (__int64)L"System\\CurrentControlSet\\Control",
               0,
               1u,
               (__int64)&KeyHandle);
        if ( v4 < 0 )
          goto LABEL_4;
        v12 = 4;
        v4 = RegRtlQueryValue(KeyHandle, L"BootDriverFlags", &v16, &v13, &v12);
        if ( v4 < 0 )
          goto LABEL_4;
        v8 = v13 & 0xFFFFFFE3;
        v11 = v13 & 0xFFFFFFE3;
        v9 = v2[7];
        if ( v9 == 7 )
        {
          v10 = v8 | 0x14;
        }
        else if ( v9 == 12 )
        {
          v10 = v8 | 8;
        }
        else
        {
          if ( (unsigned int)(v9 - 15) > 1 )
          {
LABEL_28:
            v4 = RegRtlSetValue(Handle, L"BootDriverFlags", 4u, &v11, 4u);
            goto LABEL_4;
          }
          v10 = v8 | 0x1C;
        }
        v11 = v10;
        goto LABEL_28;
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v4;
}
