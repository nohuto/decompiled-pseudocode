/*
 * XREFs of ?ndisNsiGetInterfaceRodEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F98D0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00FB400 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // rbx
  struct _NDIS_IF_BLOCK *v5; // r13
  unsigned int v6; // edi
  const void *p_ifOperStatusFlags; // rdx
  struct _NDIS_IF_BLOCK *v8; // r12
  char *v9; // r15
  unsigned int v10; // r14d
  int v11; // ebp
  char v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // esi
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // r14d
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v21; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  int v23; // edx
  __int64 v24; // r15
  unsigned __int16 v25; // cx
  char *v26; // r12
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int Interrupt_low; // r13d
  char *v29; // rcx
  char v30; // [rsp+40h] [rbp-298h]
  unsigned int v31; // [rsp+44h] [rbp-294h] BYREF
  struct _NDIS_IF_BLOCK *v32; // [rsp+48h] [rbp-290h]
  char *v33; // [rsp+50h] [rbp-288h]
  _NDIS_MINIPORT_BLOCK *v34; // [rsp+58h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v35; // [rsp+60h] [rbp-278h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+68h] [rbp-270h]
  struct _NM_REQUEST_GET_PARAMETER *v37; // [rsp+70h] [rbp-268h]
  char v38[528]; // [rsp+80h] [rbp-258h] BYREF

  v3 = a3;
  v32 = a2;
  v35 = a1;
  v5 = a1;
  v37 = a3;
  v6 = 0;
  memset(v38, 0, 0x204uLL);
  v8 = a2;
  if ( !a2 )
    v8 = v5;
  v36 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(p_ifOperStatusFlags) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifOperStatusFlags,
      22,
      81,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v5,
      (char)v3);
  }
  v9 = (char *)*((_QWORD *)v3 + 5);
  v10 = *((_DWORD *)v3 + 13);
  v11 = *((_DWORD *)v3 + 12);
  v33 = v9;
  if ( v9 )
  {
    v12 = 0;
    v30 = 0;
    if ( v11 > 0 )
    {
      while ( 1 )
      {
        if ( v12 )
        {
LABEL_18:
          v3 = v37;
          break;
        }
        v13 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v10 > 0x218 )
        {
          switch ( v10 )
          {
            case 0x21Cu:
              v14 = 4;
              v15 = 544;
              p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v8)->ifOperStatusFlags;
              goto LABEL_13;
            case 0x220u:
              v14 = 4;
              v13 = 65798;
              v15 = 548;
              goto LABEL_13;
            case 0x224u:
              v14 = 34;
              if ( v5->bNdisIsProvider )
                p_ifOperStatusFlags = &v8->ifPhysAddress;
              else
                v13 = 16843010;
              v15 = 582;
              goto LABEL_13;
            case 0x246u:
              v14 = 34;
              if ( v5->bNdisIsProvider )
                p_ifOperStatusFlags = &v8->PermanentPhysAddress;
              else
                v13 = 16843009;
              v15 = 616;
              goto LABEL_13;
            case 0x268u:
              v14 = 4;
              v13 = 66184;
              v15 = 624;
              goto LABEL_13;
            case 0x270u:
              v14 = 8;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->XmitLinkSpeed;
              else
                v13 = 66180;
              v15 = 632;
              goto LABEL_13;
            case 0x278u:
              v14 = 8;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->RcvLinkSpeed;
              else
                v13 = 66181;
              v15 = 640;
              goto LABEL_13;
            case 0x280u:
              v14 = 1;
              if ( v5->bNdisIsProvider )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v5)->ifPromiscuousMode;
              else
                v13 = 66176;
              v15 = 641;
              goto LABEL_13;
            case 0x281u:
              v14 = 1;
              p_ifOperStatusFlags = &v5->ifDeviceWakeUpEnable;
              v15 = 642;
              goto LABEL_13;
            case 0x282u:
              v14 = 1;
              p_ifOperStatusFlags = &v5->ifHideInterfaceInUi;
              v15 = 644;
              goto LABEL_13;
            case 0x284u:
              v14 = 4;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->MediaConnectState;
              else
                v13 = 66186;
              v15 = 648;
              goto LABEL_13;
            case 0x288u:
              v14 = 4;
              if ( v32 )
                p_ifOperStatusFlags = &ndisGetMiniportIfBlock(v32)->MediaDuplexState;
              else
                v13 = 66188;
              v15 = v10 + 4;
              v30 = 1;
              goto LABEL_13;
            default:
              goto LABEL_90;
          }
        }
        if ( v10 == 536 )
        {
          v14 = 4;
          v13 = 66179;
          v15 = 540;
        }
        else if ( v10 )
        {
          if ( v10 == 4 )
          {
            v14 = 16;
            p_ifOperStatusFlags = &v5->NetworkGuid;
            v15 = 20;
          }
          else
          {
            if ( v10 != 20 )
            {
LABEL_90:
              v12 = 1;
              v30 = 1;
              goto LABEL_17;
            }
            v14 = 516;
            if ( !v5->bNdisIsProvider )
            {
              v13 = 66185;
LABEL_50:
              v15 = 536;
              goto LABEL_13;
            }
            if ( v5->IsNdisFilter )
            {
              Miniport = v5->Miniport;
              v34 = Miniport;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(p_ifOperStatusFlags) = 4;
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)p_ifOperStatusFlags,
                  22,
                  198,
                  (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                  (char)Miniport,
                  (char)v38);
              }
              memset(v38, 0, 0x204uLL);
              *(_WORD *)v38 = LOWORD(Miniport->BaseMiniport->Interrupt)
                            + 12
                            + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
              if ( *(_WORD *)v38 > 0x200u )
                *(_WORD *)v38 = 512;
              memmove(
                &v38[2],
                (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 598LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL));
              v24 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4040LL) + 596LL);
              v25 = *(_WORD *)v38;
              v26 = &v38[v24 + 2];
              if ( *(unsigned __int16 *)v38 - (unsigned int)v24 >= 2 )
              {
                LODWORD(v24) = v24 + 2;
                *(_WORD *)v26 = 45;
                v26 += 2;
                v25 = *(_WORD *)v38;
              }
              if ( v25 > (unsigned int)v24 )
              {
                BaseMiniport = Miniport->BaseMiniport;
                Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                if ( v25 - (unsigned int)v24 <= Interrupt_low )
                  Interrupt_low = v25 - (_DWORD)v24;
                memmove(v26, *(const void **)&BaseMiniport->Flags, Interrupt_low);
                v25 = *(_WORD *)v38;
                v26 += Interrupt_low;
                Miniport = v34;
                LODWORD(v24) = Interrupt_low + v24;
                v5 = v35;
              }
              if ( v25 - (unsigned int)v24 >= 2 )
              {
                LODWORD(v24) = v24 + 2;
                *(_WORD *)v26 = 45;
                v26 += 2;
                v25 = *(_WORD *)v38;
              }
              if ( v25 - (unsigned int)v24 >= 8 )
                *(_QWORD *)v26 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                           + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = 4;
                WPP_RECORDER_SF_qq(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v23,
                  22,
                  199,
                  (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                  (char)Miniport,
                  (char)v38);
              }
              v9 = v33;
              p_ifOperStatusFlags = v38;
              v8 = v36;
              goto LABEL_50;
            }
            p_ifOperStatusFlags = &v5->ifAlias;
            v15 = 536;
          }
        }
        else
        {
          v14 = 4;
          p_ifOperStatusFlags = &v5->_NDIS_NSI_INTERFACE_ENUM_ROD;
          v15 = 4;
        }
LABEL_13:
        if ( v11 < (int)v14 )
          goto LABEL_90;
        if ( v13 )
        {
          ProviderIfContext = v8->ProviderIfContext;
          QueryObjectHandler = v8->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v31 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v13, &v31, v9) )
          {
            v29 = v9;
          }
          else
          {
            if ( v31 >= v14 )
            {
LABEL_26:
              v12 = v30;
              v21 = v15 - v10;
              v10 = v15;
              v9 += v21;
              v33 = v9;
              v11 -= v21;
              goto LABEL_17;
            }
            v14 -= v31;
            v29 = &v9[v31];
          }
          memset(v29, 0, v14);
          goto LABEL_26;
        }
        if ( !p_ifOperStatusFlags )
          goto LABEL_90;
        memmove(v9, p_ifOperStatusFlags, v14);
        v12 = v30;
        v16 = v15 - v10;
        v10 = v15;
        v9 += v16;
        v33 = v9;
        v11 -= v16;
LABEL_17:
        v6 = 0;
        if ( v11 <= 0 )
          goto LABEL_18;
      }
    }
    v17 = v10 - *((_DWORD *)v3 + 13);
    *((_DWORD *)v3 + 12) = v17;
    if ( !v17 )
      v6 = -1073741811;
  }
  else
  {
    *((_DWORD *)v3 + 12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(p_ifOperStatusFlags) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifOperStatusFlags,
      22,
      82,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v5,
      (char)v3,
      v6);
  }
  return v6;
}
