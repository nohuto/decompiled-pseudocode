/*
 * XREFs of ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180028EF0
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180028E40 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x1800084F0 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18001AFE8 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800ACFC4 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Initialize(LampArrayRawInputProvider *this, struct IRawInputClient *a2)
{
  HMODULE *v4; // rsi
  const char *v5; // r9
  int v7; // eax
  unsigned int v8; // ebx
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( IsEdition(6176LL) )
  {
    v7 = ConsumerControlManager::CreateAndInitialize(a2, this, (struct ConsumerControlManager **)this + 31);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  v4 = (HMODULE *)((char *)this + 96);
  if ( GetModuleHandleExW(4u, (LPCWSTR)LampArrayRawInputProvider::WorkerThreadProcThunk, (HMODULE *)this + 12) )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    _InterlockedExchange64(
      (volatile __int64 *)this + 13,
      (__int64)CreateThread(0LL, 0LL, LampArrayRawInputProvider::WorkerThreadProcThunk, this, 0, 0LL));
    if ( *((_QWORD *)this + 13) )
      return 0LL;
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    FreeLibrary(*v4);
    *v4 = 0LL;
    LampArrayRawInputProvider::Release(this);
    return v8;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x3F,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
           v5);
}
