/*
 * XREFs of ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C0094574
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisMethodDeviceOid(
        struct _NDIS_USER_OPEN_CONTEXT *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v10; // rbp
  int v11; // edx
  int v12; // r8d
  int v13; // ecx

  v5 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 66086
    && (v5 <= 0x10228
     || v5 > 0x1022A && v5 != 66104 && (v5 <= 0x10241 || v5 > 0x10243 && (v5 <= 0x10246 || v5 > 0x10248))) )
  {
    return 3221225659LL;
  }
  if ( a4 < 8 || a5 < 8 )
    return 3221291029LL;
  v10 = *((_QWORD *)a1 + 1);
  memset(a2, 0, 0xF8uLL);
  *(_DWORD *)&a2->NdisReserved[16] |= 8u;
  *(_QWORD *)&a2->NdisReserved[32] = &ndisIntReqIoctl;
  a2->Header = (NDIS_OBJECT_HEADER)15466902;
  a2->RequestType = NdisRequestMethod;
  v13 = *(_DWORD *)a3;
  a2->DATA.QUERY_INFORMATION.Oid = *(_DWORD *)a3;
  a2->DATA.QUERY_INFORMATION.BytesNeeded = *((_DWORD *)a3 + 1);
  a2->DATA.QUERY_INFORMATION.InformationBuffer = a3 + 8;
  a2->DATA.QUERY_INFORMATION.InformationBufferLength = a4 - 8;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a5 - 8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      v12,
      27,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)a2,
      v13,
      v10);
  }
  return ndisQuerySetMiniportEx(v10, 0LL, (__int64)a2, 0, 0LL, 0LL);
}
