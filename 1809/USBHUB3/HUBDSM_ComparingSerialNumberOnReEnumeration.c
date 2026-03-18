/*
 * XREFs of HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C001E250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0psqzq @ 0x1C00278CC (McTemplateK0psqzq.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002C5A0 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDSM_ComparingSerialNumberOnReEnumeration(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // edi
  const void *v4; // r14
  unsigned int v5; // esi
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0LL;
  v3 = 4089;
  v4 = (const void *)(*(_QWORD *)(v1 + 2152) + 12LL);
  if ( (*(_DWORD *)(v1 + 1636) & 0x800) == 0 )
    v4 = *(const void **)(v1 + 2152);
  v5 = *(_DWORD *)(v1 + 256) - 2;
  v6 = *(_DWORD *)(v1 + 2148) - ((*(_DWORD *)(v1 + 1636) & 0x800) != 0 ? 14 : 2);
  if ( v6 == v5 )
  {
    v2 = v1 + 1732;
    v9 = RtlCompareMemory((const void *)(v1 + 1734), v4, v5);
    if ( v9 == v5 )
      return v3;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x72u,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
      v9,
      v5);
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x71u,
      (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
  }
  if ( (*(_DWORD *)(v1 + 2436) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", v1 + 504);
  if ( v2 )
  {
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      McTemplateK0psqzq(v8, v7, v1 + 1516, *(_QWORD *)(*(_QWORD *)v1 + 248LL), v4, v6, v2 + 2, v5);
    return 4061;
  }
  else
  {
    v3 = 4061;
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      McTemplateK0psqzq(v8, v7, v1 + 1516, *(_QWORD *)(*(_QWORD *)v1 + 248LL), v4, v6, 0LL, 0);
  }
  return v3;
}
