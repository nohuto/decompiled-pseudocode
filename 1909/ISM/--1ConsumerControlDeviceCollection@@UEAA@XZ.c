/*
 * XREFs of ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800A2778
 * Callers:
 *     ??_GConsumerControlDeviceCollection@@UEAAPEAXI@Z @ 0x1800A2840 (--_GConsumerControlDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall ConsumerControlDeviceCollection::~ConsumerControlDeviceCollection(
        ConsumerControlDeviceCollection *this)
{
  void *v2; // rcx
  _QWORD **v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx

  *(_QWORD *)this = &ConsumerControlDeviceCollection::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  v2 = (void *)*((_QWORD *)this + 348);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 350) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 348) = 0LL;
    *((_QWORD *)this + 349) = 0LL;
    *((_QWORD *)this + 350) = 0LL;
  }
  v3 = (_QWORD **)*((_QWORD *)this + 346);
  v4 = *v3;
  *v3 = v3;
  *(_QWORD *)(*((_QWORD *)this + 346) + 8LL) = *((_QWORD *)this + 346);
  *((_QWORD *)this + 347) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 346);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x28);
      v5 = (_QWORD *)*((_QWORD *)this + 346);
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x28);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
