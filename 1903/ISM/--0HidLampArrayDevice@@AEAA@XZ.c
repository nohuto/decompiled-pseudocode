/*
 * XREFs of ??0HidLampArrayDevice@@AEAA@XZ @ 0x1800B2EE4
 * Callers:
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800B3414 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HidLampArrayDevice *__fastcall HidLampArrayDevice::HidLampArrayDevice(HidLampArrayDevice *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &HidLampArrayDevice::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *(_DWORD *)((char *)this + 538) = 0;
  *((_WORD *)this + 271) = 0;
  *((_WORD *)this + 318) = 0;
  *((_OWORD *)this + 34) = 0uLL;
  *((_QWORD *)this + 70) = 0LL;
  v2 = (void *)*((_QWORD *)this + 71);
  *((_QWORD *)this + 71) = 0LL;
  if ( v2 )
    operator delete(v2, 0LL);
  return this;
}
