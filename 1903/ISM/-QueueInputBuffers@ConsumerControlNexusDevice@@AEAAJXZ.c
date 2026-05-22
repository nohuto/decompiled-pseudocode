/*
 * XREFs of ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800B0E6C
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B010C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800B0B84 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::QueueInputBuffers(ConsumerControlNexusDevice *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  signed int LastError; // eax
  unsigned int v8; // ebx
  ConsumerControlNexusDevice **v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  while ( *((_QWORD *)this + 8) )
  {
    v2 = (_QWORD *)((char *)this + 48);
    v3 = (_QWORD *)*((_QWORD *)this + 6);
    if ( (ConsumerControlNexusDevice *)v3[1] != (ConsumerControlNexusDevice *)((char *)this + 48)
      || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
    {
LABEL_17:
      __fastfail(3u);
    }
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 == v2 )
      v3 = 0LL;
    else
      --*((_QWORD *)this + 8);
    v3[2] = this;
    memset_0(v3 + 3, 0, 0x20uLL);
    *((_DWORD *)v3 + 14) = 996;
    v3[8] = 0LL;
    v5 = *((_QWORD *)this + 12);
    v3[9] = v5;
    v6 = *((_QWORD *)this + 2);
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    if ( ReadFileEx(
           *(HANDLE *)(v6 + 40),
           v3 + 10,
           v5,
           (LPOVERLAPPED)(v3 + 3),
           (LPOVERLAPPED_COMPLETION_ROUTINE)ConsumerControlNexusDevice::HandleReadCompletion)
      || (LastError = GetLastError(), (v8 = LastError) == 0)
      || LastError == 997 )
    {
      v8 = 0;
    }
    else if ( LastError > 0 )
    {
      v8 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( (v8 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
        (const char *)v8);
      operator delete(v3, (const struct std::nothrow_t *)0x58);
      return v8;
    }
    v9 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 10);
    if ( *v9 != (ConsumerControlNexusDevice *)((char *)this + 72) )
      goto LABEL_17;
    *v3 = (char *)this + 72;
    v3[1] = v9;
    *v9 = (ConsumerControlNexusDevice *)v3;
    ++*((_QWORD *)this + 11);
    *((_QWORD *)this + 10) = v3;
  }
  return 0LL;
}
