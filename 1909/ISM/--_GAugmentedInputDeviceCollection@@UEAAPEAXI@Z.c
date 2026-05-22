/*
 * XREFs of ??_GAugmentedInputDeviceCollection@@UEAAPEAXI@Z @ 0x180099200
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x1800257D0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@0@Z @ 0x180099D80 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800A51FC (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::`scalar deleting destructor'(
        AugmentedInputDeviceCollection *this,
        char a2)
{
  void **v2; // rbx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void **)((char *)this + 2760);
  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
    (char *)this + 2760,
    &v6,
    **((_QWORD **)this + 345));
  std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)0x30);
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
