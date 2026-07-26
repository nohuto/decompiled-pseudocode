/*
 * XREFs of ndisPMRejectAsync @ 0x1C00751B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __fastcall ndisPMRejectAsync(PVOID P)
{
  void *v1; // rdi
  _QWORD *v2; // r14
  int v4; // edx
  _QWORD *v5; // rbx
  int v6; // edx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (void *)*((_QWORD *)P + 4);
  v2 = (_QWORD *)*((_QWORD *)P + 5);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      71,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)v1);
  }
  while ( v2 )
  {
    v5 = v2;
    v2 = (_QWORD *)*v2;
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusCode = *((_DWORD *)P + 12);
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.StatusBuffer = v5 + 5;
    StatusIndication.SourceHandle = v1;
    StatusIndication.StatusBufferSize = 4;
    NdisMIndicateStatusEx(v1, &StatusIndication);
    ExFreePoolWithTag(v5, 0);
  }
  ExFreePoolWithTag(P, 0);
  ndisDereferenceMiniport((__int64)v1, 0xFu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      11,
      72,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)v1);
  }
}
