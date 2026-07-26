/*
 * XREFs of ?ndisNsiGetInterfaceRwInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7570
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_IF_BLOCK *a2,
        struct _NM_REQUEST_GET_PARAMETER *a3)
{
  struct _NM_REQUEST_GET_PARAMETER *v3; // r15
  unsigned int v4; // esi
  struct _NDIS_IF_BLOCK *v5; // r8
  struct _NDIS_IF_BLOCK *v6; // rdx
  struct _NDIS_IF_BLOCK *v7; // rcx
  int v8; // r14d
  int v9; // edi
  char v10; // al
  char *v11; // r15
  _WORD *p_Length; // rbx
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  int v15; // r13d
  unsigned int v16; // ecx
  int v17; // r14d
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v20; // r13
  unsigned __int16 v21; // cx
  char *v22; // r9
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rdx
  unsigned int v24; // eax
  unsigned int Interrupt_low; // ecx
  __int64 v26; // rbx
  void *ProviderIfContext; // rcx
  int (__fastcall *QueryObjectHandler)(void *, unsigned int, unsigned int *, void *); // rax
  unsigned int v29; // ecx
  char *v30; // rcx
  char v31; // [rsp+30h] [rbp-298h]
  unsigned int v32; // [rsp+34h] [rbp-294h]
  unsigned int v33; // [rsp+38h] [rbp-290h] BYREF
  void *v34; // [rsp+40h] [rbp-288h]
  struct _NDIS_IF_BLOCK *v35; // [rsp+48h] [rbp-280h]
  struct _NDIS_IF_BLOCK *v36; // [rsp+50h] [rbp-278h]
  struct _NDIS_IF_BLOCK *v37; // [rsp+58h] [rbp-270h]
  _NDIS_MINIPORT_BLOCK *v38; // [rsp+60h] [rbp-268h]
  struct _NM_REQUEST_GET_PARAMETER *v39; // [rsp+68h] [rbp-260h]
  _WORD v40[264]; // [rsp+70h] [rbp-258h] BYREF

  v36 = a1;
  v3 = a3;
  v39 = a3;
  v4 = 0;
  v5 = a2;
  v37 = a2;
  v6 = a1;
  v7 = v5;
  if ( !v5 )
    v7 = v6;
  v35 = v7;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    WPP_SF_qqq(0x44u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v6, v5, v3);
    v7 = v35;
    v6 = v36;
    v5 = v37;
  }
  v8 = *((_DWORD *)v3 + 13);
  v9 = *((_DWORD *)v3 + 12);
  v34 = (void *)*((_QWORD *)v3 + 5);
  if ( v34 )
  {
    v10 = 0;
    v31 = 0;
    if ( v9 > 0 )
    {
      v11 = (char *)v34;
      while ( 1 )
      {
        if ( v10 )
        {
LABEL_22:
          v3 = v39;
          v5 = v37;
          break;
        }
        p_Length = 0LL;
        v13 = 0;
        if ( v8 )
        {
          if ( v8 == 16 )
          {
            v14 = 4;
            v13 = 66184;
            v15 = 20;
          }
          else
          {
            if ( v8 != 20 )
            {
              if ( v8 == 536 )
              {
                v14 = 34;
                if ( v6->bNdisIsProvider )
                  p_Length = &v7->ifPhysAddress.Length;
                else
                  v13 = 16843010;
                v15 = 570;
              }
              else
              {
                if ( v8 != 570 )
                  goto LABEL_28;
                v14 = 516;
                v31 = 1;
                v15 = 1086;
                if ( v6->ifL2NetworkInfo )
                {
                  p_Length = &v6->ifL2NetworkInfo->Length;
                }
                else
                {
                  if ( v9 < 516 )
                    goto LABEL_28;
                  memset(v11, 0, 0x204uLL);
                  v11 += 516;
                  v8 = 1086;
                  v9 -= 516;
                }
              }
              goto LABEL_17;
            }
            v14 = 516;
            if ( v6->bNdisIsProvider )
            {
              if ( !v6->IsNdisFilter )
              {
                p_Length = &v6->ifAlias.Length;
                v15 = 536;
                goto LABEL_17;
              }
              Miniport = v6->Miniport;
              v38 = Miniport;
              if ( (unsigned __int8)byte_1C00A0265 >= 4u )
                WPP_SF_qq(0xC5u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, Miniport, v40);
              memset(v40, 0, 0x204uLL);
              v40[0] = LOWORD(Miniport->BaseMiniport->Interrupt)
                     + *(_WORD *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4072LL) + 596LL)
                     + 12;
              if ( v40[0] > 0x200u )
                v40[0] = 512;
              memmove(
                &v40[1],
                (const void *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4072LL) + 598LL),
                *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4072LL) + 596LL));
              v20 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)&Miniport->Reserved4.Length + 4072LL) + 596LL);
              v21 = v40[0];
              v22 = (char *)&v40[1] + v20;
              v34 = (char *)&v40[1] + v20;
              if ( v40[0] - (unsigned int)v20 >= 2 )
              {
                LODWORD(v20) = v20 + 2;
                *(_WORD *)v22 = 45;
                v22 += 2;
                v21 = v40[0];
                v34 = v22;
              }
              if ( v21 > (unsigned int)v20 )
              {
                BaseMiniport = Miniport->BaseMiniport;
                v24 = v21 - (_DWORD)v20;
                Interrupt_low = LOWORD(BaseMiniport->Interrupt);
                v32 = Interrupt_low;
                if ( v24 <= Interrupt_low )
                {
                  Interrupt_low = v24;
                  v32 = v24;
                }
                v26 = Interrupt_low;
                memmove(v22, *(const void **)&BaseMiniport->Flags, Interrupt_low);
                v21 = v40[0];
                v22 = (char *)v34 + v26;
                LODWORD(v20) = v32 + v20;
                Miniport = v38;
              }
              if ( v21 - (unsigned int)v20 >= 2 )
              {
                LODWORD(v20) = v20 + 2;
                *(_WORD *)v22 = 45;
                v22 += 2;
                v21 = v40[0];
              }
              if ( v21 - (unsigned int)v20 >= 8 )
                *(_QWORD *)v22 = *(_QWORD *)(*((_QWORD *)Miniport->Reserved4.Buffer + 1)
                                           + 2 * (((unsigned __int64)*Miniport->Reserved4.Buffer - 8) >> 1));
              if ( (unsigned __int8)byte_1C00A0265 >= 4u )
                WPP_SF_qq(0xC6u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, Miniport, v40);
              p_Length = v40;
            }
            else
            {
              v13 = 66185;
            }
            v15 = 536;
          }
        }
        else
        {
          v14 = 16;
          p_Length = &v6->NetworkGuid;
          v15 = 16;
        }
LABEL_17:
        if ( v9 < (int)v14 )
          goto LABEL_28;
        if ( v13 )
        {
          ProviderIfContext = v35->ProviderIfContext;
          QueryObjectHandler = v35->ProviderHandle->ProviderCharacteristics.QueryObjectHandler;
          v33 = v14;
          if ( QueryObjectHandler(ProviderIfContext, v13, &v33, v11) )
          {
            v30 = v11;
          }
          else
          {
            if ( v33 >= v14 )
            {
LABEL_56:
              v29 = v15 - v8;
              v8 = v15;
              v11 += v29;
              v10 = v31;
              v9 -= v29;
              goto LABEL_21;
            }
            v14 -= v33;
            v30 = &v11[v33];
          }
          memset(v30, 0, v14);
          goto LABEL_56;
        }
        if ( !p_Length )
        {
LABEL_28:
          v10 = 1;
          v31 = 1;
          goto LABEL_21;
        }
        memmove(v11, p_Length, v14);
        v16 = v15 - v8;
        v8 = v15;
        v11 += v16;
        v10 = v31;
        v9 -= v16;
LABEL_21:
        v7 = v35;
        v6 = v36;
        if ( v9 <= 0 )
          goto LABEL_22;
      }
    }
    v17 = v8 - *((_DWORD *)v3 + 13);
    *((_DWORD *)v3 + 12) = v17;
    if ( !v17 )
      v4 = -1073741811;
  }
  else
  {
    *((_DWORD *)v3 + 12) = 0;
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqqL(0x45u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v6, v5, v3, v4);
  return v4;
}
