/*
 * XREFs of ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x18007353C
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x18007757C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z @ 0x1800732C4 (-GetAsyncIoResult@PnpDevice@@QEAAJKPEAU_OVERLAPPED@@PEA_K@Z.c)
 */

__int64 __fastcall PnpDevice::OutputIoctl(PnpDevice *this, __int64 a2, __int64 a3, void *a4, unsigned __int64 *a5)
{
  const char *v7; // r9
  int LastError; // eax
  void *v9; // rcx
  DWORD v10; // edx
  signed int v11; // eax
  signed int v12; // ecx
  unsigned int v13; // ebx
  struct _OVERLAPPED Overlapped; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a5 = 0LL;
  Overlapped.hEvent = CreateEventW(0LL, 1, 0, 0LL);
  if ( !Overlapped.hEvent )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1A2,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
                  v7);
LABEL_13:
    v13 = LastError;
    goto LABEL_15;
  }
  v9 = (void *)*((_QWORD *)this + 5);
  memset(&Overlapped, 0, 24);
  if ( DeviceIoControl(v9, 0xB01A0u, 0LL, 0, a4, 4u, 0LL, &Overlapped) || (v11 = GetLastError()) == 0 || v11 == 997 )
  {
    v12 = 0;
  }
  else
  {
    v12 = (unsigned __int16)v11 | 0x80070000;
    if ( v11 <= 0 )
      v12 = v11;
  }
  if ( v12 >= 0 )
  {
    LastError = PnpDevice::GetAsyncIoResult((HANDLE *)this, v10, &Overlapped, a5);
    if ( LastError >= 0 )
    {
      v13 = 0;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v13 = v12;
LABEL_15:
  CloseHandle(Overlapped.hEvent);
  return v13;
}
