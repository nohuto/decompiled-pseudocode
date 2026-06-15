/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x1400547E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140052748 (-GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140052CD4 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     McTemplateU0p @ 0x140053548 (McTemplateU0p.c)
 *     WPP_SF_s @ 0x1400538B8 (WPP_SF_s.c)
 *     McTemplateU0pqxxx @ 0x1400549A8 (McTemplateU0pqxxx.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        int a2)
{
  CCrossProcessBaseEndpoint *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rax
  _BYTE v10[64]; // [rsp+40h] [rbp-48h] BYREF

  v2 = (CCrossProcessClientInputEndpoint *)((char *)this - 448);
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx((_DWORD)this, a2, (_DWORD)this - 448, 15, a2, 0, 0);
  v5 = *((_QWORD *)this - 47);
  *((_DWORD *)this + 5) = 0;
  if ( CCrossProcessBaseEndpoint::IsValidFlags(v2, *(unsigned int *)(v5 + 164)) )
  {
    if ( !*((_DWORD *)this + 4) )
      LODWORD(v7) = _InterlockedExchangeAdd64(
                      (volatile signed __int64 *)(*((_QWORD *)this - 47) + 24LL),
                      (unsigned int)(a2 * *((_DWORD *)this - 90)));
  }
  else
  {
    if ( (byte_140086281 & 4) != 0 )
      McTemplateU0p(v7, v6, (__int64)v2);
    LODWORD(v7) = (_DWORD)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) )
    {
      WPP_SF_s(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_4f0ed37fbc483b3865e07d1aeee510ae_Traceguids,
        "Security failure - memory overwrite detected.");
    }
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 164LL), 0xFFFFFFFE);
  }
  if ( a2 )
    CCrossProcessBaseEndpoint::GetNextTimestampMessage((volatile __int32 **)v2, (struct SharedMessageQueueItem *)v10);
  if ( (byte_140086281 & 4) != 0 )
    McTemplateU0pqxxx(v7, v6, (_DWORD)v2, 16, a2, 0, *((_DWORD *)this + 4));
  v8 = *((_QWORD *)this - 3);
  if ( v8 )
  {
    v9 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    SetEvent(v9);
  }
  *((_DWORD *)this + 4) = 3;
}
