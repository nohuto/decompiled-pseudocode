/*
 * XREFs of ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800732C4
 * Callers:
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x18007353C (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z @ 0x18007324C (-CancelAsyncIo@PnpDevice@@QEAAJPEAU_OVERLAPPED@@@Z.c)
 */

__int64 __fastcall PnpDevice::GetAsyncIoResult(HANDLE *this, DWORD a2, struct _OVERLAPPED *a3, unsigned __int64 *a4)
{
  signed int LastError; // ebx
  __int64 result; // rax
  DWORD v9; // eax
  DWORD v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  signed int v13; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD NumberOfBytesTransferred; // [rsp+38h] [rbp+10h] BYREF

  NumberOfBytesTransferred = a2;
  if ( a4 )
    *a4 = 0LL;
  if ( GetOverlappedResult(this[5], a3, &NumberOfBytesTransferred, 0) )
    goto LABEL_19;
  LastError = GetLastError();
  if ( LastError != 996 )
  {
    PnpDevice::CancelAsyncIo(this, a3);
    if ( LastError )
    {
      result = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        return (unsigned int)LastError;
      return result;
    }
  }
  v9 = WaitForSingleObject(a3->hEvent, 0xFFFFFFFF);
  v10 = v9;
  if ( v9 )
  {
    v11 = 1460LL;
    if ( v9 == 1460 )
    {
      v12 = 149LL;
    }
    else
    {
      PnpDevice::CancelAsyncIo(this, a3);
      v11 = v10;
      v12 = 153LL;
    }
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v12,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
             (const char *)v11);
  }
  if ( GetOverlappedResult(this[5], a3, &NumberOfBytesTransferred, 0)
    || (PnpDevice::CancelAsyncIo(this, a3), (v13 = GetLastError()) == 0) )
  {
LABEL_19:
    if ( a4 )
      *a4 = NumberOfBytesTransferred;
    return 0LL;
  }
  else
  {
    result = (unsigned __int16)v13 | 0x80070000;
    if ( v13 <= 0 )
      return (unsigned int)v13;
  }
  return result;
}
