/*
 * XREFs of ndisMValidatePMWakePacketForMagicPacket @ 0x1C00739FC
 * Callers:
 *     ndisMEvaluateMagicPacketWake @ 0x1C00732F8 (ndisMEvaluateMagicPacketWake.c)
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0073704 (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

char __fastcall ndisMValidatePMWakePacketForMagicPacket(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  char v6; // r10
  __int64 v7; // rbx
  unsigned __int64 v8; // r11
  int v9; // ecx
  __int64 v10; // r9
  unsigned int i; // r8d
  int v12; // eax
  int v13; // ecx

  v2 = *(unsigned int *)(a2 + 148);
  if ( v2 < 0x2A )
    return 0;
  v4 = v2 - 42;
  v5 = a2 + *(unsigned int *)(a2 + 152);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 4040);
  v8 = 0LL;
  do
  {
    v9 = *(_DWORD *)v5 + 1;
    if ( *(_DWORD *)v5 == -1 )
      v9 = *(unsigned __int16 *)(v5 + 4) - 0xFFFF;
    if ( !v9 )
    {
      v10 = v5 + 6;
      for ( i = 0; i < 6; ++i )
      {
        v12 = *(_DWORD *)(v7 + 1126);
        v13 = *(_DWORD *)v10 - v12;
        if ( *(_DWORD *)v10 == v12 )
          v13 = *(unsigned __int16 *)(v10 + 4) - *(unsigned __int16 *)(v7 + 1130);
        if ( v13 )
        {
          v6 = 0;
          goto LABEL_15;
        }
        v10 += 6LL;
        v6 = 1;
      }
      if ( i == 6 )
        return v6;
    }
LABEL_15:
    ++v5;
    ++v8;
  }
  while ( v8 <= v4 );
  return v6;
}
