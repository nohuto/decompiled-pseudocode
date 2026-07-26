/*
 * XREFs of ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FAFE0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z @ 0x1C00FB400 (-ndisGetMiniportIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU1@@Z.c)
 *     ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C0114804 (-ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRodInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *p_ifOperStatusFlags,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // r15d
  struct _NDIS_IF_BLOCK *v4; // r10
  struct _NM_REQUEST_GET_PARAMETER *v5; // r13
  struct _NDIS_IF_BLOCK *v6; // rbp
  struct _NDIS_IF_BLOCK *v7; // rbx
  int v8; // ecx
  int v9; // esi
  int v10; // r14d
  char v11; // r12
  char *v12; // r13
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // ebp
  unsigned int v16; // ecx
  int v17; // esi
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  char v21; // [rsp+30h] [rbp-78h]
  int v22; // [rsp+50h] [rbp-58h]
  struct _NDIS_IF_BLOCK *v23; // [rsp+58h] [rbp-50h]
  struct _NDIS_IF_BLOCK *v25; // [rsp+B8h] [rbp+10h]
  unsigned int v27; // [rsp+C8h] [rbp+20h] BYREF

  v25 = p_ifOperStatusFlags;
  v3 = 0;
  v4 = p_ifOperStatusFlags;
  v5 = a3;
  if ( !p_ifOperStatusFlags )
    v4 = a1;
  v6 = p_ifOperStatusFlags;
  v23 = v4;
  v7 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = (char)p_ifOperStatusFlags;
    LOBYTE(p_ifOperStatusFlags) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifOperStatusFlags,
      22,
      71,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v21,
      (char)a3);
    v4 = v23;
  }
  v8 = *((_DWORD *)v5 + 12);
  v9 = *((_DWORD *)v5 + 13);
  v22 = v8;
  if ( *((_QWORD *)v5 + 5) )
  {
    v10 = *((_DWORD *)v5 + 12);
    v11 = 0;
    if ( v8 > 0 )
    {
      v12 = (char *)*((_QWORD *)v5 + 5);
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_20:
          v5 = a3;
          goto LABEL_21;
        }
        v13 = 0;
        p_ifOperStatusFlags = 0LL;
        if ( v9 || (unsigned int)v8 < 0xD8 || v6 )
        {
          switch ( v9 )
          {
            case 0:
              v14 = 4;
              v13 = 66179;
              v15 = 4;
              goto LABEL_14;
            case 4:
              v14 = 4;
              v15 = 8;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v4)->ifOperStatusFlags;
              goto LABEL_14;
            case 8:
              v14 = 4;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->MediaConnectState;
              else
                v13 = 66186;
              v15 = 12;
              goto LABEL_14;
            case 12:
              v14 = 4;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->MediaDuplexState;
              else
                v13 = 66188;
              v15 = 16;
              goto LABEL_14;
            case 16:
              v14 = 4;
              v13 = 65798;
              v15 = 20;
              goto LABEL_14;
            case 20:
              v14 = 1;
              if ( a1->bNdisIsProvider )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(a1)->ifPromiscuousMode;
              else
                v13 = 66176;
              v15 = 21;
              goto LABEL_14;
            case 21:
              v14 = 1;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&a1->ifDeviceWakeUpEnable;
              v15 = 24;
              goto LABEL_14;
            case 24:
              v14 = 8;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->XmitLinkSpeed;
              else
                v13 = 66180;
              v15 = 32;
              goto LABEL_14;
            case 32:
              v14 = 8;
              if ( v6 )
                p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&ndisGetMiniportIfBlock(v6)->RcvLinkSpeed;
              else
                v13 = 66181;
              v15 = 40;
              goto LABEL_14;
            case 40:
              v14 = 8;
              v13 = 66177;
              v15 = 48;
              goto LABEL_14;
            case 48:
              v14 = 8;
              v13 = 66178;
              v15 = 56;
              goto LABEL_14;
            case 56:
              v14 = 8;
              v13 = 66182;
              v15 = 64;
              goto LABEL_14;
            case 64:
              if ( (unsigned int)v10 >= 0x90 && v7->bNdisIsProvider )
              {
                v14 = 144;
                v13 = 131334;
                v15 = 208;
              }
              else
              {
                v14 = 8;
                v13 = 131611;
                v15 = 72;
              }
              goto LABEL_14;
            case 72:
              v14 = 8;
              v13 = 131332;
              v15 = 80;
              goto LABEL_14;
            case 80:
              v14 = 8;
              v13 = 131609;
              v15 = 88;
              goto LABEL_14;
            case 88:
              v14 = 8;
              v13 = 131592;
              v15 = 96;
              goto LABEL_14;
            case 96:
              v14 = 8;
              v13 = 131594;
              v15 = 104;
              goto LABEL_14;
            case 104:
              v14 = 8;
              v13 = 131596;
              v15 = 112;
              goto LABEL_14;
            case 112:
              v14 = 8;
              v13 = 131610;
              v15 = 120;
              goto LABEL_14;
            case 120:
              v14 = 8;
              v13 = 131586;
              v15 = 128;
              goto LABEL_14;
            case 128:
              v14 = 8;
              v13 = 131588;
              v15 = 136;
              goto LABEL_14;
            case 136:
              v14 = 8;
              v13 = 131590;
              v15 = 144;
              goto LABEL_14;
            case 144:
              v14 = 8;
              v13 = 131331;
              v15 = 152;
              goto LABEL_14;
            case 152:
              v14 = 8;
              v13 = 131612;
              v15 = 160;
              goto LABEL_14;
            case 160:
              v14 = 8;
              v13 = 131591;
              v15 = 168;
              goto LABEL_14;
            case 168:
              v14 = 8;
              v13 = 131593;
              v15 = 176;
              goto LABEL_14;
            case 176:
              v14 = 8;
              v13 = 131595;
              v15 = 184;
              goto LABEL_14;
            case 184:
              v14 = 8;
              v13 = 131585;
              v15 = 192;
              goto LABEL_14;
            case 192:
              v14 = 8;
              v13 = 131587;
              v15 = 200;
              goto LABEL_14;
            case 200:
              v14 = 8;
              v13 = 131589;
              v15 = 208;
              goto LABEL_14;
            case 208:
              v14 = 4;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&a1->_NDIS_NSI_INTERFACE_ENUM_ROD;
              v15 = 212;
              goto LABEL_14;
            case 212:
              v14 = 4;
              p_ifOperStatusFlags = (struct _NDIS_IF_BLOCK *)&v4->SupportedStatistics;
              v15 = 216;
              goto LABEL_13;
            default:
              goto LABEL_84;
          }
        }
        v14 = 216;
        v13 = 66183;
        v15 = 216;
LABEL_13:
        v11 = 1;
LABEL_14:
        if ( v10 < (int)v14 )
          break;
        if ( v13 )
        {
          ProviderIfContext = v4->ProviderIfContext;
          QueryObjectHandler = v4->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v27 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v13, &v27, v12) )
          {
            memset(v12, 0, v14);
          }
          else
          {
            if ( v27 < v14 )
              memset(&v12[v27], 0, v14 - v27);
            if ( !v23->bNdisIsProvider )
              ndisNsiPostGetInterfaceRodInformation(a1, v13, v14, v12);
          }
        }
        else
        {
          if ( !p_ifOperStatusFlags )
            break;
          memmove(v12, p_ifOperStatusFlags, v14);
        }
        v16 = v15 - v9;
        v9 = v15;
        v12 += v16;
        v10 -= v16;
LABEL_19:
        v6 = v25;
        v4 = v23;
        v7 = a1;
        v8 = v22;
        if ( v10 <= 0 )
          goto LABEL_20;
      }
LABEL_84:
      v11 = 1;
      goto LABEL_19;
    }
LABEL_21:
    v17 = v9 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v17;
    if ( !v17 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifOperStatusFlags,
      0x16u,
      0x48u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v7,
      (char)v6,
      (char)v5,
      v3);
  return v3;
}
