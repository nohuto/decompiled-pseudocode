/*
 * XREFs of NdisFSynchronousOidRequest @ 0x1C0069010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisSynchronousOidRequestInternal @ 0x1C0070208 (ndisSynchronousOidRequestInternal.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

__int64 __fastcall NdisFSynchronousOidRequest(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // esi
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x1Du,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 32),
      BugCheckParameter2,
      a2,
      *(_DWORD *)(a2 + 32));
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  v5 = *(_BYTE *)(v4 + 100);
  if ( v5 <= 6u && (v5 != 6 || *(_BYTE *)(v4 + 101) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 2uLL, 0LL, 0LL);
  v6 = ndisSynchronousOidRequestInternal(BugCheckParameter2, *(struct _NDIS_MINIPORT_BLOCK **)(BugCheckParameter2 + 32));
  v8 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      0xBu,
      0x1Eu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 32),
      BugCheckParameter2,
      v2,
      v10);
  }
  return v8;
}
