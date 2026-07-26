/*
 * XREFs of ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C001E30C
 * Callers:
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisReferenceVcPtr @ 0x1C00874C0 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiFindInstanceName(
        struct _NDIS_CO_VC_PTR_BLOCK **a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        wchar_t *a3,
        unsigned __int16 a4)
{
  int v4; // ebx
  struct _NDIS_CO_VC_PTR_BLOCK *v5; // r14
  char v6; // bp
  int v8; // edx
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // rsi
  UNICODE_STRING String2; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  String2.Buffer = a3;
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  *a1 = 0LL;
  v6 = (char)a2;
  String2.MaximumLength = a4;
  String2.Length = a4;
  if ( a4 >= 0x30u && a3 && a3[5] == 58 )
  {
    p_WmiEnabledVcs = &a2->WmiEnabledVcs;
    Flink = a2->WmiEnabledVcs.Flink;
    while ( Flink != p_WmiEnabledVcs )
    {
      v5 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(&Flink[-20], a2) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a2) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)a2,
              18,
              10,
              (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
              v6);
          }
          v4 = -1073741823;
        }
        break;
      }
      Flink = Flink->Flink;
      v5 = 0LL;
    }
    if ( Flink == p_WmiEnabledVcs )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          0x12u,
          0xBu,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          v6,
          &String2.Length);
      v4 = -1073741162;
    }
    if ( v4 >= 0 )
      *a1 = v5;
  }
  else if ( !RtlEqualUnicodeString(a2->pAdapterInstanceName, &String2, 1u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        18,
        12,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        v6);
    }
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v4;
}
