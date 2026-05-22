/*
 * XREFs of ?OpenMobileButtonDriver@MobileButtonDeviceCollection@@AEAAPEAXXZ @ 0x18006616C
 * Callers:
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x180065FF8 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OpenMobileButtonDriver(MobileButtonDeviceCollection *this)
{
  WCHAR *v1; // rax
  WCHAR *v2; // rdi
  HANDLE FileW; // rbx
  const struct std::nothrow_t *v4; // rdx
  ULONG BufferLen; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+54h] [rbp+Ch]

  v7 = HIDWORD(this);
  BufferLen = 0;
  CM_Get_Device_Interface_List_SizeW(&BufferLen, &GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0LL, 0);
  if ( BufferLen == 1 )
    return -1LL;
  v1 = (WCHAR *)operator new[](saturated_mul(BufferLen, 2uLL));
  v2 = v1;
  if ( !v1 )
    return -1LL;
  CM_Get_Device_Interface_ListW(&GUID_GPIOBUTTONS_NOTIFY_INTERFACE, 0LL, v1, BufferLen, 0);
  FileW = CreateFileW(v2, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  operator delete(v2, v4);
  return (__int64)FileW;
}
