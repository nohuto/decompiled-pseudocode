/*
 * XREFs of ndisPktMonMiniportRegister @ 0x1C00BDA64
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     PktMonClientComponentUnregister @ 0x1C001A8C8 (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C001A9DC (PktMonClientComponentRegister.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     PktMonClientSetCompProperty @ 0x1C0026C04 (PktMonClientSetCompProperty.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     PktMonClientAddEdge @ 0x1C0083E64 (PktMonClientAddEdge.c)
 */

__int64 __fastcall ndisPktMonMiniportRegister(__int64 a1)
{
  int *v1; // r14
  _QWORD *v2; // rsi
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 v9; // cx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int16 v13; // r9
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-68h]
  char v16[8]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+48h] [rbp-40h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h] BYREF
  int v20; // [rsp+60h] [rbp-28h]

  v1 = (int *)(a1 + 1836);
  v2 = (_QWORD *)(a1 + 5864);
  v4 = *(_QWORD *)(a1 + 3888);
  v5 = *(_QWORD *)(a1 + 3792) + 880LL;
  v20 = *(_DWORD *)L"r";
  v17 = 786442;
  v18 = &v19;
  v15 = *(_DWORD *)(a1 + 1836);
  v19 = *(_QWORD *)L"Upper";
  v16[0] = 1;
  v6 = PktMonClientComponentRegister(a1 + 5864, v5, v4, 2LL, v15);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v9 = 13;
    goto LABEL_27;
  }
  v6 = PktMonClientSetCompProperty((__int64)v2, 9, (__int64)v16, 1u);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v9 = 14;
    goto LABEL_27;
  }
  v6 = PktMonClientSetCompProperty((__int64)v2, 1, a1 + 4088, 4u);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v9 = 15;
    goto LABEL_27;
  }
  v6 = PktMonClientSetCompProperty((__int64)v2, 4, a1 + 4040, 0x10u);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v9 = 16;
    goto LABEL_27;
  }
  v6 = PktMonClientSetCompProperty((__int64)v2, 5, (__int64)v1, 4u);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v9 = 17;
    goto LABEL_27;
  }
  if ( ndisMReferenceIfBlock(a1, 0x1Bu) )
  {
    v12 = *(_QWORD *)(a1 + 4072);
    v13 = *(_WORD *)(v12 + 1124);
    if ( v13 )
      v7 = PktMonClientSetCompProperty((__int64)v2, 6, v12 + 1126, v13);
    ndisMDereferenceIfBlock(a1, MPIFREF_PKTMON);
    if ( v7 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
        goto LABEL_3;
      v9 = 18;
      v14 = v7;
LABEL_28:
      WPP_SF_qD(v9, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v14);
      goto LABEL_3;
    }
  }
  v6 = PktMonClientAddEdge((__int64)v2, (__int64)&v17, v10, v11, *v1, (_QWORD *)(a1 + 5920));
  v7 = v6;
  if ( !v6 )
    return v7;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    v9 = 19;
LABEL_27:
    v14 = v6;
    goto LABEL_28;
  }
LABEL_3:
  PktMonClientComponentUnregister(v2);
  return v7;
}
