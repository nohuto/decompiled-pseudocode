/*
 * XREFs of ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400358AC
 * Callers:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x14003DFE0 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140005668 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::OnDisconnectedFromRightSubmix(CPipeInstance *this, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rax
  CPipeInstance *v7; // [rsp+40h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v9 = *((_QWORD *)this + 3);
  while ( v9 )
  {
    v3 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev((__int64)this, &v9);
    if ( *(_DWORD *)(v3 + 40) == 3 )
    {
      v4 = *(_QWORD **)(v3 + 32);
      v7 = 0LL;
      v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, CPipeInstance **))*v4)(
             *v4,
             &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
             &v7);
      this = v7;
      if ( v5 >= 0 )
      {
        v6 = 0LL;
        v8 = 0LL;
        if ( v7 )
        {
          (**(void (__fastcall ***)(CPipeInstance *, GUID *, __int64 *))v7)(
            v7,
            &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
            &v8);
          this = v7;
          v6 = v8;
        }
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, a2);
          this = v7;
          v6 = v8;
        }
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          this = v7;
        }
      }
      if ( this )
        (*(void (__fastcall **)(CPipeInstance *))(*(_QWORD *)this + 16LL))(this);
    }
  }
}
