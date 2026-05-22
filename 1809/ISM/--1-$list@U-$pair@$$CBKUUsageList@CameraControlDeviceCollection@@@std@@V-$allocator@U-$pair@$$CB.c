/*
 * XREFs of ??1?$list@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@CameraControlDeviceCollection@@@std@@@2@@std@@QEAA@XZ @ 0x180066328
 * Callers:
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$5 @ 0x18013140C (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$5.c)
 *     _CameraControlDeviceCollection::Create_::_1_::dtor$5 @ 0x1801315F5 (_CameraControlDeviceCollection--Create_--_1_--dtor$5.c)
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$5 @ 0x180132E96 (_TestCommandHost--TestCommandHost_--_1_--dtor$5.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$16 @ 0x1801357ED (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$16.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>>::~list<std::pair<unsigned long const,CameraControlDeviceCollection::UsageList>>(
        __int64 a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = *(_QWORD **)a1;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)*v2;
      operator delete(v2, (const struct std::nothrow_t *)0x28);
      v3 = *(_QWORD **)a1;
      v2 = v4;
    }
    while ( v4 != *(_QWORD **)a1 );
  }
  operator delete(v3, (const struct std::nothrow_t *)0x28);
}
