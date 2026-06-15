/*
 * XREFs of _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18002FEF0
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18002FBB0 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_530575f8b419a08780554bb070101504_::operator()(__int64 a1, _QWORD *a2)
{
  int (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 v8; // rcx
  int (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  _BYTE v12[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+68h] [rbp-20h]
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  if ( *a2
    && (v5 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD))(*(_QWORD *)*a2 + 24LL))(
               *a2,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               &v14),
        v4 = v14,
        v5 >= 0)
    && v14 )
  {
    v15 = 0LL;
    if ( (**v14)(v14, &GUID_1c09b051_783b_4f90_a426_dc76e6cdb825, &v15) < 0 )
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
      }
      v10 = *a2;
      if ( *a2 )
        goto LABEL_12;
    }
    else
    {
      v6 = v15;
      v13 = 0LL;
      v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 56);
      if ( v7 )
        v13 = (**v7)(v7, v12);
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 192LL))(v6, v12);
      v8 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
      }
      v10 = *a2;
      if ( *a2 )
      {
LABEL_12:
        *a2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  else
  {
    if ( v4 )
    {
      v14 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
    }
    v10 = *a2;
    if ( *a2 )
      goto LABEL_12;
  }
}
