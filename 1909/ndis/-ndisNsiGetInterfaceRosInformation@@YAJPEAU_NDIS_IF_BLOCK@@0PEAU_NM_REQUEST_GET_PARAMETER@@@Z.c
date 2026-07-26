/*
 * XREFs of ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00FA7E0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C0113EB4 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // r15d
  struct _NM_REQUEST_GET_PARAMETER *v4; // rbx
  struct _NDIS_IF_BLOCK *v5; // r12
  char *v6; // r13
  unsigned int v7; // ebp
  int v8; // edi
  char v9; // al
  const void *p_ifType; // rbx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  __int64 v17; // rax
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  struct _NDIS_IF_BLOCK *v22; // [rsp+98h] [rbp+10h]
  char v24; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = a3;
  v5 = a1;
  if ( !a2 )
    a2 = a1;
  v22 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      73,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)a3);
    a2 = v22;
  }
  v6 = (char *)*((_QWORD *)v4 + 5);
  v7 = *((_DWORD *)v4 + 13);
  v8 = *((_DWORD *)v4 + 12);
  if ( v6 )
  {
    v9 = 0;
    v24 = 0;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        if ( v9 )
        {
LABEL_22:
          v4 = a3;
          break;
        }
        p_ifType = 0LL;
        v11 = 0;
        if ( v7 <= 0x208 )
        {
          if ( v7 == 520 )
          {
            p_ifType = &v5->ifType;
            v12 = 2;
            v13 = 524;
          }
          else if ( v7 )
          {
            if ( v7 != 4 )
            {
LABEL_49:
              v9 = 1;
              v24 = 1;
              goto LABEL_21;
            }
            v12 = 516;
            p_ifType = &v5->ifDescr;
            v13 = 520;
          }
          else
          {
            v12 = 4;
            p_ifType = &v5->_NDIS_NSI_INTERFACE_ENUM_ROS;
            v13 = 4;
          }
        }
        else
        {
          switch ( v7 )
          {
            case 0x20Cu:
              p_ifType = &a2->AccessType;
              v13 = 528;
              break;
            case 0x210u:
              p_ifType = &v5->DirectionType;
              v13 = 532;
              break;
            case 0x214u:
              p_ifType = &a2->ConnectionType;
              v13 = 536;
              break;
            case 0x218u:
              p_ifType = &v5->InterfaceGuid;
              v12 = 16;
              v13 = 552;
              goto LABEL_16;
            case 0x228u:
              p_ifType = &v5->ifConnectorPresent;
              v12 = 1;
              v13 = 554;
              goto LABEL_16;
            case 0x22Au:
              v12 = 34;
              if ( v5->bNdisIsProvider )
                p_ifType = &a2->PermanentPhysAddress;
              else
                v11 = 16843009;
              v13 = 588;
              goto LABEL_16;
            case 0x24Cu:
              p_ifType = &v5->ifFlags;
              v13 = 592;
              break;
            case 0x250u:
              p_ifType = &a2->MediaType;
              v12 = 4;
              v17 = ndisIfReferenceMiniport((__int64)v5);
              v18 = v17;
              if ( v17 )
              {
                _m_prefetchw((const void *)(v17 + 4424));
                v19 = *(_DWORD *)(v17 + 4424);
                do
                {
                  v20 = v19;
                  v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 4424), v19, v19);
                }
                while ( v20 != v19 );
                if ( (v19 & 0x100) != 0 )
                  p_ifType = &v5->MediaType;
                ndisIfDereferenceMiniport((__int64)v5, v18, 0x18u);
              }
              v13 = 596;
              goto LABEL_16;
            case 0x254u:
              p_ifType = &a2->PhysicalMediumType;
              v24 = 1;
              v13 = v7 + 4;
              break;
            default:
              goto LABEL_49;
          }
          v12 = 4;
        }
LABEL_16:
        if ( v8 < (int)v12 )
          goto LABEL_49;
        if ( v11 )
        {
          ndisIfQueryProvider(v22, v11, v12, v6);
        }
        else
        {
          if ( !p_ifType )
            goto LABEL_49;
          memmove(v6, p_ifType, v12);
        }
        v14 = v13 - v7;
        v7 = v13;
        v6 += v14;
        v9 = v24;
        v8 -= v14;
LABEL_21:
        v5 = a1;
        a2 = v22;
        if ( v8 <= 0 )
          goto LABEL_22;
      }
    }
    v15 = v7 - *((_DWORD *)v4 + 13);
    *((_DWORD *)v4 + 12) = v15;
    if ( !v15 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v4 + 12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      74,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)v5,
      (char)v4,
      v3);
  }
  return v3;
}
