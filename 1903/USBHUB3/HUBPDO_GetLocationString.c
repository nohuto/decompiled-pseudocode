/*
 * XREFs of HUBPDO_GetLocationString @ 0x1C0018860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfExW @ 0x1C0011EF0 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall HUBPDO_GetLocationString(__int64 a1, wchar_t **a2)
{
  unsigned int v2; // ebx
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v6; // edx
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-20h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x64334855u);
  if ( PoolWithTag )
  {
    v6 = RtlStringCchPrintfExW(
           PoolWithTag,
           0xAuLL,
           0LL,
           &pcchRemaining,
           0x200u,
           L"USB(%d)",
           *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL));
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(pszFormat) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x6Cu,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        pszFormat);
    }
    *a2 = PoolWithTag;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x6Bu,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        0);
    return (unsigned int)-1073741670;
  }
  return v2;
}
