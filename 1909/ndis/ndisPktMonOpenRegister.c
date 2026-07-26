/*
 * XREFs of ndisPktMonOpenRegister @ 0x1C0102588
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007CBC0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093C18 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     PktMonClientComponentUnregister @ 0x1C0023D0C (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C0023D2C (PktMonClientComponentRegister.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00C976C (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00C9934 (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonOpenRegister(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rbp
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  char v12[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  int v15; // [rsp+60h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (_QWORD *)(a1 + 920);
  v15 = *(_DWORD *)L"r";
  v13[1] = &v14;
  v4 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)L"Lower";
  v13[0] = 786442LL;
  v12[0] = 1;
  v6 = PktMonClientComponentRegister(a1 + 920, v1 + 808, v1 + 72, 4LL, *(_DWORD *)(v4 + 464));
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 59;
LABEL_4:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        1,
        v7,
        (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
        a1,
        v6);
    }
  }
  else
  {
    v6 = PktMonClientSetCompProperty(v2, 9, (__int64)v12, 1u);
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v7 = 60;
      goto LABEL_4;
    }
    v6 = PktMonClientSetCompProperty(v2, 2, *(_QWORD *)(a1 + 16) + 4056LL, 4u);
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v7 = 61;
      goto LABEL_4;
    }
    v11 = 0;
    if ( *(_DWORD *)(a1 + 248) )
    {
      while ( 1 )
      {
        v6 = PktMonClientSetCompProperty(v2, 7, a1 + 2 * (v11 + 126LL), 2u);
        if ( v6 )
          break;
        if ( ++v11 >= *(_DWORD *)(a1 + 248) )
          goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v7 = 62;
      goto LABEL_4;
    }
LABEL_16:
    v6 = PktMonClientAddEdge(
           (__int64)v2,
           (__int64)v13,
           v9,
           v10,
           *(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL),
           (_QWORD *)(a1 + 936));
    if ( !v6 )
      return v6;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 63;
      goto LABEL_4;
    }
  }
LABEL_5:
  PktMonClientComponentUnregister(v2);
  return v6;
}
