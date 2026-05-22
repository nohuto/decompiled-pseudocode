/*
 * XREFs of ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EA488
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EA710 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
ButtonProcessor *__fastcall ButtonProcessor::ButtonProcessor(
        ButtonProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _OWORD *v4; // rax

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *((_QWORD *)this + 4) = a2;
  *((_QWORD *)this + 3) = a3;
  *(_QWORD *)this = &ButtonProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v4 = operator new(0x10uLL);
  *((_QWORD *)this + 15) = v4;
  *v4 = 0LL;
  **((_QWORD **)this + 15) = (char *)this + 120;
  *((_QWORD *)this + 20) = 0LL;
  return this;
}
