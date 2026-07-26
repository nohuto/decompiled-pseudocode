/*
 * XREFs of ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C011EA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDAssociateNotificationEvent(struct _NDIS_PD_QUEUE *a1, struct _KEVENT *a2)
{
  _QWORD *v2; // rbx
  struct _KEVENT *v3; // rdi
  char v4; // [rsp+30h] [rbp-18h]

  v2 = a1->PDPlatformReserved[1];
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      63,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      v4);
  }
  if ( !*((_BYTE *)v2 + 60) || *((_BYTE *)v2 + 61) || v2[8] )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)v2, *(_QWORD *)(*(_QWORD *)(v2[4] + 56LL) + 80LL));
  v2[8] = v3;
}
