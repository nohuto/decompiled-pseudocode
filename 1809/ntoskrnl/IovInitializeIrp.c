/*
 * XREFs of IovInitializeIrp @ 0x140924270
 * Callers:
 *     IoInitializeIrp @ 0x14011A1A0 (IoInitializeIrp.c)
 * Callees:
 *     VfIoInitializeIrp @ 0x140930428 (VfIoInitializeIrp.c)
 */

__int64 __fastcall IovInitializeIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoInitializeIrp(a1, a4, 0LL);
  return result;
}
