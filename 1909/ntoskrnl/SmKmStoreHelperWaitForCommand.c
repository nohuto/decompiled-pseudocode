/*
 * XREFs of SmKmStoreHelperWaitForCommand @ 0x140148B50
 * Callers:
 *     SmKmStoreHelperCheckWaitCommand @ 0x14011B2E4 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14014885C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 */

__int64 __fastcall SmKmStoreHelperWaitForCommand(__int64 a1, __int64 a2, LARGE_INTEGER *a3, int a4)
{
  struct _KEVENT *v5; // rsi
  unsigned int v9; // r10d
  int v10; // eax
  signed __int32 v12; // eax

  v5 = (struct _KEVENT *)(a1 + 32);
  while ( 1 )
  {
    v9 = KeWaitForSingleObject(v5, Executive, 0, 0, a3);
    if ( !v9 )
      break;
    if ( !a4 )
      return v9;
    v12 = *(_DWORD *)(a1 + 56);
    if ( (v12 & 1) == 0 && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v12 | 2, v12) & 1) == 0 )
      return (unsigned int)-1073741536;
  }
  KeResetEvent(v5);
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
  }
  v10 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = 0;
  return (v10 & 2) != 0 ? 0xC0000120 : 0;
}
