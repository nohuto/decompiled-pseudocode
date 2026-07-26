/*
 * XREFs of NdisSynchronousOidRequest @ 0x1C0043A90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 */

__int64 __fastcall NdisSynchronousOidRequest(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(
      0x23u,
      &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      a2,
      *(_DWORD *)(a2 + 32));
  v4 = *(_QWORD *)(BugCheckParameter2 + 24);
  v5 = *(_BYTE *)(v4 + 56);
  if ( v5 <= 6u && (v5 != 6 || *(_BYTE *)(v4 + 57) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 1uLL, 0LL, 0LL);
  v6 = ndisSynchronousOidRequest(BugCheckParameter2, *(struct _NDIS_MINIPORT_BLOCK **)(BugCheckParameter2 + 16));
  v7 = v6;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v9) = v6;
    WPP_SF_qqd(0x24u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, *(_QWORD *)(BugCheckParameter2 + 16), a2, v9);
  }
  return v7;
}
