/*
 * XREFs of ndisSetOpenToTranslationMode @ 0x1C0117B90
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisInitializeEvent @ 0x1C001E540 (NdisInitializeEvent.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisSetOpenToTranslationMode(__int64 a1)
{
  __int64 v1; // rdi
  void *v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x98u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  *(_DWORD *)(a1 + 224) |= 0x10000000u;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 624));
  *(_DWORD *)(a1 + 640) = 2;
  NdisInitializeEvent((PNDIS_EVENT)(a1 + 648));
  *(_DWORD *)(a1 + 644) = 0;
  if ( *(_DWORD *)(v1 + 464) != 3 || (v3 = ndisMWanSend, (*(_DWORD *)(v1 + 120) & 0x20000) != 0) )
    v3 = ndisSendWithPause;
  *(_QWORD *)(a1 + 96) = v3;
  *(_QWORD *)(a1 + 168) = ndisSendPacketsWithPause;
  *(_QWORD *)(a1 + 112) = ndisSendCompleteWithPause;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x99u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
}
