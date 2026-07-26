/*
 * XREFs of ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C01146B8
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065700 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065E50 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001B514 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

char __fastcall ndisNsiNotifyClientNetworkChange(__int64 a1, int a2, __int64 a3)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // rbp
  char result; // al
  int v8; // edx
  __int64 v9; // xmm1_8
  int v10; // edx
  char v11; // [rsp+30h] [rbp-68h]
  _OWORD v12[4]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48);
  result = ndisIsCompartmentEnumerable(v3);
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v8;
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        22,
        142,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
        a1,
        v11);
      v3 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 48);
    }
    memset(v12, 0, sizeof(v12));
    *(_QWORD *)&v12[0] = ndisNsiSavedClientNpi;
    WORD4(v12[0]) = 6;
    *(_QWORD *)&v12[1] = a1 + 32;
    HIDWORD(v12[0]) = a2;
    DWORD2(v12[1]) = 16;
    if ( a2 )
    {
      *((_QWORD *)&v12[2] + 1) = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 16);
      v12[2] = *(_OWORD *)a3;
      *(_QWORD *)&v12[3] = v9;
    }
    DWORD2(v12[3]) = v3->CompartmentId;
    result = (*(__int64 (__fastcall **)(_OWORD *))(qword_1C00E5EC8 + 8))(v12);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      return WPP_RECORDER_SF_qL(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               v10,
               22,
               143,
               (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
               a1,
               a2);
    }
  }
  return result;
}
