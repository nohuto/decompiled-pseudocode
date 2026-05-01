/*
 * XREFs of ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x18001EC84
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x180251090 (-SetWindowOwner@WindowWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::PushZbidToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 200LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 500) = a2;
  v5 = *(int *)(a1 + 296);
  if ( *(_DWORD *)(a1 + 296) && a2 )
  {
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 144LL))(
                     *(_QWORD *)(a1 + 280),
                     &v7);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v6 + 32LL))(*v6, v5, 0LL, a2);
    if ( v7 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
