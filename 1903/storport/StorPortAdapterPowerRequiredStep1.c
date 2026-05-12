/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C0022BA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0015A68 (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C0022C2C (StorPortAdapterPowerRequiredStep2.c)
 *     McTemplateK0pqtx @ 0x1C003E670 (McTemplateK0pqtx.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C003F644 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5304) )
  {
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)(Context + 5024) + 20LL);
    if ( (a2 & 8) != 0 || *(char *)(Context + 108) < 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5304);
      a2 = Context / 0x2710;
      v3[664] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1342);
      if ( !v3[662] )
        v3[662] = v3[659];
    }
    v3[663] = 0LL;
  }
  ++*((_DWORD *)v3 + 1340);
  if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
    McTemplateK0pqtx(Context, a2, a3, *(_QWORD *)v3[628], *((_DWORD *)v3 + 14));
  *(_DWORD *)(v3[628] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
  {
    LOBYTE(v4) = 1;
    RaidAdapterSendPoFxPowerRequiredToMiniport(v3, v4);
  }
  return StorPortAdapterPowerRequiredStep2(v3);
}
