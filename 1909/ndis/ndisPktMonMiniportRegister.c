/*
 * XREFs of ndisPktMonMiniportRegister @ 0x1C0106F3C
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007CBC0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     PktMonClientComponentUnregister @ 0x1C0023D0C (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C0023D2C (PktMonClientComponentRegister.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00C976C (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00C9934 (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonMiniportRegister(__int64 a1)
{
  int *v1; // r14
  __int64 v2; // rdx
  _QWORD *v3; // rsi
  __int64 v4; // r8
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int16 v14; // r9
  char v15[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp-28h]

  v1 = (int *)(a1 + 1836);
  v2 = *(_QWORD *)(a1 + 3760);
  v3 = (_QWORD *)(a1 + 5800);
  v4 = *(_QWORD *)(a1 + 3856);
  v18 = *(_DWORD *)L"r";
  v17 = *(_QWORD *)L"Upper";
  v16[1] = &v17;
  v6 = *(_DWORD *)(a1 + 1836);
  v16[0] = 786442LL;
  v15[0] = 1;
  v8 = PktMonClientComponentRegister(a1 + 5800, v2 + 880, v4, 2LL, v6);
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 13;
LABEL_4:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        1,
        v9,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        a1,
        v8);
    }
  }
  else
  {
    v8 = PktMonClientSetCompProperty(v3, 9, (__int64)v15, 1u);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v9 = 14;
      goto LABEL_4;
    }
    v8 = PktMonClientSetCompProperty(v3, 1, a1 + 4056, 4u);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v9 = 15;
      goto LABEL_4;
    }
    v8 = PktMonClientSetCompProperty(v3, 4, a1 + 4008, 0x10u);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v9 = 16;
      goto LABEL_4;
    }
    v8 = PktMonClientSetCompProperty(v3, 5, (__int64)v1, 4u);
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v9 = 17;
      goto LABEL_4;
    }
    if ( ndisMReferenceIfBlock(a1, 0x1Bu) )
    {
      v13 = *(_QWORD *)(a1 + 4040);
      v14 = *(_WORD *)(v13 + 1124);
      if ( v14 )
        v8 = PktMonClientSetCompProperty(v3, 6, v13 + 1126, v14);
      ndisMDereferenceIfBlock(a1, MPIFREF_PKTMON);
      if ( v8 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_5;
        v9 = 18;
        goto LABEL_4;
      }
    }
    v8 = PktMonClientAddEdge((__int64)v3, (__int64)v16, v11, v12, *v1, (_QWORD *)(a1 + 5816));
    if ( !v8 )
      return v8;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 19;
      goto LABEL_4;
    }
  }
LABEL_5:
  PktMonClientComponentUnregister(v3);
  return v8;
}
