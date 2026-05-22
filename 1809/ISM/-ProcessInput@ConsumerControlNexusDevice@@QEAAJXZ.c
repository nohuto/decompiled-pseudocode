/*
 * XREFs of ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x180077D40
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x180072B94 (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x18006F530 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x180077C34 (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 *     ?ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z @ 0x18007E170 (-ParseValue@HidChannelValueInfo@@QEAAJ_KPEBEPEAH@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ConsumerControlNexusDevice::ProcessInput(ConsumerControlNexusDevice *this)
{
  char *v2; // rax
  const unsigned __int8 *i; // rbx
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rax
  HidChannelValueInfo *v7; // r15
  int v8; // eax
  bool *v9; // r11
  int v10; // edi
  char v11; // r12
  unsigned __int64 v12; // rcx
  const struct std::nothrow_t *v13; // rdx
  void *v14; // rax
  __int64 v15; // r8
  const char *v16; // r9
  __int64 *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  const struct std::nothrow_t *v22; // rdx
  int v24; // eax
  unsigned int v25; // ebx
  int v26[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-C8h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h]
  int v30[4]; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v31; // [rsp+68h] [rbp-A0h]
  int v32; // [rsp+70h] [rbp-98h]
  __int16 v33; // [rsp+7Ch] [rbp-8Ch]
  __int16 v34; // [rsp+9Eh] [rbp-6Ah]
  __int64 v35; // [rsp+1A8h] [rbp+A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B8h] [rbp+B0h] BYREF
  const char *v37; // [rsp+1D8h] [rbp+D0h]
  int v38; // [rsp+1E0h] [rbp+D8h]
  int v39; // [rsp+1E4h] [rbp+DCh]
  int *v40; // [rsp+1E8h] [rbp+E0h]
  int v41; // [rsp+1F0h] [rbp+E8h]
  int v42; // [rsp+1F4h] [rbp+ECh]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v29 = -2LL;
  v2 = (char *)this + 48;
  for ( i = (const unsigned __int8 *)*((_QWORD *)this + 6);
        i != (const unsigned __int8 *)v2;
        i = *(const unsigned __int8 **)i )
  {
    if ( !*((_DWORD *)i + 14) && *((_QWORD *)i + 8) > 1uLL )
    {
      v4 = operator new[](*((unsigned int *)this + 10), (const struct std::nothrow_t *)&std::nothrow);
      v5 = v4;
      if ( !v4 )
      {
        v10 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x134,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
          (const char *)0x8007000ELL);
        return (unsigned int)v10;
      }
      memset_0(v4, 0, *((unsigned int *)this + 10));
      v6 = *((_QWORD *)i + 8);
      v27 = v6;
      v7 = (HidChannelValueInfo *)*((_QWORD *)this + 4);
      if ( *((_DWORD *)this + 10) )
      {
        while ( 1 )
        {
          v26[1] = 0;
          v8 = HidChannelValueInfo::ParseValue(v7, v6, i + 80, &v26[1]);
          v10 = v8;
          if ( v8 < 0 )
            break;
          *v9 = v26[1] == *((_DWORD *)v7 + 16);
          v7 = (HidChannelValueInfo *)((char *)v7 + 72);
          v6 = v27;
          if ( v9 + 1 - v5 >= (unsigned __int64)*((unsigned int *)this + 10) )
            goto LABEL_9;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
          (const char *)(unsigned int)v8);
      }
      else
      {
LABEL_9:
        v10 = 0;
      }
      if ( v10 < 0 )
      {
        v21 = 311LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
          (const char *)(unsigned int)v10);
        operator delete(v5, v22);
        return (unsigned int)v10;
      }
      v11 = 0;
      v12 = 0LL;
      v13 = (const struct std::nothrow_t *)*((unsigned int *)this + 10);
      if ( *((_DWORD *)this + 10) )
      {
        do
          v11 |= v5[v12++] != 0;
        while ( v12 < (unsigned __int64)v13 );
      }
      if ( v11 != *((_BYTE *)this + 104) )
      {
        if ( (unsigned int)hProvider > 5 )
        {
          v37 = "NexusButton on ConsumerControl pressed/released";
          v38 = 48;
          v39 = 0;
          LOBYTE(v26[0]) = v11;
          v40 = v26;
          v41 = 1;
          v42 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180168678, 0LL, 0LL, 4u, &pData);
        }
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v30, 0, 0x158uLL);
        v32 = 344;
        v30[0] = 4;
        v30[1] = **((_DWORD **)this + 16);
        v30[2] = GetTickCount();
        v31 = PerformanceCount;
        v35 = 0x6B6579626F617264LL;
        v33 = 7;
        v34 = 65 - (v11 != 0);
        v14 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
        v17 = (__int64 *)v14;
        if ( v14 )
        {
          *(_QWORD *)v14 = 0LL;
          VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
            (void **)v14 + 1,
            v30,
            v15,
            v16);
        }
        else
        {
          v17 = 0LL;
        }
        if ( v17 )
        {
          v18 = *v17;
          v19 = *((_QWORD *)this + 14);
          if ( *v17 != v19 )
          {
            if ( v19 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*((_QWORD *)this + 14));
              v18 = *v17;
            }
            *v17 = v19;
            if ( v18 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 15) + 128LL))(
                  *((_QWORD *)this + 15),
                  ConsumerControlNexusDevice::NotifyInputReportCallback,
                  v17,
                  4LL);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1EC,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
              (const char *)(unsigned int)v20);
            JUMPOUT(0x180078131LL);
          }
          v10 = 0;
        }
        else
        {
          v10 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E5,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
            (const char *)0x8007000ELL);
        }
        if ( v10 < 0 )
        {
          v21 = 339LL;
          goto LABEL_35;
        }
        *((_BYTE *)this + 104) = v11;
      }
      operator delete(v5, v13);
      v2 = (char *)this + 48;
    }
  }
  v24 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  v25 = v24;
  if ( v24 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v24);
  return v25;
}
