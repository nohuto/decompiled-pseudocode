/*
 * XREFs of ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800A0F20
 * Callers:
 *     ??_GMobileButtonDeviceCollection@@UEAAPEAXI@Z @ 0x1800A1050 (--_GMobileButtonDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800344C0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 */

void __fastcall MobileButtonDeviceCollection::~MobileButtonDeviceCollection(MobileButtonDeviceCollection *this)
{
  char *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  *(_QWORD *)this = &MobileButtonDeviceCollection::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  v2 = (char *)*((_QWORD *)this + 361);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 356);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 358) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 356) = 0LL;
    *((_QWORD *)this + 357) = 0LL;
    *((_QWORD *)this + 358) = 0LL;
  }
  std::list<unsigned int>::clear((__int64)this + 2832);
  std::_Deallocate<16,0>(*((void **)this + 354), (const struct std::nothrow_t *)0x18);
  v4 = (void *)*((_QWORD *)this + 348);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 350) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 348) = 0LL;
    *((_QWORD *)this + 349) = 0LL;
    *((_QWORD *)this + 350) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 346);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 346) + 8LL) = *((_QWORD *)this + 346);
  *((_QWORD *)this + 347) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 346);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
      v7 = (_QWORD *)*((_QWORD *)this + 346);
      v6 = v8;
    }
    while ( v8 != v7 );
  }
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x28);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
