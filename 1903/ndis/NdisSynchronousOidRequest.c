/*
 * XREFs of NdisSynchronousOidRequest @ 0x1C00692E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     ndisSynchronousOidRequestInternal @ 0x1C0070038 (ndisSynchronousOidRequestInternal.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 */

__int64 __fastcall NdisSynchronousOidRequest(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // si
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  unsigned int v6; // eax
  unsigned int v7; // edi
  char v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  char v11[4]; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *(_DWORD *)(a2 + 32);
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      27,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      v9,
      v11[0]);
  }
  v4 = *(_QWORD *)(BugCheckParameter2 + 24);
  v5 = *(_BYTE *)(v4 + 56);
  if ( v5 <= 6u && (v5 != 6 || *(_BYTE *)(v4 + 57) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 1uLL, 0LL, 0LL);
  v6 = ndisSynchronousOidRequestInternal(BugCheckParameter2, *(struct _NDIS_MINIPORT_BLOCK **)(BugCheckParameter2 + 16));
  v7 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Cu,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      v2,
      v10);
  }
  return v7;
}
