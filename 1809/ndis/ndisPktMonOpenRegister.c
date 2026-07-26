/*
 * XREFs of ndisPktMonOpenRegister @ 0x1C00C37D0
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 * Callees:
 *     PktMonClientComponentUnregister @ 0x1C001A8C8 (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C001A9DC (PktMonClientComponentRegister.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     PktMonClientSetCompProperty @ 0x1C0026C04 (PktMonClientSetCompProperty.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     PktMonClientAddEdge @ 0x1C0083E64 (PktMonClientAddEdge.c)
 */

__int64 __fastcall ndisPktMonOpenRegister(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbp
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v8; // cx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  char v12[8]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (_QWORD *)(a1 + 920);
  v16 = *(_DWORD *)L"r";
  v13 = 786442;
  v14 = &v15;
  v4 = *(_QWORD *)(a1 + 16);
  v15 = *(_QWORD *)L"Lower";
  v12[0] = 1;
  v5 = PktMonClientComponentRegister(a1 + 920, v1 + 808, v1 + 72, 4LL, *(_DWORD *)(v4 + 464));
  v6 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v8 = 59;
LABEL_18:
    WPP_SF_qD(v8, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, v5);
    goto LABEL_3;
  }
  v5 = PktMonClientSetCompProperty((__int64)v2, 9, (__int64)v12, 1u);
  v6 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v8 = 60;
    goto LABEL_18;
  }
  v5 = PktMonClientSetCompProperty((__int64)v2, 2, *(_QWORD *)(a1 + 16) + 4088LL, 4u);
  v6 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v8 = 61;
    goto LABEL_18;
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 248) )
  {
    while ( 1 )
    {
      v5 = PktMonClientSetCompProperty((__int64)v2, 7, a1 + 2 * (v11 + 126LL), 2u);
      v6 = v5;
      if ( v5 )
        break;
      if ( ++v11 >= *(_DWORD *)(a1 + 248) )
        goto LABEL_15;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
      goto LABEL_3;
    v8 = 62;
    goto LABEL_18;
  }
LABEL_15:
  v5 = PktMonClientAddEdge(
         (__int64)v2,
         (__int64)&v13,
         v9,
         v10,
         *(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL),
         (_QWORD *)(a1 + 976));
  v6 = v5;
  if ( !v5 )
    return v6;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    v8 = 63;
    goto LABEL_18;
  }
LABEL_3:
  PktMonClientComponentUnregister(v2);
  return v6;
}
