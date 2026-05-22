/*
 * XREFs of ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800201EC
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800200C4 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18009A538 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ @ 0x1800202C4 (-ReadInputReportFromRIM@RIMDeviceCollection@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::InitializeRIM(HANDLE *this, unsigned int a2, void **a3)
{
  unsigned __int64 v4; // rbp
  HANDLE CurrentProcess; // rax
  char v7; // si
  const struct std::nothrow_t *v8; // rdx
  const char *v9; // r9
  HANDLE v10; // rcx
  void *v11; // rax
  int InputReportFromRIM; // eax
  unsigned int LastError; // ebx
  __int64 v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = a2;
  CurrentProcess = GetCurrentProcess();
  v7 = 1;
  if ( !DuplicateHandle(CurrentProcess, this[5], CurrentProcess, a3, 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2E9,
                  (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                  v9);
    goto LABEL_7;
  }
  v10 = this[335];
  if ( v10 )
  {
    operator delete(v10, v8);
    this[335] = 0LL;
  }
  *((_DWORD *)this + 672) = 0;
  v11 = operator new[](v4);
  this[335] = v11;
  if ( !v11 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x251,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)0x8007000ELL);
    v15 = 2147942414LL;
    v16 = 751LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v15);
    goto LABEL_7;
  }
  *((_DWORD *)this + 672) = v4;
  InputReportFromRIM = RIMDeviceCollection::ReadInputReportFromRIM((RIMDeviceCollection *)this);
  LastError = InputReportFromRIM;
  if ( InputReportFromRIM < 0 )
  {
    v15 = (unsigned int)InputReportFromRIM;
    v16 = 753LL;
    goto LABEL_12;
  }
  v7 = 0;
  LastError = 0;
LABEL_7:
  if ( v7 && this[10] )
  {
    RIMUnregisterForInput();
    CloseHandle(this[10]);
    this[10] = 0LL;
  }
  return LastError;
}
