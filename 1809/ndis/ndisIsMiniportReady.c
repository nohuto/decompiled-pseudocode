/*
 * XREFs of ndisIsMiniportReady @ 0x1C005021C
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005DD2C (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisReferenceNextUnprocessedMiniport @ 0x1C0115730 (ndisReferenceNextUnprocessedMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

char __fastcall ndisIsMiniportReady(_DWORD *a1)
{
  int v1; // r9d
  unsigned __int16 v3; // cx

  v1 = a1[30];
  if ( (v1 & 0x80200020) != 0 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
    {
      v3 = 62;
LABEL_13:
      WPP_SF_qD(v3, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, (__int64)a1, v1);
      return 0;
    }
    return 0;
  }
  v1 = a1[31];
  if ( (v1 & 0x1084910) != 0 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
    {
      v3 = 63;
      goto LABEL_13;
    }
    return 0;
  }
  v1 = a1[380];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
    {
      v3 = 64;
      goto LABEL_13;
    }
    return 0;
  }
  v1 = a1[975];
  if ( v1 != 1 )
  {
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
    {
      v3 = 65;
      goto LABEL_13;
    }
    return 0;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x42u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, (__int64)a1);
  return 1;
}
