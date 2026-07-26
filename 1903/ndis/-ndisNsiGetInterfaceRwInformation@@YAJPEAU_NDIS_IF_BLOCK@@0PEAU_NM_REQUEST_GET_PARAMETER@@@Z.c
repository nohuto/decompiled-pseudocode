/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA2A0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NDIS_IF_BLOCK *v3; // rax
  unsigned int v4; // esi
  struct _NM_REQUEST_GET_PARAMETER *v5; // rbp
  char v6; // bl
  int v8; // edx
  int v9; // r15d
  int v10; // edi
  char v11; // al
  char *v12; // rbp
  const void *p_ifAlias; // rbx
  unsigned int v14; // r12d
  unsigned int v15; // r14d
  unsigned int v16; // ecx
  int v17; // r15d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v22; // rcx
  char *v23; // r9
  int v24; // eax
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int v26; // eax
  unsigned int Interrupt_low; // ecx
  __int64 v28; // rbx
  char *v29; // rcx
  char v30; // [rsp+50h] [rbp-298h]
  int v31; // [rsp+54h] [rbp-294h]
  int v32; // [rsp+54h] [rbp-294h]
  unsigned int v33; // [rsp+58h] [rbp-290h]
  unsigned int v34; // [rsp+5Ch] [rbp-28Ch] BYREF
  void *v35; // [rsp+60h] [rbp-288h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+68h] [rbp-280h]
  _NDIS_MINIPORT_BLOCK *v37; // [rsp+70h] [rbp-278h]
  struct _NM_REQUEST_GET_PARAMETER *v38; // [rsp+78h] [rbp-270h]
  struct _NDIS_IF_BLOCK *v39; // [rsp+80h] [rbp-268h]
  char v40[528]; // [rsp+90h] [rbp-258h] BYREF

  v3 = a2;
  v38 = a3;
  v4 = 0;
  v39 = a2;
  v5 = a3;
  v6 = (char)a2;
  if ( !a2 )
    v3 = a1;
  v36 = v3;
  memset(v40, 0, 0x204uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      22,
      69,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v6,
      (char)v5);
  }
  v9 = *((_DWORD *)v5 + 13);
  v10 = *((_DWORD *)v5 + 12);
  v35 = (void *)*((_QWORD *)v5 + 5);
  if ( v35 )
  {
    v11 = 0;
    v30 = 0;
    if ( v10 > 0 )
    {
      v12 = (char *)v35;
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_23:
          v5 = v38;
          v6 = (char)v39;
          break;
        }
        p_ifAlias = 0LL;
        v14 = 0;
        if ( v9 )
        {
          switch ( v9 )
          {
            case 16:
              v15 = 4;
              v31 = 20;
              v14 = 66184;
              break;
            case 20:
              v15 = 516;
              if ( !a1->bNdisIsProvider )
              {
                v14 = 66185;
                goto LABEL_33;
              }
              if ( !a1->IsNdisFilter )
              {
                p_ifAlias = &a1->ifAlias;
LABEL_33:
                v31 = 536;
                break;
              }
              Miniport = a1->Miniport;
              v37 = Miniport;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v8) = 4;
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v8,
                  22,
                  198,
                  (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                  (char)Miniport,
                  (char)v40);
              }
              memset(v40, 0, 0x204uLL);
              *(_WORD *)v40 = LOWORD(Miniport->BaseMiniport->Interrupt)
                            + 12
                            + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
              if ( *(_WORD *)v40 > 0x200u )
                *(_WORD *)v40 = 512;
              memmove(
                &v40[2],
                (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 598LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL));
              v8 = *(unsigned __int16 *)v40;
              v22 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
              v23 = &v40[v22 + 2];
              v32 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
              v35 = &v40[v22 + 2];
              if ( *(unsigned __int16 *)v40 - (unsigned int)v22 >= 2 )
              {
                LODWORD(v22) = v22 + 2;
                *(_WORD *)v23 = 45;
                v23 += 2;
                v8 = *(unsigned __int16 *)v40;
                v35 = v23;
                v32 = v22;
              }
              v24 = (unsigned __int16)v8;
              if ( (unsigned __int16)v8 > (unsigned int)v22 )
              {
                BaseMiniport = Miniport->BaseMiniport;
                v26 = v24 - v22;
                Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                v33 = Interrupt_low;
                if ( v26 <= Interrupt_low )
                {
                  Interrupt_low = v26;
                  v33 = v26;
                }
                v28 = Interrupt_low;
                memmove(v23, *(const void **)&BaseMiniport->Flags, Interrupt_low);
                v23 = (char *)v35 + v28;
                LODWORD(v22) = v33 + v32;
                v8 = *(unsigned __int16 *)v40;
                Miniport = v37;
              }
              if ( (unsigned __int16)v8 - (unsigned int)v22 >= 2 )
              {
                LODWORD(v22) = v22 + 2;
                *(_WORD *)v23 = 45;
                v23 += 2;
                v8 = *(unsigned __int16 *)v40;
              }
              if ( (unsigned __int16)v8 - (unsigned int)v22 >= 8 )
                *(_QWORD *)v23 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                           + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v8) = 4;
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v8,
                  22,
                  199,
                  (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                  (char)Miniport,
                  (char)v40);
              }
              p_ifAlias = v40;
              v31 = 536;
              break;
            case 536:
              v15 = 34;
              if ( a1->bNdisIsProvider )
                p_ifAlias = &v36->ifPhysAddress;
              else
                v14 = 16843010;
              v31 = 570;
              break;
            case 570:
              v15 = 516;
              v31 = 1086;
              v30 = 1;
              if ( a1->ifL2NetworkInfo )
              {
                p_ifAlias = a1->ifL2NetworkInfo;
              }
              else
              {
                if ( v10 < 516 )
                  goto LABEL_29;
                memset(v12, 0, 0x204uLL);
                v12 += 516;
                v9 = 1086;
                v10 -= 516;
              }
              break;
            default:
              goto LABEL_29;
          }
        }
        else
        {
          v15 = 16;
          p_ifAlias = &a1->NetworkGuid;
          v31 = 16;
        }
        if ( v10 < (int)v15 )
          goto LABEL_29;
        if ( v14 )
        {
          ProviderIfContext = v36->ProviderIfContext;
          QueryObjectHandler = v36->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v34 = v15;
          if ( QueryObjectHandler(ProviderIfContext, v14, &v34, v12) )
          {
            v29 = v12;
            goto LABEL_64;
          }
          if ( v34 < v15 )
          {
            v15 -= v34;
            v29 = &v12[v34];
LABEL_64:
            memset(v29, 0, v15);
          }
        }
        else
        {
          if ( !p_ifAlias )
          {
LABEL_29:
            v11 = 1;
            v30 = 1;
            goto LABEL_22;
          }
          memmove(v12, p_ifAlias, v15);
        }
        v16 = v31 - v9;
        v9 = v31;
        v12 += v16;
        v11 = v30;
        v10 -= v16;
LABEL_22:
        if ( v10 <= 0 )
          goto LABEL_23;
      }
    }
    v17 = v9 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v17;
    if ( !v17 )
      v4 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      0x16u,
      0x46u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v6,
      (char)v5,
      v4);
  return v4;
}
