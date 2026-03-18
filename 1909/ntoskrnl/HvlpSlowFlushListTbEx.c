/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x14028E14C
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x14028DC9C (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14028D430 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpCopyFlushVaList @ 0x14028D7A8 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x14028F398 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x140290638 (VslSlowFlushSecureRangeList.c)
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

  memset(v16, 0, sizeof(v16));
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
      HvlpAffinityToHvProcessorSet(0LL, v11 + 2, 0);
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
      HvlpCopyFlushVaList(a5, a6, (HvlpFlags & 0x2000) != 0, (_QWORD *)((char *)v12 + v10));
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
