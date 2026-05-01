/*
 * XREFs of ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x18021E90C
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021D868 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x18022093C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPerApplicationData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 *v9; // rbx

  *a3 = 0LL;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 584) )
    return 2147647531LL;
  while ( 1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 8 * v3) + 8LL), 0LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)a2 + 688LL))(a2, StringRawBuffer) )
      break;
    if ( (unsigned __int64)++v3 >= *(_QWORD *)(a1 + 584) )
      return 2147647531LL;
  }
  v9 = (__int64 *)(*(_QWORD *)(a1 + 576) + 8 * v3);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  *a3 = *v9;
  return 0LL;
}
