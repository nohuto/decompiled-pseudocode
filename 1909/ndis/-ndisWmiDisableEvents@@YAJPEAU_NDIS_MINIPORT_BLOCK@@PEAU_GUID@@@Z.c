/*
 * XREFs of ?ndisWmiDisableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z @ 0x1C00A75A4
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisWmiGetGuid @ 0x1C002806C (ndisWmiGetGuid.c)
 */

__int64 __fastcall ndisWmiDisableEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _GUID *a2)
{
  unsigned int v2; // ebx
  struct _GUID *v3; // rsi
  int v5; // edx
  int v6; // eax
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v8 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      70,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  ndisWmiGetGuid(&v8, (__int64)a1, v3, 0);
  if ( v8 )
  {
    v6 = *(_DWORD *)(v8 + 24);
    if ( (v6 & 2) != 0 )
      *(_DWORD *)(v8 + 24) = v6 & 0x7FFFFFFF;
    else
      v2 = -1073741808;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        v8 + 18,
        v8 + 71,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    v2 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      18,
      72,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      v2);
  }
  return v2;
}
