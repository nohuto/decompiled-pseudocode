/*
 * XREFs of VidSchTerminateHwContext @ 0x1C00384E0
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0034CDC (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateAdapter @ 0x1C00CC510 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C0032258 (McTemplateK0pqqqqqqqqppp.c)
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x1C00351BC (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 */

void __fastcall VidSchTerminateHwContext(_QWORD *P)
{
  const GUID *v2; // r8
  __int64 v3; // rax
  __int64 v4; // r9
  int v5; // ecx
  _DWORD v6[8]; // [rsp+80h] [rbp-28h] BYREF

  if ( (P[7] & 1) != 0 )
  {
    if ( P[6] )
    {
      ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(*(_QWORD *)(P[2] + 24LL) + 8LL));
      P[6] = 0LL;
      if ( bTracingEnabled )
      {
        memset(v6, 0, sizeof(v6));
        v3 = P[1];
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 8);
          if ( !v4 )
            v4 = P[1];
        }
        else
        {
          v4 = 0LL;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v5 = *(unsigned __int16 *)(P[2] + 4LL);
          McTemplateK0pqqqqqqqqppp(
            v5,
            &EventDestroyContext,
            v2,
            v4,
            v5,
            1 << *((_DWORD *)P + 16),
            v6[0],
            v6[1],
            v6[2],
            v6[3],
            v6[4],
            3,
            P);
        }
      }
    }
  }
  VidSchiDecrementHwContextReference((unsigned int *)P, 0LL);
}
