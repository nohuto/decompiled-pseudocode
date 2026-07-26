/*
 * XREFs of ndisPMRejectAsync @ 0x1C00E7520
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisPMRejectAsync(PVOID P)
{
  void *v1; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+20h] [rbp-98h] BYREF

  v1 = (void *)*((_QWORD *)P + 4);
  v3 = (_QWORD *)*((_QWORD *)P + 5);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x47u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)v1);
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusCode = *((_DWORD *)P + 12);
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v4 + 5;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusBufferSize = 4;
    NdisMIndicateStatusEx(v1, &StatusIndication);
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0xFu);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x48u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, (__int64)v1);
}
