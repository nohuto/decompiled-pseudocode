/*
 * XREFs of ndisMFakeWanSend @ 0x1C0062930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x57u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1);
  v2 = -1073741823;
  if ( v1 )
    v2 = *(_DWORD *)(v1 + 540);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x58u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1);
  return v2;
}
