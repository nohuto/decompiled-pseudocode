/*
 * XREFs of ?ndisNsiGetInterfaceRosEnumObject@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00F9F90
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C0002A30 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosEnumObject(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // edi
  struct _NM_REQUEST_GET_PARAMETER *v4; // r13
  char v5; // bl
  char *v6; // r12
  unsigned int v7; // ebp
  int v8; // esi
  char v9; // r15
  int v10; // edi
  int v11; // r14d
  const void *p_InterfaceGuid; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  struct _NDIS_IF_BLOCK *v21; // [rsp+88h] [rbp+10h]

  v3 = 0;
  v4 = a3;
  v5 = (char)a1;
  if ( !a2 )
    a2 = a1;
  v21 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      83,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)a3);
    a2 = v21;
  }
  v6 = (char *)*((_QWORD *)v4 + 5);
  v7 = *((_DWORD *)v4 + 13);
  v8 = *((_DWORD *)v4 + 12);
  if ( v6 )
  {
    v9 = 0;
    if ( v8 > 0 )
    {
      while ( 1 )
      {
        if ( v9 )
        {
LABEL_27:
          v4 = a3;
          v5 = (char)a1;
          v3 = 0;
          break;
        }
        if ( v7 > 0x214 )
        {
          switch ( v7 )
          {
            case 0x218u:
              v10 = 16;
              p_InterfaceGuid = &a1->InterfaceGuid;
              v11 = 552;
              break;
            case 0x228u:
              v10 = 1;
              p_InterfaceGuid = &a1->ifConnectorPresent;
              v11 = 556;
              break;
            case 0x22Cu:
              v10 = 4;
              p_InterfaceGuid = &a1->ifFlags;
              v11 = 560;
              break;
            case 0x230u:
              p_InterfaceGuid = &a2->MediaType;
              v10 = 4;
              v16 = ndisIfReferenceMiniport((__int64)a1);
              v17 = v16;
              if ( v16 )
              {
                _m_prefetchw((const void *)(v16 + 4424));
                v18 = *(_DWORD *)(v16 + 4424);
                do
                {
                  v19 = v18;
                  v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 4424), v18, v18);
                }
                while ( v19 != v18 );
                if ( (v18 & 0x100) != 0 )
                  p_InterfaceGuid = &a1->MediaType;
                ndisIfDereferenceMiniport((__int64)a1, v17, 0x18u);
              }
              v11 = 564;
              break;
            case 0x234u:
              v10 = 4;
              p_InterfaceGuid = &a2->PhysicalMediumType;
              v11 = 568;
              v9 = 1;
              break;
            default:
              goto LABEL_48;
          }
        }
        else if ( v7 == 532 )
        {
          v10 = 4;
          p_InterfaceGuid = &a2->ConnectionType;
          v11 = 536;
        }
        else if ( v7 )
        {
          switch ( v7 )
          {
            case 4u:
              v10 = 516;
              p_InterfaceGuid = &a1->ifDescr;
              v11 = 520;
              break;
            case 0x208u:
              v10 = 2;
              p_InterfaceGuid = &a1->ifType;
              v11 = 524;
              break;
            case 0x20Cu:
              v10 = 4;
              v11 = 528;
              p_InterfaceGuid = &a2->AccessType;
              break;
            case 0x210u:
              v10 = 4;
              p_InterfaceGuid = &a1->DirectionType;
              v11 = 532;
              break;
            default:
              goto LABEL_48;
          }
        }
        else
        {
          v10 = 4;
          p_InterfaceGuid = &a1->_NDIS_NSI_INTERFACE_ENUM_ROS;
          v11 = 4;
        }
        if ( v8 < v10 || !p_InterfaceGuid )
        {
LABEL_48:
          v9 = 1;
          goto LABEL_26;
        }
        memmove(v6, p_InterfaceGuid, (unsigned int)v10);
        v13 = v11 - v7;
        v7 = v11;
        v6 += v13;
        v8 -= v13;
LABEL_26:
        a2 = v21;
        if ( v8 <= 0 )
          goto LABEL_27;
      }
    }
    v14 = v7 - *((_DWORD *)v4 + 13);
    *((_DWORD *)v4 + 12) = v14;
    if ( !v14 )
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
      84,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v5,
      (char)v4,
      v3);
  }
  return v3;
}
