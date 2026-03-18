/*
 * XREFs of ?PrepareCSMBufferInfo@CEndpointResourceStateManager@@QEAAX_NPEAUFlipManagerObject@@PEAUCSM_BUFFER_INFO@@@Z @ 0x1C006272C
 * Callers:
 *     ?PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_ENTRY@@@Z @ 0x1C0063034 (-PrepareUpdateTokensForDwm@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@AEAU_LIST_.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall CEndpointResourceStateManager::PrepareCSMBufferInfo(
        CEndpointResourceStateManager **this,
        unsigned __int8 a2,
        struct FlipManagerObject *a3,
        struct CSM_BUFFER_INFO *a4)
{
  int v5; // ebx
  CEndpointResourceStateManager *i; // rdx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  v5 = a2;
  memset(a4, 0, 0x410uLL);
  *(_DWORD *)a4 = 3;
  *((_DWORD *)a4 + 34) = 2 * v5 + 2;
  *((_QWORD *)a4 + 111) = a3;
  for ( i = *this; i != (CEndpointResourceStateManager *)this; i = *(CEndpointResourceStateManager **)i )
  {
    v9 = (__int64)i + 16;
    if ( !i )
      v9 = 24LL;
    v10 = *(_QWORD *)v9;
    v11 = (__int64)i + 24;
    if ( !i )
      v11 = 32LL;
    if ( (*(_BYTE *)v11 & 2) == 0 )
    {
      v12 = 3 * (*((unsigned int *)a4 + 35) + 6LL);
      *((_QWORD *)a4 + v12) = *(_QWORD *)(v10 + 48);
      v13 = *(_QWORD *)(v10 + 64);
      *((_DWORD *)a4 + 2 * v12 + 4) = 0;
      *((_QWORD *)a4 + v12 + 1) = v13;
      ++*((_DWORD *)a4 + 35);
    }
  }
}
