/*
 * XREFs of ?LoadAndInitializeHeatCore@HeatProcessor@@AEAAJXZ @ 0x1800ED108
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EC974 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::LoadAndInitializeHeatCore(HeatProcessor *this)
{
  HMODULE LibraryW; // rax
  const char *v3; // r9
  HMODULE v4; // rbx
  FARPROC ProcAddress; // rbp
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LibraryW = LoadLibraryW(L"HeatCore.dll");
  v4 = LibraryW;
  if ( !LibraryW )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x126,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
             v3);
  ProcAddress = GetProcAddress(LibraryW, "InitializeHeatFramework");
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = ((__int64 (__fastcall *)(_QWORD, char *))ProcAddress)(*((_QWORD *)this + 9), (char *)this + 64);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *((_QWORD *)this + 7) = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\heatprocessor.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
