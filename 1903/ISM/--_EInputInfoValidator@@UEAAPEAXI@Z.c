/*
 * XREFs of ??_EInputInfoValidator@@UEAAPEAXI@Z @ 0x180142D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ @ 0x180025CB0 (-Initialize3DComponents@MPCEyeGazeProcessor@@UEAAXXZ.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x18005675C (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 */

InputInfoValidator *__fastcall InputInfoValidator::`vector deleting destructor'(InputInfoValidator *this, char a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &InputInfoValidator::`vftable';
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 24);
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x20);
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCEyeGazeProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
