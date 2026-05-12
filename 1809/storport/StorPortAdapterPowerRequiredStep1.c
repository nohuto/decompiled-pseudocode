/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C0043C20
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0016F40 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx @ 0x1C00419E8 (McTemplateK0pqtx.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00429A0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C0043D0C (StorPortAdapterPowerRequiredStep2.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(PVOID Context, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  v3 = Context;
  if ( *((_QWORD *)Context + 680) )
  {
    a2 = *(unsigned int *)(*((_QWORD *)Context + 644) + 20LL);
    if ( (a2 & 8) != 0 || *((char *)Context + 108) < 0 )
    {
      Context = (PVOID)(MEMORY[0xFFFFF78000000008] - *((_QWORD *)Context + 680));
      a2 = (unsigned __int64)Context / 0x2710;
      v3[681] += (unsigned __int64)Context / 0x2710;
      if ( (unsigned __int64)Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1376);
      if ( !v3[679] )
        v3[679] = v3[676];
    }
    v3[680] = 0LL;
  }
  ++*((_DWORD *)v3 + 1374);
  if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
  {
    v5 = *((_DWORD *)v3 + 14);
    McTemplateK0pqtx((struct _MCGEN_TRACE_CONTEXT *)Context, a2, a3, *(_QWORD *)v3[644], v5);
  }
  *(_DWORD *)(v3[644] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v3);
  return StorPortAdapterPowerRequiredStep2(v3);
}
