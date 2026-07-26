/*
 * XREFs of ndisFInvokeDirectOidRequest @ 0x1C008ECD8
 * Callers:
 *     ndisFDoDirectOidRequestInternal @ 0x1C006A890 (ndisFDoDirectOidRequestInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     ndisOidCloneForCompatibility @ 0x1C0008630 (ndisOidCloneForCompatibility.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDqD @ 0x1C008DFCC (WPP_RECORDER_SF_qDqD_ea_1C008DFCC.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequest(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  int v5; // r14d
  NDIS_STATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  PNDIS_OID_REQUEST v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-58h]
  char v15; // [rsp+38h] [rbp-40h]
  PNDIS_OID_REQUEST v16; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v5 = *(_DWORD *)(a2 + 32);
  v16 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      125,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v5,
      v15);
  }
  v7 = ndisOidCloneForCompatibility((_BYTE *)a1, v4, 0, &v16);
  v10 = v16;
  v11 = v7;
  if ( !v7 )
  {
    if ( v16 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        v7 + 11,
        126,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        v4,
        (char)v16,
        v16->DATA.QUERY_INFORMATION.Oid);
    }
    v12 = v4;
    if ( v10 )
      v12 = (__int64)v10;
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(v3 + 296))(*(_QWORD *)(a1 + 24), v12);
  }
  if ( v11 != 259 && v10 )
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v10, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqD(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, 0x7Fu, v14);
  return v11;
}
