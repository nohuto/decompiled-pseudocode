/*
 * XREFs of ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800B0B84
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800AD7B0 (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059C10 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800B09D4 (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800B0E6C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::ProcessInput(ConsumerControlNexusDevice *this)
{
  char *v1; // r12
  char *i; // rbx
  size_t v4; // rax
  USHORT *v5; // rax
  USHORT *v6; // rdi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r9
  NTSTATUS Usages; // eax
  const struct std::nothrow_t *v9; // rdx
  unsigned __int8 v10; // r14
  unsigned __int64 j; // rax
  _DWORD *v12; // rax
  int v13; // eax
  unsigned int v14; // r15d
  const struct std::nothrow_t *v15; // rdx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned __int8 v19; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UsageLength; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+68h] [rbp-98h]
  __int16 v25; // [rsp+74h] [rbp-8Ch]
  __int16 v26; // [rsp+96h] [rbp-6Ah]
  __int64 v27; // [rsp+1A0h] [rbp+A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  const char *v29; // [rsp+1D0h] [rbp+D0h]
  int v30; // [rsp+1D8h] [rbp+D8h]
  int v31; // [rsp+1DCh] [rbp+DCh]
  char *v32; // [rsp+1E0h] [rbp+E0h]
  int v33; // [rsp+1E8h] [rbp+E8h]
  int v34; // [rsp+1ECh] [rbp+ECh]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v1 = (char *)this + 48;
  for ( i = (char *)*((_QWORD *)this + 6); i != v1; i = *(char **)i )
  {
    if ( !*((_DWORD *)i + 14) && *((_QWORD *)i + 8) > 1uLL )
    {
      v4 = 2LL * *((unsigned __int16 *)this + 20);
      if ( !is_mul_ok(*((unsigned __int16 *)this + 20), 2uLL) )
        v4 = -1LL;
      v5 = (USHORT *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      if ( !v5 )
      {
        v17 = -2147024882;
        v18 = 215LL;
        goto LABEL_23;
      }
      memset_0(v5, 0, 2LL * *((unsigned __int16 *)this + 20));
      PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 4);
      UsageLength = *((unsigned __int16 *)this + 20);
      Usages = HidP_GetUsages(HidP_Input, 0xCu, 0, v6, &UsageLength, PreparsedData, i + 80, *((_DWORD *)i + 16));
      if ( Usages < 0 )
      {
        v14 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0xE5,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
                (const char *)(unsigned int)Usages);
        goto LABEL_21;
      }
      v10 = 0;
      for ( j = 0LL; j < UsageLength; ++j )
      {
        v10 = v6[j] == 208;
        if ( v6[j] == 208 )
          break;
      }
      if ( v10 != *((_BYTE *)this + 104) )
      {
        if ( (unsigned int)hProvider > 5 )
        {
          v31 = 0;
          v34 = 0;
          v29 = "NexusButton on ConsumerControl pressed/released";
          v32 = (char *)&v19;
          v30 = 48;
          v19 = v10;
          v33 = 1;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D441, 0LL, 0LL, 4u, &pData);
        }
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v22, 0, 0x160uLL);
        v12 = (_DWORD *)*((_QWORD *)this + 16);
        v24 = 352;
        v22[0] = 4;
        v22[1] = *v12;
        v22[2] = GetTickCount();
        v23 = PerformanceCount;
        v27 = 0x6B6579626F617264LL;
        v25 = 7;
        v26 = (v10 ^ 1) + 64;
        v13 = ConsumerControlNexusDevice::NotifyInputReport(this, (struct InputInfo *)v22);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x107,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
            (const char *)(unsigned int)v13);
LABEL_21:
          operator delete(v6, v15);
          return v14;
        }
        *((_BYTE *)this + 104) = v10;
      }
      operator delete(v6, v9);
    }
  }
  v17 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  if ( v17 >= 0 )
    return 0LL;
  v18 = 275LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
