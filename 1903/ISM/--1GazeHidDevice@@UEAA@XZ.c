/*
 * XREFs of ??1GazeHidDevice@@UEAA@XZ @ 0x1800A656C
 * Callers:
 *     ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x1800A4AC0 (--_EGazeHidDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002C8EC (--3@YAXPEAX@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@2@0@Z @ 0x1800F8D28 (-erase@-$_Tree@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pa.c)
 */

void __fastcall GazeHidDevice::~GazeHidDevice(GazeHidDevice *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  void **v4; // rbx
  const struct std::nothrow_t *v5; // rdx
  char v6; // [rsp+30h] [rbp+8h] BYREF

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
  std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::erase(
    (char *)this + 200,
    &v6,
    **((_QWORD **)this + 25));
  std::_Deallocate<16,0>(*((void **)this + 25), (const struct std::nothrow_t *)0x28);
  HIDDevice::~HIDDevice(this, v5);
}
