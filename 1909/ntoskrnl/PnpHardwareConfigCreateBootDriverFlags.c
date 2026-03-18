/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x140755074
 * Callers:
 *     IopMarkBootPartition @ 0x1409F5470 (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401C0D30 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x1405C37B4 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1405C3B48 (_SysCtxRegOpenKey.c)
 *     _RegRtlSetValue @ 0x14071A884 (_RegRtlSetValue.c)
 *     PipHardwareConfigOpenKey @ 0x140755338 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  _DWORD *v2; // rdi
  int v4; // ebx
  _DWORD *OutputBuffer; // rax
  __int64 v6; // rcx
  unsigned int v7; // ecx
  int v8; // eax
  int v10; // ecx
  unsigned int v11; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+5Ch] [rbp-5h] BYREF
  unsigned int v13; // [rsp+60h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+7h] BYREF
  int v15; // [rsp+70h] [rbp+Fh] BYREF
  int v16; // [rsp+74h] [rbp+13h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+27h] BYREF
  __int64 InputBuffer; // [rsp+98h] [rbp+37h] BYREF
  int v21; // [rsp+A0h] [rbp+3Fh]

  NumberOfBytes = 0LL;
  v15 = 0;
  v2 = 0LL;
  v13 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  InputBuffer = 0LL;
  v21 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v4 = PipHardwareConfigOpenKey(a1, 131097LL, &KeyHandle);
  if ( v4 >= 0 )
  {
    v12 = 4;
    v4 = RegRtlQueryValue(KeyHandle, L"BootDriverFlags", &v16, &v15, &v12);
    if ( v4 == -1073741772 )
    {
      v21 = 0;
      v4 = ZwDeviceIoControlFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, &NumberOfBytes, 8u);
      if ( v4 >= 0 )
      {
        OutputBuffer = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x6E697050u);
        v2 = OutputBuffer;
        if ( !OutputBuffer )
        {
          v4 = -1073741670;
          goto LABEL_24;
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
          goto LABEL_24;
        v6 = *(_QWORD *)&PiPnpRtlCtx ? *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL) : 0LL;
        v4 = SysCtxRegOpenKey(v6, 2147483650LL, (__int64)L"System\\CurrentControlSet\\Control", 0, 1u, (__int64)&Handle);
        if ( v4 < 0 )
          goto LABEL_24;
        v12 = 4;
        v4 = RegRtlQueryValue(Handle, L"BootDriverFlags", &v16, &v13, &v12);
        if ( v4 < 0 )
          goto LABEL_24;
        v7 = v13 & 0xFFFFFFE3;
        v11 = v13 & 0xFFFFFFE3;
        v8 = v2[7];
        if ( v8 <= 0 )
          goto LABEL_22;
        if ( v8 <= 3 )
          goto LABEL_23;
        switch ( v8 )
        {
          case 7:
            v10 = v7 | 0x14;
            break;
          case 11:
            goto LABEL_23;
          case 12:
            v10 = v7 | 8;
            break;
          default:
            if ( v8 <= 14 )
            {
LABEL_22:
              v11 = v13;
              goto LABEL_23;
            }
            if ( v8 > 16 )
            {
              if ( ((v8 - 17) & 0xFFFFFFFD) != 0 )
                goto LABEL_22;
LABEL_23:
              v4 = RegRtlSetValue(KeyHandle, L"BootDriverFlags", 4u, &v11, 4u);
              goto LABEL_24;
            }
            v10 = v13;
            break;
        }
        v11 = v10;
        goto LABEL_23;
      }
    }
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v4;
}
