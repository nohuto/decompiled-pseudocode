/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x14001315C
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140013028 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  int v5; // eax
  void (__fastcall ***v6)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  while ( v3 )
  {
    v8 = *(_QWORD *)(v3 + 16);
    v3 = *(_QWORD *)(v3 + 8);
    if ( *(_DWORD *)(v8 + 40) == 3 )
    {
      v4 = *(_QWORD **)(v8 + 32);
      v9 = 0LL;
      v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*v4)(
             *v4,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v9);
      v6 = v9;
      if ( v5 >= 0 )
      {
        v7 = 0LL;
        v10 = 0LL;
        if ( v9 )
        {
          (**v9)(v9, &GUID_417684e5_7a71_44f4_9364_208e73fa5a20, &v10);
          v6 = v9;
          v7 = v10;
        }
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, a2);
          v6 = v9;
          v7 = v10;
        }
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          v6 = v9;
        }
      }
      if ( v6 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6)[2])(v6);
    }
  }
}
