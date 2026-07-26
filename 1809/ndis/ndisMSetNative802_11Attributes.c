/*
 * XREFs of ndisMSetNative802_11Attributes @ 0x1C00F0A54
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     Duplicate802_11AttachAttributes @ 0x1C008299C (Duplicate802_11AttachAttributes.c)
 */

__int64 __fastcall ndisMSetNative802_11Attributes(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v6; // edi
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x84u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  if ( *(_QWORD *)(a1 + 768) )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    v6 = Duplicate802_11AttachAttributes(
           _byteswap_ushort(*(_WORD *)(*(_QWORD *)(a1 + 3792) + 24LL)),
           a2,
           a3,
           a4,
           (__int64)&v8);
    if ( v6 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0x85u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
    }
    else
    {
      *(_QWORD *)(a1 + 768) = v8;
    }
  }
  return v6;
}
