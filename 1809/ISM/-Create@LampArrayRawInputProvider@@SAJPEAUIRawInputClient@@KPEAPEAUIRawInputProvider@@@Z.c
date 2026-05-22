/*
 * XREFs of ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180070530
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x1800701D0 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180070A50 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x180072680 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LampArrayRawInputProvider *v8; // rax
  LampArrayRawInputProvider *v9; // rbx
  LampArrayRawInputProvider *v10; // rdi
  int v11; // eax
  HMODULE *v12; // r14
  const char *v13; // r9
  signed int LastError; // eax
  EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-50h] BYREF
  const char *v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]
  int v18; // [rsp+64h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned int)hProvider > 5 )
  {
    v16 = "Starting LampArray provider.  Either first time dwm.exe started or dwm.exe crashed and now restarting";
    v17 = 102;
    v18 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801685E9, 0LL, 0LL, 3u, &v15);
  }
  if ( !a3 )
  {
    v5 = -2147024809;
    v6 = 34LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v5);
    return v5;
  }
  v8 = (LampArrayRawInputProvider *)malloc(0x100uLL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x100uLL);
    v10 = LampArrayRawInputProvider::LampArrayRawInputProvider(v9);
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v5 = -2147024882;
    v6 = 38LL;
    goto LABEL_5;
  }
  if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0
    && (v11 = ConsumerControlManager::CreateAndInitialize(a1, v10, (struct ConsumerControlManager **)v10 + 31),
        v5 = v11,
        v11 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    v12 = (HMODULE *)((char *)v10 + 96);
    if ( GetModuleHandleExW(4u, (LPCWSTR)LampArrayRawInputProvider::WorkerThreadProcThunk, (HMODULE *)v10 + 12) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 6);
      _InterlockedExchange64(
        (volatile __int64 *)v10 + 13,
        (__int64)CreateThread(0LL, 0LL, LampArrayRawInputProvider::WorkerThreadProcThunk, v10, 0, 0LL));
      if ( *((_QWORD *)v10 + 13) )
      {
        v5 = 0;
      }
      else
      {
        LastError = GetLastError();
        v5 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v5 = LastError;
        FreeLibrary(*v12);
        *v12 = 0LL;
        LampArrayRawInputProvider::Release((ULONG_PTR)v10);
      }
    }
    else
    {
      v5 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x3F,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v13);
    }
  }
  if ( (v5 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)v5);
    LampArrayRawInputProvider::Release((ULONG_PTR)v10);
    return v5;
  }
  *a3 = v10;
  return 0LL;
}
