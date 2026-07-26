/*
 * XREFs of ndisCompleteLegacyRequest @ 0x1C00445F4
 * Callers:
 *     NdisMQueryInformationComplete @ 0x1C0043910 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C00439D0 (NdisMSetInformationComplete.c)
 *     ndisMAbortRequests @ 0x1C0062084 (ndisMAbortRequests.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisCompleteLegacyRequest(__int64 a1, unsigned int a2, __int64 a3)
{
  KIRQL v6; // al
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // [rsp+20h] [rbp-28h]

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2299315;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v7 = (_DWORD *)a3;
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 576);
    *(_QWORD *)(a1 + 576) = 0LL;
    v8 = *(_QWORD *)(a1 + 2224);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(0x4Fu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, v8, v7, a2);
  if ( v7 )
  {
    v9 = v7[8];
    if ( !v9 || (unsigned int)(v9 - 1) <= 1 )
    {
      *(_DWORD *)(v8 + 52) = v7[15];
      *(_DWORD *)(v8 + 56) = v7[16];
    }
    ExFreePoolWithTag(v7, 0);
    ndisMOidRequestCompleteInternal(a1, v8, a2, v8 & -(__int64)(a3 != 0));
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
    {
      LODWORD(v10) = a2;
      WPP_SF_qqd(0x50u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, v8, v10);
    }
  }
}
