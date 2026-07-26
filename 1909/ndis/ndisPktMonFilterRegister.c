/*
 * XREFs of ndisPktMonFilterRegister @ 0x1C010242C
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C007CBC0 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     PktMonClientComponentUnregister @ 0x1C0023D0C (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C0023D2C (PktMonClientComponentRegister.c)
 *     ndisReferenceRef @ 0x1C003F3A4 (ndisReferenceRef.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     PktMonClientAddEdge @ 0x1C00C976C (PktMonClientAddEdge.c)
 *     PktMonClientSetCompProperty @ 0x1C00C9934 (PktMonClientSetCompProperty.c)
 */

__int64 __fastcall ndisPktMonFilterRegister(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  unsigned int v2; // ebx
  int v4; // edx
  int v5; // r9d
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // [rsp+40h] [rbp-19h] BYREF
  char v13[7]; // [rsp+41h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v16; // [rsp+68h] [rbp+Fh] BYREF
  int v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh] BYREF
  int v19; // [rsp+80h] [rbp+27h]

  v1 = (KSPIN_LOCK *)(a1 + 312);
  v2 = 0;
  v17 = *(_DWORD *)L"r";
  v16 = *(_QWORD *)L"Upper";
  v14[1] = &v16;
  v19 = *(_DWORD *)L"r";
  v15[1] = &v18;
  v14[0] = 786442LL;
  v18 = *(_QWORD *)L"Lower";
  v15[0] = 786442LL;
  v12 = 0;
  v13[0] = 1;
  if ( ndisReferenceRef((KSPIN_LOCK *)(a1 + 312), 0x18u) )
  {
    v2 = PktMonClientComponentRegister(
           a1 + 792,
           *(_QWORD *)(a1 + 16) + 352LL,
           *(_QWORD *)(a1 + 16) + 112LL,
           3LL,
           *(_DWORD *)(a1 + 336));
    if ( v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 24;
LABEL_5:
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v4,
          1,
          v5,
          (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
          a1,
          v2);
      }
    }
    else
    {
      v2 = PktMonClientSetCompProperty((_QWORD *)(a1 + 792), 9, (__int64)v13, 1u);
      if ( v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 25;
        goto LABEL_5;
      }
      v2 = PktMonClientSetCompProperty((_QWORD *)(a1 + 792), 1, a1 + 688, 4u);
      if ( v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 26;
        goto LABEL_5;
      }
      v2 = PktMonClientSetCompProperty((_QWORD *)(a1 + 792), 2, *(_QWORD *)(a1 + 32) + 4056LL, 4u);
      if ( v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 27;
        goto LABEL_5;
      }
      v8 = *(_QWORD *)(a1 + 112);
      if ( v8 )
      {
        v2 = PktMonClientSetCompProperty((_QWORD *)(a1 + 792), 3, v8 + 688, 4u);
        if ( v2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v5 = 28;
          goto LABEL_5;
        }
      }
      if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0 )
      {
        v2 = PktMonClientSetCompProperty((_QWORD *)(a1 + 792), 5, a1 + 336, 4u);
        if ( v2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v5 = 29;
          goto LABEL_5;
        }
      }
      v9 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)(v9 + 208) && !*(_QWORD *)(v9 + 232) && !*(_QWORD *)(a1 + 584) && !*(_QWORD *)(a1 + 608) )
      {
        v12 = 1;
        v2 = PktMonClientSetCompProperty((_QWORD *)(a1 + 792), 8, (__int64)&v12, 1u);
        if ( v2 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_6;
          v5 = 30;
          goto LABEL_5;
        }
      }
      v2 = PktMonClientAddEdge(a1 + 792, (__int64)v14, v8, v7, *(_DWORD *)(a1 + 336), (_QWORD *)(a1 + 832));
      if ( v2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v5 = 31;
        goto LABEL_5;
      }
      v2 = PktMonClientAddEdge(
             a1 + 792,
             (__int64)v15,
             v10,
             v11,
             *(_DWORD *)(*(_QWORD *)(a1 + 32) + 1836LL),
             (_QWORD *)(a1 + 808));
      if ( !v2 )
        goto LABEL_7;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 32;
        goto LABEL_5;
      }
    }
LABEL_6:
    PktMonClientComponentUnregister((_QWORD *)(a1 + 792));
LABEL_7:
    ndisDereferenceRef(v1, 0x18u);
  }
  return v2;
}
