/*
 * XREFs of EtwTraceDCompGetBatchEvent @ 0x1C00593E0
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0058ED8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C00E9DA0 (McTemplateK0p.c)
 */

__int64 __fastcall EtwTraceDCompGetBatchEvent(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0p(a1, &DCompGetBatchEvent, &Context.Flags, a1);
  return result;
}
