/*
 * XREFs of HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C0027A34
 * Callers:
 *     HUBDSM_QueryingLanguageSpecificProductIdString @ 0x1C001D0F0 (HUBDSM_QueryingLanguageSpecificProductIdString.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002699C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetProductIdStringDescriptorUsingControlTransfer(__int64 a1)
{
  char v1; // di
  int Descriptor; // edx
  void *v4; // rcx
  __int16 v5; // ax
  __int64 v6; // [rsp+28h] [rbp-20h]

  v1 = *(_BYTE *)(a1 + 2003);
  Descriptor = -1073741637;
  if ( !v1 && (*(_DWORD *)(a1 + 1644) & 1) != 0 )
    goto LABEL_6;
  v4 = *(void **)(a1 + 2032);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  v5 = *(_WORD *)(a1 + 2040);
  *(_QWORD *)(a1 + 2032) = 0LL;
  Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1732, 255, 3, v1, v5);
  if ( Descriptor < 0 )
  {
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = Descriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x41u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v6);
    }
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
