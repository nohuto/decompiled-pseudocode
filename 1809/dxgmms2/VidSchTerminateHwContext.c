/*
 * XREFs of VidSchTerminateHwContext @ 0x1C0037AA0
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C00342C4 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0031A08 (McTemplateK0pqqqqqqqqppp.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C00347AC (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchTerminateHwContext(_QWORD *P)
{
  __int64 v2; // rax
  __int64 v3; // r9
  _QWORD v4[4]; // [rsp+80h] [rbp-28h] BYREF

  if ( (P[7] & 1) != 0 )
  {
    if ( P[6] )
    {
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(*(_QWORD *)(P[2] + 24LL) + 8LL));
      P[6] = 0LL;
      if ( bTracingEnabled )
      {
        memset(v4, 0, sizeof(v4));
        v2 = P[1];
        if ( v2 )
        {
          v3 = *(_QWORD *)(v2 + 8);
          if ( !v3 )
            v3 = P[1];
        }
        else
        {
          v3 = 0LL;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0pqqqqqqqqppp(
            *(unsigned __int16 *)(P[2] + 4LL),
            &EventDestroyContext,
            (const GUID *)HIDWORD(v4[1]),
            v3,
            *(_WORD *)(P[2] + 4LL),
            1 << *((_DWORD *)P + 16),
            v4[0],
            SBYTE4(v4[0]),
            v4[1],
            SBYTE4(v4[1]),
            v4[2],
            3,
            P);
      }
    }
  }
  VidSchiDecrementHwContextReference((unsigned int *)P, 0LL);
}
