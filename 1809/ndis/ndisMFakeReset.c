/*
 * XREFs of ndisMFakeReset @ 0x1C0062700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeReset(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0x5Fu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 540);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
      v3 = (unsigned __int16)v3 | 0xC0010000;
  }
  else
  {
    v3 = -1073741823;
  }
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0x60u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  return v3;
}
