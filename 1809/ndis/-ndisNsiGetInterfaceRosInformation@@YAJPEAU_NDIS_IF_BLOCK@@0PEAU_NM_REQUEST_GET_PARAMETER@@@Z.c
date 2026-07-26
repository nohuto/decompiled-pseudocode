/*
 * XREFs of ?ndisNsiGetInterfaceRosInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B6E90
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ?ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00E2544 (-ndisIfQueryProvider@@YAHPEAU_NDIS_IF_BLOCK@@IKPEAX@Z.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRosInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  unsigned int v3; // r15d
  struct _NDIS_IF_BLOCK *v4; // r10
  struct _NM_REQUEST_GET_PARAMETER *v5; // rbx
  struct _NDIS_IF_BLOCK *v6; // r12
  char *v7; // r13
  unsigned int v8; // ebp
  int v9; // edi
  char v10; // al
  const void *p_ifType; // rbx
  unsigned int v12; // esi
  unsigned int v13; // r14d
  int v14; // r12d
  unsigned int v15; // ecx
  unsigned int v16; // ebp
  __int64 v18; // rax
  __int64 v19; // rdx
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  struct _NDIS_IF_BLOCK *v23; // [rsp+88h] [rbp+10h]
  char v25; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = a2;
  if ( !a2 )
    v4 = a1;
  v5 = a3;
  v23 = v4;
  v6 = a1;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    WPP_SF_qq(0x48u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a3);
    v4 = v23;
  }
  v7 = (char *)*((_QWORD *)v5 + 5);
  v8 = *((_DWORD *)v5 + 13);
  v9 = *((_DWORD *)v5 + 12);
  if ( v7 )
  {
    v10 = 0;
    v25 = 0;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_22:
          v5 = a3;
          break;
        }
        p_ifType = 0LL;
        v12 = 0;
        if ( v8 <= 0x208 )
        {
          if ( v8 == 520 )
          {
            p_ifType = &v6->ifType;
            v13 = 2;
            v14 = 524;
          }
          else if ( v8 )
          {
            if ( v8 != 4 )
            {
LABEL_49:
              v10 = 1;
              v25 = 1;
              goto LABEL_21;
            }
            v13 = 516;
            p_ifType = &v6->ifDescr;
            v14 = 520;
          }
          else
          {
            v13 = 4;
            p_ifType = &v6->_NDIS_NSI_INTERFACE_ENUM_ROS;
            v14 = 4;
          }
        }
        else
        {
          switch ( v8 )
          {
            case 0x20Cu:
              p_ifType = &v4->AccessType;
              v14 = 528;
              break;
            case 0x210u:
              p_ifType = &v6->DirectionType;
              v14 = 532;
              break;
            case 0x214u:
              p_ifType = &v4->ConnectionType;
              v14 = 536;
              break;
            case 0x218u:
              p_ifType = &v6->InterfaceGuid;
              v13 = 16;
              v14 = 552;
              goto LABEL_16;
            case 0x228u:
              p_ifType = &v6->ifConnectorPresent;
              v13 = 1;
              v14 = 554;
              goto LABEL_16;
            case 0x22Au:
              v13 = 34;
              if ( v6->bNdisIsProvider )
                p_ifType = &v4->PermanentPhysAddress;
              else
                v12 = 16843009;
              v14 = 588;
              goto LABEL_16;
            case 0x24Cu:
              p_ifType = &v6->ifFlags;
              v14 = 592;
              break;
            case 0x250u:
              p_ifType = &v4->MediaType;
              v13 = 4;
              v18 = ndisIfReferenceMiniport((__int64)v6, 0x18u);
              v19 = v18;
              if ( v18 )
              {
                _m_prefetchw((const void *)(v18 + 4464));
                v20 = *(_DWORD *)(v18 + 4464);
                do
                {
                  v21 = v20;
                  v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 4464), v20, v20);
                }
                while ( v21 != v20 );
                if ( (v20 & 0x100) != 0 )
                  p_ifType = &v6->MediaType;
                ndisIfDereferenceMiniport((__int64)v6, v19, 0x18u);
              }
              v4 = v23;
              v14 = 596;
              goto LABEL_16;
            case 0x254u:
              p_ifType = &v4->PhysicalMediumType;
              v25 = 1;
              v14 = v8 + 4;
              break;
            default:
              goto LABEL_49;
          }
          v13 = 4;
        }
LABEL_16:
        if ( v9 < (int)v13 )
          goto LABEL_49;
        if ( v12 )
        {
          ndisIfQueryProvider(v4, v12, v13, v7);
        }
        else
        {
          if ( !p_ifType )
            goto LABEL_49;
          memmove(v7, p_ifType, v13);
        }
        v15 = v14 - v8;
        v8 = v14;
        v7 += v15;
        v10 = v25;
        v9 -= v15;
LABEL_21:
        v4 = v23;
        v6 = a1;
        if ( v9 <= 0 )
          goto LABEL_22;
      }
    }
    v16 = v8 - *((_DWORD *)v5 + 13);
    *((_DWORD *)v5 + 12) = v16;
    if ( !v16 )
      v3 = -1073741811;
  }
  else
  {
    *((_DWORD *)v5 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqd(0x49u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v6, v5, v3);
  return v3;
}
