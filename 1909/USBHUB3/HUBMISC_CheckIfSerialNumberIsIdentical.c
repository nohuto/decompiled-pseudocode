/*
 * XREFs of HUBMISC_CheckIfSerialNumberIsIdentical @ 0x1C002F974
 * Callers:
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C0020150 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0psqzq @ 0x1C0029BEC (McTemplateK0psqzq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002ED04 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBMISC_CheckIfSerialNumberIsIdentical(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // ebx
  const void *v4; // r14
  SIZE_T v5; // rdx
  unsigned int v6; // esi
  int v7; // r15d
  __int64 v9; // [rsp+28h] [rbp-30h]

  v1 = 0LL;
  v3 = 4089;
  v4 = (const void *)(*(_QWORD *)(a1 + 2152) + 12LL);
  if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
    v4 = *(const void **)(a1 + 2152);
  v5 = -(*(_DWORD *)(a1 + 1636) & 0x800);
  v6 = *(_DWORD *)(a1 + 256) - 2;
  v7 = *(_DWORD *)(a1 + 2148) - ((*(_DWORD *)(a1 + 1636) & 0x800) != 0 ? 14 : 2);
  if ( v7 == v6 )
  {
    v1 = a1 + 1732;
    v5 = RtlCompareMemory((const void *)(a1 + 1734), v4, v6);
    if ( (_DWORD)v5 == v6 )
      return v3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x73u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
        v5,
        v6);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x72u,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 2436) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", a1 + 504);
  if ( v1 )
  {
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      LODWORD(v9) = v7;
      McTemplateK0psqzq(a1, v5, (const GUID *)(a1 + 1516), *(_QWORD *)(*(_QWORD *)a1 + 248LL), v4, v9, v1 + 2, v6);
    }
    return 4061;
  }
  else
  {
    v3 = 4061;
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      LODWORD(v9) = v7;
      McTemplateK0psqzq(a1, v5, (const GUID *)(a1 + 1516), *(_QWORD *)(*(_QWORD *)a1 + 248LL), v4, v9, 0LL, 0);
    }
  }
  return v3;
}
