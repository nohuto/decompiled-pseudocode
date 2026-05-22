/*
 * XREFs of ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x18002FFFC
 * Callers:
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18002FA90 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x18002FB90 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F7E8 (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SystemButtonEventControllerManager::UnregisterController(
        SystemButtonEventControllerManager *this,
        struct SystemButtonEventController *a2)
{
  __int64 (__fastcall ***v2)(_QWORD); // rdi
  __int64 (__fastcall ***v5)(_QWORD); // rbx
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD); // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+40h] [rbp+18h] BYREF

  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 7);
  v2 = v9;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v9);
  v5 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 6);
  v8 = v5;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v8);
  v6 = (__int64 *)(v2 + 6);
  if ( !v2 )
    v6 = (__int64 *)this;
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v6, &v8);
  v7 = (__int64 *)(v5 + 7);
  if ( !v5 )
    v7 = (__int64 *)((char *)this + 8);
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v7, &v9);
  if ( v5 )
    (*v5)[1](v5);
  if ( v2 )
    (*v2)[1](v2);
}
