/*
 * XREFs of ndisMInvokeDirectOidRequest @ 0x1C001D824
 * Callers:
 *     ndisMDoDirectOidRequest @ 0x1C001D980 (ndisMDoDirectOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisOidCloneForCompatibility @ 0x1C0008630 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeDirectOidRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  int v4; // r14d
  NDIS_STATUS v6; // eax
  int v7; // edx
  PNDIS_OID_REQUEST v8; // rbx
  unsigned int v9; // edi
  __int64 v11; // [rsp+38h] [rbp-30h]
  PNDIS_OID_REQUEST v12; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 3760);
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 32);
  v12 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      257,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v4);
  }
  v6 = ndisOidCloneForCompatibility((_BYTE *)a1, v3, 0, &v12);
  v8 = v12;
  v9 = v6;
  if ( !v6 )
  {
    if ( v12 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        11,
        258,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        v3,
        (char)v12,
        v12->DATA.QUERY_INFORMATION.Oid);
    }
    if ( v8 )
      v3 = (__int64)v8;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v2 + 248))(*(_QWORD *)(a1 + 24), v3);
  }
  if ( v9 != 259 && v8 )
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v8, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v9;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x103u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v4,
      v11);
  }
  return v9;
}
