/*
 * XREFs of MiProcessKernelCfgImage @ 0x140154A34
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiInitializeKernelCfg @ 0x140A22EF8 (MiInitializeKernelCfg.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14005F3C0 (RtlImageNtHeaderEx.c)
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408980F0 (MiProcessKernelCfgAddressTakenImports.c)
 */

__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  PIMAGE_NT_HEADERS NtHeader; // [rsp+48h] [rbp+20h] BYREF

  if ( (MiFlags & 0x80000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1u, *(PVOID *)(a1 + 48), 0LL, &NtHeader);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, NtHeader);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 )
    return 0LL;
  if ( (a2 & 8) != 0 )
    return 0LL;
  result = MiProcessKernelCfgAddressTakenImports(a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
