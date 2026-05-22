/*
 * XREFs of ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x180018750
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180029990 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z @ 0x18001886C (--0InjectionDevice@@QEAA@PEAUIInputProcessorHost@@W4InputType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
MouseProcessor *__fastcall MouseProcessor::MouseProcessor(MouseProcessor *this, struct InputProcessorCreateParams *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  int (__fastcall ***v6)(_QWORD, GUID *, char *); // rcx

  v4 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 7) = v5;
  *((_QWORD *)this + 6) = v4;
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_BYTE *)this + 100) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  InjectionDevice::InjectionDevice((char *)this + 128, *((_QWORD *)a2 + 1), 8LL);
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_DWORD *)this + 24) = 0;
  v6 = (int (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)a2 + 2);
  if ( v6 && (**v6)(v6, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 1720) >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 215) + 16LL))(*((_QWORD *)this + 215));
  return this;
}
