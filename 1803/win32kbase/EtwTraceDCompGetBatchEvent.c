/*
 * XREFs of EtwTraceDCompGetBatchEvent @ 0x1C0047550
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C004686C (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0p @ 0x1C00AE45C (McTemplateK0p.c)
 */

__int64 __fastcall EtwTraceDCompGetBatchEvent(__int64 a1)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return McTemplateK0p(a1, &DCompGetBatchEvent, &W32kControlGuid, a1);
  return result;
}
