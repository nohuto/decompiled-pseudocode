/*
 * XREFs of KiWriteFixedMtrr @ 0x14056F77C
 * Callers:
 *     KeLoadMTRR @ 0x14056F550 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiWriteFixedMtrr(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp+8h]

  if ( byte_14041C4D1 == 1 )
  {
    v1 = __readmsr(0xC0010010) & 0xFFFFFFFFFFF3FFFFuLL | 0x80000;
LABEL_7:
    __writemsr(0xC0010010, v1);
    goto LABEL_4;
  }
  if ( KeGetCurrentPrcb()->CpuVendor != 1 )
  {
    v1 = v4;
    goto LABEL_4;
  }
  v3 = __readmsr(0xC0010010);
  v1 = v3;
  if ( (v3 & 0xC0000) != 0 )
  {
    v1 = v3 & 0xFFFFFFFFFFF3FFFFuLL;
    goto LABEL_7;
  }
LABEL_4:
  __writemsr(0x250u, *a1);
  __writemsr(0x258u, a1[1]);
  __writemsr(0x259u, a1[2]);
  __writemsr(0x268u, a1[3]);
  __writemsr(0x269u, a1[4]);
  __writemsr(0x26Au, a1[5]);
  __writemsr(0x26Bu, a1[6]);
  __writemsr(0x26Cu, a1[7]);
  __writemsr(0x26Du, a1[8]);
  __writemsr(0x26Eu, a1[9]);
  result = a1[10];
  __writemsr(0x26Fu, result);
  if ( byte_14041C4D1 == 1 )
  {
    result = v1 & 0xFFFFFFFFFFF3FFFFuLL | 0x40000;
    __writemsr(0xC0010010, result);
  }
  return result;
}
