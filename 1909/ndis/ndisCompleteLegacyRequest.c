/*
 * XREFs of ndisCompleteLegacyRequest @ 0x1C006A4C8
 * Callers:
 *     NdisMQueryInformationComplete @ 0x1C0069290 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C00693A0 (NdisMSetInformationComplete.c)
 *     ndisMAbortRequests @ 0x1C0099BD4 (ndisMAbortRequests.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisCompleteLegacyRequest(KSPIN_LOCK *a1, int a2, __int64 a3)
{
  KIRQL v6; // al
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // edx

  v6 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v7 = (_DWORD *)a3;
  }
  else
  {
    v7 = (_DWORD *)a1[72];
    a1[72] = 0LL;
    v8 = a1[276];
  }
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x3Cu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v8,
      (char)v7,
      a2);
  if ( v7 )
  {
    v10 = v7[8];
    if ( !v10 || (unsigned int)(v10 - 1) <= 1 )
    {
      *(_DWORD *)(v8 + 52) = v7[15];
      *(_DWORD *)(v8 + 56) = v7[16];
    }
    ExFreePoolWithTag(v7, 0);
    ndisMOidRequestCompleteInternal((__int64)a1, v8, a2, v8 & -(__int64)(a3 != 0));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        11,
        61,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)a1,
        v8,
        a2);
    }
  }
}
