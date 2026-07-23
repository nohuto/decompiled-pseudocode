/*
 * XREFs of HvlpFastFlushListTbEx @ 0x140279BE8
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x140279DBC (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpCopyFlushVaList @ 0x1402798E8 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x14027B028 (VslFastFlushSecureRangeList.c)
 */

_UNKNOWN **__fastcall HvlpFastFlushListTbEx(
        __int64 *a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned int a5,
        unsigned __int64 *a6,
        int a7)
{
  _UNKNOWN **result; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // [rsp+28h] [rbp-51h]
  __int64 v14; // [rsp+38h] [rbp-41h] BYREF
  __int64 v15; // [rsp+40h] [rbp-39h]
  _QWORD v16[12]; // [rsp+48h] [rbp-31h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+47h] BYREF

  result = &retaddr;
  if ( a4 )
  {
    v10 = a1[1];
    v14 = *a1;
    v15 = v10;
    if ( (HvlpFlags & 0x2000) == 0 )
      v15 = v10 | 8;
    v11 = HvlpAffinityToHvProcessorSet(a2, v16, 0x50u);
    v12 = v11 + 32 + 8 * a7;
    LODWORD(v13) = ((v11 + 7) << 14) & 0x3FE0000 | 0x14;
    HIDWORD(v13) = a7 & 0xFFF;
    HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (__int64 *)((char *)&v14 + (unsigned int)(v11 + 32)));
    LODWORD(v13) = v13 | 0x10000;
    result = (_UNKNOWN **)HvcallpExtendedFastHypercall(v13, (__int64)&v14, v12);
  }
  if ( a3 )
    return (_UNKNOWN **)VslFastFlushSecureRangeList(a6, a5);
  return result;
}
