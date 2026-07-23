/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x14027A214
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x140279DBC (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpCopyFlushVaList @ 0x1402798E8 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x14027B318 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x14027C2B4 (VslSlowFlushSecureRangeList.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushListTbEx(
        _QWORD *a1,
        __int64 a2,
        char a3,
        char a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned int a7)
{
  char v9; // si
  __int64 v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  PHYSICAL_ADDRESS v16[4]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v17[64]; // [rsp+58h] [rbp-70h] BYREF

  v9 = 1;
  v10 = 0LL;
  v11 = HvlpAcquireHypercallPage(v16, 1, (__int64)v17, 32LL);
  v12 = v11;
  if ( (v16[0].LowPart & 2) != 0 )
  {
    if ( a4 )
    {
      *v11 = *a1;
      v11[1] = a1[1];
      v11[3] = 0LL;
      v11[2] = 1LL;
    }
  }
  else
  {
    if ( a4 )
    {
      *v11 = *a1;
      v11[1] = a1[1];
      v10 = (unsigned int)HvlpAffinityToHvProcessorSet(a2, v11 + 2, 0xFE0u) + 32;
    }
    if ( v10 + 8 * (unsigned __int64)a7 <= 0x1000 )
    {
      HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (_QWORD *)((char *)v12 + (unsigned int)v10));
      if ( a4 && (HvlpFlags & 0x2000) == 0 )
        v12[1] |= 8uLL;
      v9 = 0;
    }
  }
  if ( a3 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VslSlowFlushSecureRangeList)(
        (PHYSICAL_ADDRESS)v16[3].QuadPart,
        v12,
        a7,
        (unsigned int)v10);
  }
  if ( a4 )
    HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v16);
}
