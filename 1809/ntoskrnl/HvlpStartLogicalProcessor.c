/*
 * XREFs of HvlpStartLogicalProcessor @ 0x140273178
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x140271F8C (HvlpEnableNextLogicalProcessor.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpStartLogicalProcessor(int a1, int a2, unsigned __int16 a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 result; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  __int16 v13; // ax
  __int16 v14; // bx
  PHYSICAL_ADDRESS v15[3]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v16[3]; // [rsp+40h] [rbp-38h] BYREF

  memset(a4, 0, 0x38uLL);
  while ( 1 )
  {
    result = HvlpDepositPages(a3, v8, 0);
    if ( (_DWORD)result )
      break;
    v10 = HvlpAcquireHypercallPage(v16, 1, 0LL, 24LL);
    v11 = HvlpAcquireHypercallPage(v15, 2, 0LL, 56LL);
    v10[2] = 0LL;
    v12 = v11;
    *(_DWORD *)v10 = a1;
    *((_DWORD *)v10 + 1) = a2;
    *((_DWORD *)v10 + 2) = *(_DWORD *)(KeNodeBlock[a3] + 160);
    *((_DWORD *)v10 + 3) = -2147483647;
    v13 = HvcallCodeVa();
    v14 = v13;
    if ( v13 != 11 )
    {
      *a4 = *(_OWORD *)v12;
      a4[1] = *((_OWORD *)v12 + 1);
      a4[2] = *((_OWORD *)v12 + 2);
      *((_QWORD *)a4 + 6) = v12[6];
      *(_WORD *)a4 = v13;
    }
    HvlpReleaseHypercallPage((unsigned int *)v15);
    HvlpReleaseHypercallPage((unsigned int *)v16);
    if ( v14 != 11 )
      return v14 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
