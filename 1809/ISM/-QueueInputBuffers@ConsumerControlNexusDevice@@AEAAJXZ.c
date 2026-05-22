/*
 * XREFs of ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x180077C34
 * Callers:
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x18007757C (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x180077D40 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z @ 0x180073644 (-ReadAsync@PnpDevice@@QEAAJ_KPEAXPEAU_OVERLAPPED@@P6AXKK2@Z@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::QueueInputBuffers(ConsumerControlNexusDevice *this)
{
  char *v2; // rsi
  char *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  int Async; // eax
  unsigned int v7; // ebx
  ConsumerControlNexusDevice **v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 8) )
    return 0LL;
  v2 = (char *)this + 48;
  while ( 1 )
  {
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
LABEL_13:
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    if ( v3 == v2 )
      v3 = 0LL;
    else
      --*((_QWORD *)v2 + 2);
    *((_QWORD *)v3 + 2) = this;
    memset_0(v3 + 24, 0, 0x20uLL);
    *((_DWORD *)v3 + 14) = 996;
    *((_QWORD *)v3 + 8) = 0LL;
    v5 = *((_QWORD *)this + 12);
    *((_QWORD *)v3 + 9) = v5;
    Async = PnpDevice::ReadAsync(*((HANDLE **)this + 2), v5, v3 + 80, (struct _OVERLAPPED *)(v3 + 24));
    v7 = Async;
    if ( Async < 0 )
      break;
    v8 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 10);
    if ( *v8 != (ConsumerControlNexusDevice *)((char *)this + 72) )
      goto LABEL_13;
    *(_QWORD *)v3 = (char *)this + 72;
    *((_QWORD *)v3 + 1) = v8;
    *v8 = (ConsumerControlNexusDevice *)v3;
    ++*((_QWORD *)this + 11);
    *((_QWORD *)this + 10) = v3;
    if ( !*((_QWORD *)this + 8) )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)Async);
  operator delete(v3, (const struct std::nothrow_t *)0x58);
  return v7;
}
