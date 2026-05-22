/*
 * XREFs of ??0ManipulationInjector@@QEAA@XZ @ 0x1800E73AC
 * Callers:
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180074774 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18008CC98 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 */

ManipulationInjector *__fastcall ManipulationInjector::ManipulationInjector(ManipulationInjector *this)
{
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 740) = 0;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_DWORD *)this + 200) = 0;
  *((_OWORD *)this + 4) = 0uLL;
  *((_DWORD *)this + 193) = 96;
  *((_DWORD *)this + 194) = 96;
  *(_WORD *)((char *)this + 13) = 256;
  *((_DWORD *)this + 4) = 40;
  *((_DWORD *)this + 5) = 20;
  *((_DWORD *)this + 6) = 80;
  *((_DWORD *)this + 7) = 600;
  *((_DWORD *)this + 8) = 150;
  *(_QWORD *)((char *)this + 36) = 100LL;
  memset_0((char *)this + 104, 0, 0x270uLL);
  return this;
}
