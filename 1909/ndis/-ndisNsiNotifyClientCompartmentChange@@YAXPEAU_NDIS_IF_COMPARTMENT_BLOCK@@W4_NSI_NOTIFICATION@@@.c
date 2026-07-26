/*
 * XREFs of ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109030
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FA0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0063100 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00634A8 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B514 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

char __fastcall ndisNsiNotifyClientCompartmentChange(struct _NDIS_IF_COMPARTMENT_BLOCK *a1, int a2)
{
  char result; // al
  int v5; // edx
  char v6; // cl
  int v7; // edx
  char v8; // [rsp+30h] [rbp-50h]
  _QWORD v9[8]; // [rsp+40h] [rbp-40h] BYREF

  result = ndisIsCompartmentEnumerable(a1);
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v5;
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        22,
        144,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
        v6,
        v8);
    }
    memset(v9, 0, sizeof(v9));
    v9[0] = ndisNsiSavedClientNpi;
    LOWORD(v9[1]) = 7;
    v9[2] = &a1->CompartmentId;
    HIDWORD(v9[1]) = a2;
    LODWORD(v9[3]) = 4;
    if ( (unsigned int)(a2 - 1) > 1 )
    {
      v9[5] = 0LL;
    }
    else
    {
      LODWORD(v9[4]) = 0;
      v9[5] = &a1->LoopbackInfo.CompartmentGuid;
      v9[6] = 0x43800000010LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD *))(qword_1C00E5EC8 + 8))(v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               v7,
               22,
               145,
               (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
               (char)a1,
               a2);
    }
  }
  return result;
}
