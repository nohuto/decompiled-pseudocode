/*
 * XREFs of ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x18005D7C4
 * Callers:
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$1 @ 0x180130F31 (_RIMRawInputProvider--Initialize_--_1_--dtor$1.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$7 @ 0x180130F67 (_RIMRawInputProvider--Initialize_--_1_--dtor$7.c)
 *     _CameraControlDeviceCollection::Create_::_1_::dtor$0 @ 0x1801313CF (_CameraControlDeviceCollection--Create_--_1_--dtor$0.c)
 *     _GazeDeviceCollection::Create_::_1_::dtor$0 @ 0x180131633 (_GazeDeviceCollection--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  return result;
}
