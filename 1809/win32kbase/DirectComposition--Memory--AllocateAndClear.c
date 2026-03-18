/*
 * XREFs of DirectComposition::Memory::AllocateAndClear @ 0x1C0019A1C
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0010960 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall DirectComposition::Memory::AllocateAndClear(size_t a1, __int64 a2, char a3)
{
  if ( a3 )
    return Win32AllocPoolWithQuotaZInit(a1);
  else
    return Win32AllocPoolZInit(a1);
}
