/*
 * XREFs of ??1GazeHidDevice@@UEAA@XZ @ 0x18006A12C
 * Callers:
 *     ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x180067C50 (--_EGazeHidDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800C1290 (--1-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18012C2DC (--3@YAXPEAX@Z.c)
 */

void __fastcall GazeHidDevice::~GazeHidDevice(GazeHidDevice *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  void **v4; // rdi
  const struct std::nothrow_t *v5; // rdx

  *(_QWORD *)this = &GazeHidDevice::`vftable';
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void **)*((_QWORD *)this + 28);
  if ( v4 )
  {
    if ( *v4 )
      operator delete(*v4, a2);
    operator delete(v4, (const struct std::nothrow_t *)8);
  }
  std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::~_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>((char *)this + 200);
  HIDDevice::~HIDDevice(this, v5);
}
