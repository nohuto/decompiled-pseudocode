/*
 * XREFs of VidSchResetGPUTimeout @ 0x1C00C9314
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007B3F0 (VidSchiCheckHwProgress.c)
 *     VidSchRestartAdapter @ 0x1C00CBDF0 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  unsigned int i; // r9d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 68); *(_DWORD *)(*(_QWORD *)v5 + 440LL) &= ~2u )
  {
    v3 = *(_QWORD *)(a1 + 616);
    v4 = 8LL * i;
    if ( i < *(_DWORD *)(a1 + 688) )
      v3 += v4;
    *(_DWORD *)(*(_QWORD *)v3 + 440LL) &= ~1u;
    v5 = *(_QWORD *)(a1 + 616) + v4;
    if ( i >= *(_DWORD *)(a1 + 688) )
      v5 = *(_QWORD *)(a1 + 616);
    ++i;
  }
}
