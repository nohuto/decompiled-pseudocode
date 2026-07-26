/*
 * XREFs of ndisOidPreIovInvalidateConfigBlock @ 0x1C00B40F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025890 (WPP_RECORDER_SF_qqqq.c)
 *     WPP_RECORDER_SF_qqqDD @ 0x1C0025EA0 (WPP_RECORDER_SF_qqqDD.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 */

char __fastcall ndisOidPreIovInvalidateConfigBlock(__int64 a1, int a2)
{
  char v3; // di
  int v4; // edx
  char v6[4]; // [rsp+48h] [rbp-10h]

  v3 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Au,
      0x15u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 32));
  if ( (_UNKNOWN *)ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32)) == &ndisIntReqGeneric )
    v3 = 0;
  else
    *(_DWORD *)(a1 + 40) = -1073741637;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = *(_DWORD *)(a1 + 40);
    WPP_RECORDER_SF_qqqDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      0x1Au,
      0x16u,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      *(_QWORD *)a1,
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 8),
      v3,
      *(_DWORD *)v6);
  }
  return v3;
}
