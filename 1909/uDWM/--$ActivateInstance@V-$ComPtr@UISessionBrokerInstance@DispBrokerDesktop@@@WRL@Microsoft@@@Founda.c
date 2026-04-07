/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UISessionBrokerInstance@DispBrokerDesktop@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800433C0
 * Callers:
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x1800432D8 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a2 = 0LL;
  v5 = RoActivateInstance(a1, &v8);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)&GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v6 = *(_QWORD *)GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v6 )
    {
      v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v8)(
             v8,
             &GUID_34fbadee_1168_5c61_b4b8_823a75f50fbc,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      *a2 = v8;
    }
  }
  return (unsigned int)v5;
}
