/*
 * XREFs of HvlpSlowFlushListTb @ 0x14028E264
 * Callers:
 *     HvlpFlushRangeListTb @ 0x14028DE88 (HvlpFlushRangeListTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpCopyFlushVaList @ 0x14028DA48 (HvlpCopyFlushVaList.c)
 *     VslFlushSecureAddressSpace @ 0x14028F638 (VslFlushSecureAddressSpace.c)
 *     VslSlowFlushSecureRangeList @ 0x1402908D8 (VslSlowFlushSecureRangeList.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushListTb(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned int a6)
{
  char v9; // bp
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // xmm1_8
  __int64 v13; // xmm1_8
  PHYSICAL_ADDRESS v16[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v17[48]; // [rsp+50h] [rbp-68h] BYREF

  memset(v16, 0, sizeof(v16));
  v9 = 1;
  v10 = HvlpAcquireHypercallPage(v16, 1, (__int64)v17, 24LL);
  v11 = v10;
  if ( a6 > 0x1FD || (v16[0].LowPart & 2) != 0 )
  {
    if ( a3 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v10 = *(_OWORD *)a1;
      v10[2] = v13;
    }
  }
  else
  {
    HvlpCopyFlushVaList(a4, a5, (HvlpFlags & 0x2000) != 0, v10 + 3);
    if ( a3 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v11 = *(_OWORD *)a1;
      v11[2] = v12;
      if ( (HvlpFlags & 0x2000) == 0 )
        v11[1] |= 8uLL;
    }
    v9 = 0;
  }
  if ( a2 )
  {
    if ( v9 )
      VslFlushSecureAddressSpace();
    else
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))VslSlowFlushSecureRangeList)(
        (PHYSICAL_ADDRESS)v16[3].QuadPart,
        v11,
        a6,
        24LL);
  }
  if ( a3 )
    HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v16);
}
