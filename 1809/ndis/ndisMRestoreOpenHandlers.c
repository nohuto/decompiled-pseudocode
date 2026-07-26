/*
 * XREFs of ndisMRestoreOpenHandlers @ 0x1C0010C30
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisMResetCompleteStage2 @ 0x1C0063DD4 (ndisMResetCompleteStage2.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMiniportXStateClearFlag @ 0x1C0025350 (ndisMiniportXStateClearFlag.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 */

char __fastcall ndisMRestoreOpenHandlers(__int64 a1, __int64 a2)
{
  char v2; // di
  int v4; // ecx
  __int64 (__fastcall *i)(); // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v2 = a2;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(99LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1, a2) )
  {
    v6 = *(_QWORD *)(a1 + 2064);
    if ( v6 && !*(_BYTE *)(v6 + 384) )
      *(_QWORD *)(v6 + 640) = ndisFilterIndicateReceiveNetBufferLists;
    v7 = *(_QWORD **)(a1 + 56);
    *(_DWORD *)(a1 + 2684) = *(_DWORD *)(a1 + 2688);
    *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
    i = ndisOpenCancelSendNetBufferLists;
    for ( *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists; v7; v7 = (_QWORD *)v7[49] )
    {
      v7[12] = v7[72];
      v7[21] = v7[70];
      v7[37] = v7[71];
      i = ndisMReset;
      v7[22] = ndisMReset;
      v7[23] = ndisLegacyRequest;
      v7[24] = &ndisMOidRequest;
      v7[91] = ndisMDirectOidRequest;
    }
  }
  else
  {
    LOBYTE(i) = Microsoft_Windows_NDISEnableBits;
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      LOBYTE(i) = McTemplateK0jqxq(
                    v4,
                    (unsigned int)&KeptMiniportFakeHandlers,
                    (int)a1 + 4040,
                    (int)a1 + 4040,
                    *(_DWORD *)(a1 + 4088),
                    *(_QWORD *)(a1 + 4056),
                    *(_BYTE *)(a1 + 930));
    if ( (*(_BYTE *)(a1 + 930) & 2) != 0 )
    {
      for ( i = *(__int64 (__fastcall **)())(a1 + 56); i; i = (__int64 (__fastcall *)())*((_QWORD *)i + 49) )
      {
        *((_QWORD *)i + 23) = ndisLegacyRequest;
        *((_QWORD *)i + 24) = &ndisMOidRequest;
        *((_QWORD *)i + 91) = ndisMDirectOidRequest;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    LOBYTE(i) = WPP_SF_q(100LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  return (char)i;
}
