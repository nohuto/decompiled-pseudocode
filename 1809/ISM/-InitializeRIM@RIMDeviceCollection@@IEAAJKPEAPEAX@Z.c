/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18005E604
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18005DE50 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x18005DF8C (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18005E3F8 (-CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, LPHANDLE lpTargetHandle)
{
  HANDLE CurrentProcess; // rax
  char v7; // si
  const char *v8; // r9
  unsigned int LastError; // ebx
  int Buffer; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CurrentProcess = GetCurrentProcess();
  v7 = 1;
  if ( DuplicateHandle(CurrentProcess, this[5], CurrentProcess, lpTargetHandle, 0, 0, 2u) )
  {
    Buffer = RIMDeviceCollection::CreateReadBuffer((RIMDeviceCollection *)this, (const struct std::nothrow_t *)a2);
    LastError = Buffer;
    if ( Buffer >= 0 )
    {
      Buffer = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
      LastError = Buffer;
      if ( Buffer >= 0 )
      {
        LastError = 0;
        v7 = 0;
        goto LABEL_9;
      }
      v11 = 745LL;
    }
    else
    {
      v11 = 743LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Buffer);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2E1,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                  v8);
  }
LABEL_9:
  if ( v7 && this[10] )
  {
    RIMUnregisterForInput();
    CloseHandle(this[10]);
    this[10] = 0LL;
  }
  return LastError;
}
