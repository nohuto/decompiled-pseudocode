/*
 * XREFs of ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00FEB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDAssociateNotificationEvent(struct _NDIS_PD_QUEUE *a1, struct _KEVENT *a2)
{
  _QWORD *v2; // rbx

  v2 = a1->PDPlatformReserved[1];
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1, a2);
  if ( !*((_BYTE *)v2 + 60) || *((_BYTE *)v2 + 61) || v2[8] )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)v2, *(_QWORD *)(*(_QWORD *)(v2[4] + 56LL) + 80LL));
  v2[8] = a2;
}
