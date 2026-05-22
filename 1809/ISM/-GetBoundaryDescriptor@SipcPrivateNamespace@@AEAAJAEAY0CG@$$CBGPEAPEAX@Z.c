/*
 * XREFs of ?GetBoundaryDescriptor@SipcPrivateNamespace@@AEAAJAEAY0CG@$$CBGPEAPEAX@Z @ 0x1800A1848
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18009FD40 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall SipcPrivateNamespace::GetBoundaryDescriptor(SipcPrivateNamespace *this, const WCHAR *a2, void **a3)
{
  __int64 v5; // rdx
  wil::details::in1diag0 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int LastError; // ebx
  HANDLE BoundaryDescriptor; // [rsp+20h] [rbp-20h] BYREF
  _DWORD RequiredSid[4]; // [rsp+28h] [rbp-18h] BYREF

  *a3 = 0LL;
  BoundaryDescriptor = CreateBoundaryDescriptorW(a2, 0);
  if ( BoundaryDescriptor
    && (RequiredSid[2] = 0,
        RequiredSid[0] = 257,
        RequiredSid[1] = 0x1000000,
        AddSIDToBoundaryDescriptor(&BoundaryDescriptor, RequiredSid))
    && (IsWellKnownSid((char *)this + 24, WinNullSid)
     || AddSIDToBoundaryDescriptor(&BoundaryDescriptor, (char *)this + 24)) )
  {
    *a3 = BoundaryDescriptor;
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v6, v5, v7, v8);
    if ( (char *)BoundaryDescriptor - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return LastError;
  }
}
