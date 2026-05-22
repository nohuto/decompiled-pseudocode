/*
 * XREFs of ??1InputConfigContextProvider@@MEAA@XZ @ 0x18009DC14
 * Callers:
 *     ??_EInputConfigContextProvider@@MEAAPEAXI@Z @ 0x18009DBC8 (--_EInputConfigContextProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x18002A1AC (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ?ClearConfigs@InputConfigContextProvider@@IEAAXAEAV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18009E1B0 (-ClearConfigs@InputConfigContextProvider@@IEAAXAEAV-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@U.c)
 *     ??1?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAA@XZ @ 0x18009E3FC (--1-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputConfigContextProvider::~InputConfigContextProvider(InputConfigContextProvider *this)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  *(_QWORD *)this = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (char *)this + 224;
  InputConfigContextProvider::ClearConfigs(this, (char *)this + 224);
  InputConfigContextProvider::ClearConfigs(v3, (char *)this + 248);
  std::vector<INPUT_SPACE_PAYLOAD>::~vector<INPUT_SPACE_PAYLOAD>((char *)this + 248);
  std::vector<INPUT_SPACE_PAYLOAD>::~vector<INPUT_SPACE_PAYLOAD>(v2);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 12,
    v4);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  SystemContextProvider::~SystemContextProvider(this);
}
