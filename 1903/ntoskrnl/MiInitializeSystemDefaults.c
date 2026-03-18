/*
 * XREFs of MiInitializeSystemDefaults @ 0x140A20F14
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     strstr @ 0x14019F610 (strstr.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiInitializeSystemDefaults(__int64 a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // edx
  ULONG_PTR result; // rax

  byte_140466A54 = 4;
  v2 = MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 22)) & 0xC00000;
  dword_140465A9C = 48;
  v3 = (v2 >> 22) & 3;
  MiFlags = v2;
  switch ( v3 )
  {
    case 0:
      word_140465BEC = 1;
      goto LABEL_9;
    case 1:
      word_140465BEC = 0;
      break;
    case 2:
      word_140465BEC = 256;
      break;
    case 3:
      word_140465BEC = 1;
      break;
    default:
LABEL_9:
      if ( !v3 )
        goto LABEL_12;
      break;
  }
  if ( KiImplementedPhysicalBits > 0 )
  {
    byte_140424D43 = 4;
    qword_140465B00 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
    byte_140424D42 = KiImplementedPhysicalBits - 1;
  }
LABEL_12:
  if ( (KeFeatureBits & 0x100000) == 0 )
    KeBugCheckEx(0x1Au, 0x3030306uLL, KeFeatureBits, 0LL, 0LL);
  if ( KiAccessBitErrata == 1 )
  {
    v4 = v2 | 0x4000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_18;
    v4 = v2 | 0x800;
  }
  MiFlags = v4;
LABEL_18:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    MiFlags |= 0x800u;
  result = KeFeatureBits;
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    MiFlags |= 0x100u;
  }
  else if ( (KeFeatureBits & 0x1000000) != 0 )
  {
    MiFlags |= 0x200u;
  }
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
    MiFlags |= 0x2000000u;
  return result;
}
