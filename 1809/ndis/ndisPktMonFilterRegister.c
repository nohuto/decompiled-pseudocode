/*
 * XREFs of ndisPktMonFilterRegister @ 0x1C00C36AC
 * Callers:
 *     ndisPktMonRegisterComponentsCallback @ 0x1C0050680 (ndisPktMonRegisterComponentsCallback.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     PktMonClientComponentUnregister @ 0x1C001A8C8 (PktMonClientComponentUnregister.c)
 *     PktMonClientComponentRegister @ 0x1C001A9DC (PktMonClientComponentRegister.c)
 *     ndisReferenceRef @ 0x1C001C7EC (ndisReferenceRef.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     PktMonClientSetCompProperty @ 0x1C0026C04 (PktMonClientSetCompProperty.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     PktMonClientAddEdge @ 0x1C0083E64 (PktMonClientAddEdge.c)
 */

__int64 __fastcall ndisPktMonFilterRegister(__int64 a1)
{
  KSPIN_LOCK *v1; // r15
  unsigned int v3; // ebx
  int v4; // eax
  unsigned __int16 v6; // cx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // [rsp+48h] [rbp-9h] BYREF
  char v13[7]; // [rsp+49h] [rbp-8h] BYREF
  int v14; // [rsp+50h] [rbp-1h] BYREF
  __int64 *v15; // [rsp+58h] [rbp+7h]
  int v16; // [rsp+60h] [rbp+Fh] BYREF
  __int64 *v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+1Fh] BYREF
  int v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+2Fh] BYREF
  int v21; // [rsp+88h] [rbp+37h]

  v1 = (KSPIN_LOCK *)(a1 + 320);
  v19 = *(_DWORD *)L"r";
  v3 = 0;
  v18 = *(_QWORD *)L"Upper";
  v15 = &v18;
  v21 = *(_DWORD *)L"r";
  v17 = &v20;
  v14 = 786442;
  v20 = *(_QWORD *)L"Lower";
  v16 = 786442;
  v12 = 0;
  v13[0] = 1;
  if ( (unsigned __int8)ndisReferenceRef((KSPIN_LOCK *)(a1 + 320)) )
  {
    v4 = PktMonClientComponentRegister(
           a1 + 800,
           *(_QWORD *)(a1 + 16) + 352LL,
           *(_QWORD *)(a1 + 16) + 112LL,
           3LL,
           *(_DWORD *)(a1 + 344));
    v3 = v4;
    if ( v4 )
    {
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
        goto LABEL_4;
      v6 = 24;
    }
    else
    {
      v4 = PktMonClientSetCompProperty(a1 + 800, 9, (__int64)v13, 1u);
      v3 = v4;
      if ( v4 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
          goto LABEL_4;
        v6 = 25;
      }
      else
      {
        v4 = PktMonClientSetCompProperty(a1 + 800, 1, a1 + 696, 4u);
        v3 = v4;
        if ( v4 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
            goto LABEL_4;
          v6 = 26;
        }
        else
        {
          v4 = PktMonClientSetCompProperty(a1 + 800, 2, *(_QWORD *)(a1 + 32) + 4088LL, 4u);
          v3 = v4;
          if ( v4 )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
              goto LABEL_4;
            v6 = 27;
          }
          else
          {
            v8 = *(_QWORD *)(a1 + 112);
            if ( v8 && (v4 = PktMonClientSetCompProperty(a1 + 800, 3, v8 + 696, 4u), (v3 = v4) != 0) )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
                goto LABEL_4;
              v6 = 28;
            }
            else if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0
                   && (v4 = PktMonClientSetCompProperty(a1 + 800, 5, a1 + 344, 4u), (v3 = v4) != 0) )
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
                goto LABEL_4;
              v6 = 29;
            }
            else
            {
              v9 = *(_QWORD *)(a1 + 16);
              if ( *(_QWORD *)(v9 + 208)
                || *(_QWORD *)(v9 + 232)
                || *(_QWORD *)(a1 + 592)
                || *(_QWORD *)(a1 + 616)
                || (v12 = 1, v4 = PktMonClientSetCompProperty(a1 + 800, 8, (__int64)&v12, 1u), (v3 = v4) == 0) )
              {
                v4 = PktMonClientAddEdge(a1 + 800, (__int64)&v14, v8, v7, *(_DWORD *)(a1 + 344), (_QWORD *)(a1 + 896));
                v3 = v4;
                if ( v4 )
                {
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
                    goto LABEL_4;
                  v6 = 31;
                }
                else
                {
                  v4 = PktMonClientAddEdge(
                         a1 + 800,
                         (__int64)&v16,
                         v10,
                         v11,
                         *(_DWORD *)(*(_QWORD *)(a1 + 32) + 1836LL),
                         (_QWORD *)(a1 + 856));
                  v3 = v4;
                  if ( !v4 )
                    goto LABEL_5;
                  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
                  {
LABEL_4:
                    PktMonClientComponentUnregister((_QWORD *)(a1 + 800));
LABEL_5:
                    ndisDereferenceRef(v1, 0x18u);
                    return v3;
                  }
                  v6 = 32;
                }
              }
              else
              {
                if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 2u )
                  goto LABEL_4;
                v6 = 30;
              }
            }
          }
        }
      }
    }
    WPP_SF_qD(v6, &WPP_f8ff208bb2bd30b987d99581135aa705_Traceguids, a1, v4);
    goto LABEL_4;
  }
  return v3;
}
