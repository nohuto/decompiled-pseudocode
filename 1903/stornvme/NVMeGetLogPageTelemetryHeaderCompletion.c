/*
 * XREFs of NVMeGetLogPageTelemetryHeaderCompletion @ 0x1C0011A20
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 */

__int64 __fastcall NVMeGetLogPageTelemetryHeaderCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  _WORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rbp
  unsigned __int16 v10; // ax
  unsigned int v11; // ecx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v6 = SrbExtension;
  if ( *(_BYTE *)(v5 + 3) == 1
    && (*(_BYTE *)(a2 + 2) != 40 ? (v7 = *(_WORD **)(a2 + 24), v8 = 16LL) : (v7 = *(_WORD **)(a2 + 64), v8 = 60LL),
        (v9 = *(_QWORD *)(SrbExtension + 4200), *(_DWORD *)(SrbExtension + 4240) >= 0x200u)
     && *(_DWORD *)(a2 + v8) >= 0x28u) )
  {
    if ( !*(_BYTE *)(a1 + 16) )
      memset(v7, 0, 0x28uLL);
    *v7 = *(_WORD *)(v9 + 5);
    *((_BYTE *)v7 + 2) = *(_BYTE *)(v9 + 7);
    v10 = *(_WORD *)(v9 + 12);
    if ( v10 )
    {
      *(_DWORD *)(v7 + 15) = 17827840;
      v11 = (v10 + 1) << 9;
      *((_BYTE *)v7 + 34) = v7[17] & 0xF0 | 3;
      *((_BYTE *)v7 + 38) = BYTE1(v11);
      result = HIWORD(v11);
      *((_BYTE *)v7 + 39) = v11;
      *((_BYTE *)v7 + 36) = HIBYTE(v11);
      *((_BYTE *)v7 + 37) = BYTE2(v11);
    }
    else
    {
      result = StorPortDebugPrint(1LL, "\tStorNVMe: No Telemetry Host Log page available!\n");
    }
    if ( *(_BYTE *)(a1 + 16) )
    {
      *(_WORD *)(v9 + 5) = 0;
      *(_BYTE *)(v9 + 7) = 0;
      *(_DWORD *)(v9 + 8) = 0;
      *(_WORD *)(v9 + 12) = 0;
    }
    *(_DWORD *)(a2 + v8) = 40;
  }
  else
  {
    result = StorPortExtendedFunction(87LL, a1, 0LL);
  }
  if ( !*(_BYTE *)(a1 + 16) )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v6 + 4240), *(_QWORD *)(v6 + 4200));
  *(_BYTE *)(v6 + 4253) |= 8u;
  *(_QWORD *)(v6 + 4200) = 0LL;
  *(_DWORD *)(v6 + 4240) = 0;
  return result;
}
