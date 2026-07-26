/*
 * XREFs of ndisWmiExecuteMethod @ 0x1C001DEEC
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 *     NdisWdfExecuteMethod @ 0x1C009ED50 (NdisWdfExecuteMethod.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 *     ?ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z @ 0x1C001E30C (-ndisWmiFindInstanceName@@YAJPEAPEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEA_WG@Z.c)
 *     ndisWmiGetGuid @ 0x1C002806C (ndisWmiGetGuid.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ?ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues@@YAHPEAU_NDIS_RECEIVE_QUEUE_INFO_ARRAY@@KKPEAK@Z @ 0x1C00A77EC (-ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues@@YAHPEAU_NDIS_RECEIVE_QUEUE_INFO_ARRAY@@KKPEAK@Z.c)
 *     ?ndisWmiXlateNdisOffloadToWmiOffload@@YAXPEAU_NDIS_OFFLOAD@@@Z @ 0x1C00A7A18 (-ndisWmiXlateNdisOffloadToWmiOffload@@YAXPEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams@@YAXPEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z @ 0x1C00A7D40 (-ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams@@YAXPEAU_NDIS_RECEIVE_QUEUE_PARAMETERS@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, int *a3, unsigned int a4, int *a5)
{
  __int64 v6; // r13
  struct _NDIS_CO_VC_PTR_BLOCK *v8; // rsi
  int v10; // edx
  int v11; // edx
  signed int InstanceName; // ebx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char *v17; // r9
  int v18; // r10d
  __int64 v19; // rbx
  int v20; // edx
  void *v21; // rdx
  int v22; // r8d
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v25; // rcx
  unsigned int SetMiniport; // eax
  int v27; // ecx
  unsigned int v28; // esi
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // r11d
  struct _NDIS_CO_VC_PTR_BLOCK *v33; // rcx
  int v34; // edx
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  signed int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // r11d
  _QWORD *v52; // rcx
  __m128i *v53; // r8
  __m128i v54; // xmm2
  __int32 v55; // edx
  unsigned int v56; // ecx
  struct _NDIS_CO_VC_PTR_BLOCK *v57; // [rsp+50h] [rbp-B0h]
  unsigned int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h]
  int v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+64h] [rbp-9Ch]
  struct _NDIS_CO_VC_PTR_BLOCK *v62; // [rsp+68h] [rbp-98h] BYREF
  char v63[8]; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h] BYREF
  char v66[256]; // [rsp+90h] [rbp-70h] BYREF
  __m128i v67; // [rsp+190h] [rbp+90h]
  __int32 v68; // [rsp+1A0h] [rbp+A0h]

  v6 = a2;
  v65 = a2;
  v8 = 0LL;
  v57 = 0LL;
  v62 = 0LL;
  memset(v66, 0, 0xF8uLL);
  v59 = 0;
  v58 = 0;
  *(_QWORD *)v63 = 0LL;
  v64 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      18,
      60,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (a3[11] & 0x80u) != 0 )
    goto LABEL_6;
  InstanceName = ndisWmiFindInstanceName(
                   &v62,
                   a1,
                   (wchar_t *)((char *)a3 + (unsigned int)a3[12] + 2),
                   *(_WORD *)((char *)a3 + (unsigned int)a3[12]));
  if ( InstanceName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        18,
        61,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    v33 = 0LL;
    v62 = 0LL;
LABEL_55:
    if ( InstanceName == 259 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v8 = v62;
  v57 = v62;
  if ( !v62 )
  {
LABEL_6:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
    {
      ndisReferenceMiniportByName((__int64)BindPaths->Paths);
      *(_QWORD *)v63 = v64;
    }
  }
  if ( !v6 )
  {
    if ( (int)ndisWmiGetGuid(&v65, a1, a3 + 6, 0LL) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v11,
          18,
          62,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)a1);
      }
      goto LABEL_62;
    }
    v6 = v65;
  }
  v14 = *(_DWORD *)(v6 + 24);
  if ( (v14 & 0x80u) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        18,
        63,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    InstanceName = -1073741637;
    goto LABEL_39;
  }
  if ( (v14 & 0x200) == 0 )
  {
    v44 = (unsigned int)a3[15];
    v21 = &ndisIntReqWmi;
    *(_DWORD *)&v66[88] |= 8u;
    *(_DWORD *)&v66[8] = 0;
    v45 = a3[14];
    *(_QWORD *)&v66[104] = &ndisIntReqWmi;
    *(_DWORD *)v66 = 15466902;
    *(_DWORD *)&v66[4] = 12;
    v22 = *(_DWORD *)(v6 + 16);
    *(_DWORD *)&v66[56] = v45;
    *(_QWORD *)&v66[40] = (char *)a3 + v44;
    *(_DWORD *)&v66[48] = a3[16];
    *(_DWORD *)&v66[52] = a4 - v44;
LABEL_88:
    *(_DWORD *)&v66[32] = v22;
    goto LABEL_23;
  }
  v15 = (unsigned int)a3[16];
  if ( (unsigned int)v15 < 0x20
    || (v16 = (unsigned int)a3[15], v17 = (char *)a3 + v16, *((_BYTE *)a3 + v16) != 2)
    || v17[1] != 1
    || *((_WORD *)v17 + 1) < 0x20u )
  {
LABEL_62:
    InstanceName = -1073741811;
    goto LABEL_39;
  }
  v18 = *((_DWORD *)v17 + 6);
  v19 = *((_QWORD *)v17 + 2);
  v60 = *((_DWORD *)v17 + 1);
  v61 = v18;
  if ( (v14 & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)(v6 + 16) == 66086 && a4 - (unsigned int)v16 < 0x43C )
    {
      v38 = 56;
      if ( a4 >= 0x38 )
      {
        a3[11] |= 0x20u;
        v39 = v16 + 1084;
        goto LABEL_51;
      }
      goto LABEL_69;
    }
    memmove((char *)a3 + v16, v17 + 32, v15 - 32);
    if ( (*(_DWORD *)(v6 + 24) & 0x4000000) == 0 )
    {
      v21 = &ndisIntReqWmi;
      v42 = (unsigned int)a3[15];
      *(_DWORD *)&v66[88] |= 8u;
      *(_DWORD *)&v66[8] = v60;
      v43 = a3[14];
      *(_QWORD *)&v66[104] = &ndisIntReqWmi;
      *(_DWORD *)v66 = 15466902;
      *(_DWORD *)&v66[4] = 12;
      v22 = *(_DWORD *)(v6 + 16);
      *(_DWORD *)&v66[56] = v43;
      *(_QWORD *)&v66[40] = (char *)a3 + v42;
      *(_DWORD *)&v66[48] = a3[16] - 32;
      *(_DWORD *)&v66[52] = a4 - v42;
LABEL_84:
      *(_QWORD *)&v66[16] = v19;
      if ( !v19 )
        v21 = *(void **)&v66[24];
      *(_QWORD *)&v66[24] = v21;
      *(_DWORD *)&v66[12] = v61;
      goto LABEL_88;
    }
    if ( a3[14] == 1 )
    {
      v40 = (unsigned int)a3[15];
      if ( a4 - (unsigned int)v40 < 0x10 )
      {
        v38 = 56;
        if ( a4 >= 0x38 )
        {
          a3[11] |= 0x20u;
          v39 = v40 + 16;
          goto LABEL_51;
        }
        goto LABEL_69;
      }
      *(_DWORD *)&v66[88] |= 8u;
      v21 = &ndisIntReqWmi;
      *(_QWORD *)&v66[104] = &ndisIntReqWmi;
      *(_DWORD *)v66 = 15466902;
      v22 = *(_DWORD *)(v6 + 16);
      *(_DWORD *)&v66[8] = v60;
      *(_QWORD *)&v66[40] = (char *)a3 + v40;
      v41 = a3[16] - 32;
      v59 = 16;
      *(_DWORD *)&v66[48] = v41;
      *(_DWORD *)&v66[4] = 1;
      goto LABEL_84;
    }
    goto LABEL_62;
  }
  v20 = *(_DWORD *)(v6 + 16);
  if ( ((v20 + 67042805) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v20 + 67042802) <= 1 && a4 - (unsigned int)v16 < 0x20 )
    {
      v38 = 56;
      if ( a4 >= 0x38 )
      {
        a3[11] |= 0x20u;
        v39 = v16 + 32;
        goto LABEL_51;
      }
LABEL_69:
      InstanceName = -1073741789;
      v38 = 4;
      goto LABEL_53;
    }
  }
  else if ( a4 - (unsigned int)v16 < 0x128 )
  {
    v38 = 56;
    if ( a4 >= 0x38 )
    {
      a3[11] |= 0x20u;
      v39 = v16 + 296;
      goto LABEL_51;
    }
    goto LABEL_69;
  }
  *(_DWORD *)&v66[88] |= 8u;
  v21 = &ndisIntReqWmi;
  *(_QWORD *)&v66[104] = &ndisIntReqWmi;
  *(_DWORD *)v66 = 15466902;
  v22 = *(_DWORD *)(v6 + 16);
  *(_DWORD *)&v66[32] = v22;
  *(_DWORD *)&v66[4] = 2;
  *(_DWORD *)&v66[8] = *((_DWORD *)v17 + 1);
  *(_QWORD *)&v66[16] = v19;
  *(_QWORD *)&v66[40] = (char *)a3 + v16;
  *(_DWORD *)&v66[48] = a4 - v16;
  if ( !v19 )
    v21 = *(void **)&v66[24];
  *(_QWORD *)&v66[24] = v21;
  *(_DWORD *)&v66[12] = v18;
LABEL_23:
  v23 = *(_DWORD *)(v6 + 16) + 50265846;
  if ( v23 <= 5 && (v24 = 43, _bittest(&v24, v23)) )
  {
    SetMiniport = ndisOidPMAddRemove((__int64)a1, 0LL, (__int64)v66);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v21,
        v22,
        64,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)v66,
        v22,
        (char)a1);
    }
    if ( v8 || (v25 = *(_QWORD *)v63) == 0 )
      v25 = (__int64)a1;
    SetMiniport = ndisQuerySetMiniportEx(v25, v8, (__int64)v66, 0, 0LL, 0LL);
  }
  v28 = SetMiniport;
  v29 = -3;
  if ( ((SetMiniport + 1073676268) & 0xFFFFFFFD) != 0 )
  {
    if ( SetMiniport )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v29,
          18,
          65,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)a1);
      }
      if ( (byte_1C00E8081 & 0x10) != 0 )
        McTemplateK0jqxqqq(
          v27,
          (unsigned int)&ExecuteMethodFailed,
          (_DWORD)a1 + 4008,
          (_DWORD)a1 + 4008,
          a1->IfIndex,
          a1->NetLuid.Value,
          v28,
          1,
          a3[14]);
      if ( (*(_DWORD *)(v6 + 24) & 0x200) != 0 )
      {
        if ( (v28 & 0xC0010000) == 0xC0010000 )
          v28 = (unsigned __int16)v28 | 0xC0230000;
      }
      else if ( v28 != 259 && v28 != -2147483643 )
      {
        v46 = -1073741823;
        if ( v28 != -1073741823 && v28 != -1073741670 && v28 != -1073741637 )
        {
          if ( v28 == -1073676267 )
            v46 = -1073741811;
          InstanceName = v46;
          goto LABEL_39;
        }
      }
      InstanceName = v28;
      goto LABEL_54;
    }
    v30 = *(_DWORD *)(v6 + 16);
    if ( *(_DWORD *)&v66[4] == 12 )
    {
      v47 = (unsigned int)a3[15];
      if ( v30 == 66086 )
      {
        ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams((struct _NDIS_RECEIVE_QUEUE_PARAMETERS *)((char *)a3 + v47));
        v32 = a3[15] + 1084;
        a3[16] = 1084;
        goto LABEL_38;
      }
      if ( v30 == 66085 )
      {
        v48 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
                (struct _NDIS_RECEIVE_QUEUE_INFO_ARRAY *)((char *)a3 + v47),
                *(unsigned int *)&v66[60],
                a4 - (unsigned int)v47,
                &v58);
        InstanceName = v48;
        if ( v48 == -1073676268 )
        {
          v38 = 56;
          if ( a4 >= 0x38 )
          {
            v49 = a3[15];
            a3[11] |= 0x20u;
            a3[12] = v58 + 32 + v49;
            goto LABEL_52;
          }
          goto LABEL_69;
        }
        if ( v48 )
        {
          if ( (v48 & 0xC0010000) == 0xC0010000 )
            InstanceName = (unsigned __int16)v48 | 0xC0230000;
          goto LABEL_54;
        }
        v31 = v58;
LABEL_37:
        v32 = v31 + a3[15];
        a3[16] = v31;
LABEL_38:
        *a3 = v32;
        InstanceName = 0;
        *a5 = v32;
        goto LABEL_39;
      }
      v50 = *(_DWORD *)&v66[60];
      v32 = v47 + *(_DWORD *)&v66[60];
    }
    else
    {
      if ( *(_DWORD *)&v66[4] != 1 )
      {
        if ( ((v30 + 67042805) & 0xFFFFFFFD) == 0 )
        {
          ndisWmiXlateNdisOffloadToWmiOffload((struct _NDIS_OFFLOAD *)((char *)a3 + (unsigned int)a3[15]));
          v32 = a3[15] + 296;
          a3[16] = 296;
          goto LABEL_38;
        }
        if ( (unsigned int)(v30 + 67042802) <= 1 )
        {
          v53 = (__m128i *)((char *)a3 + (unsigned int)a3[15]);
          v54 = *v53;
          v55 = v53[1].m128i_i32[0];
          v53[1].m128i_i32[3] = v55;
          v53->m128i_i32[0] = _mm_cvtsi128_si32(v54);
          v53->m128i_i16[1] = 32;
          v56 = _mm_cvtsi128_si32(_mm_srli_si128(v54, 8));
          v67 = v54;
          v68 = v55;
          v53->m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v54, 4));
          v53->m128i_i32[2] = v56 & 3;
          v53->m128i_i32[3] = (v56 >> 2) & 3;
          v53[1].m128i_i32[0] = (v56 >> 4) & 3;
          v53[1].m128i_i32[1] = (unsigned __int8)v56 >> 6;
          v53[1].m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v54, 12));
          v32 = a3[15] + 32;
          a3[16] = 32;
          goto LABEL_38;
        }
        v31 = *(_DWORD *)&v66[52];
        goto LABEL_37;
      }
      if ( v30 == -50265846 || v30 == -50265843 )
      {
        v50 = 196;
        v32 = a3[15] + 196;
      }
      else
      {
        v51 = v59;
        v52 = (_QWORD *)((char *)a3 + (unsigned int)a3[15]);
        *v52 = 0LL;
        v52[1] = 0LL;
        *(_DWORD *)v52 = 1048837;
        *((_BYTE *)v52 + 8) = v66[232];
        v32 = a3[15] + v51;
        v50 = v59;
      }
    }
    a3[16] = v50;
    goto LABEL_38;
  }
  v36 = *(_DWORD *)&v66[68];
  if ( *(_DWORD *)&v66[4] != 12 )
    v36 = *(_DWORD *)&v66[56];
  v37 = a3[15] + v36;
  v38 = 56;
  if ( a4 >= 0x38 )
  {
    a3[11] |= 0x20u;
    v39 = v37 + 32;
LABEL_51:
    a3[12] = v39;
LABEL_52:
    InstanceName = 0;
    *a3 = 56;
LABEL_53:
    *a5 = v38;
LABEL_54:
    v33 = v57;
    goto LABEL_55;
  }
  InstanceName = -1073741789;
  *a5 = 4;
LABEL_39:
  v33 = v57;
LABEL_40:
  if ( v33 )
    ndisDereferenceVcPtr((char)v33);
LABEL_42:
  if ( *(_QWORD *)v63 )
    ndisDereferenceMiniport(*(__int64 *)v63, 0x62u);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v34) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v34,
      18,
      66,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      InstanceName);
  }
  return (unsigned int)InstanceName;
}
