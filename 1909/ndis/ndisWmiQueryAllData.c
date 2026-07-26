/*
 * XREFs of ndisWmiQueryAllData @ 0x1C00A8EDC
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 *     NdisWdfQueryAllData @ 0x1C009F1E0 (NdisWdfQueryAllData.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C001879C (-ndisQueryGuidDataSize@@YAJPEAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLO.c)
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 *     ndisWmiGetGuid @ 0x1C002806C (ndisWmiGetGuid.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C0087690 (ndisReferenceVcPtr.c)
 *     ?ndisWmiGuidIsAdapterSpecific@@YAEPEAU_GUID@@@Z @ 0x1C00A76B4 (-ndisWmiGuidIsAdapterSpecific@@YAEPEAU_GUID@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisWmiQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _GUID *a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  struct _NDIS_GUID *v9; // r14
  _DWORD *v11; // r15
  int v12; // r13d
  int GuidDataSize; // esi
  int v14; // edx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  int v16; // edx
  struct _NDIS_MINIPORT_BLOCK *v17; // r15
  struct _NDIS_GUID *v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  unsigned int v21; // edx
  __int64 v22; // rdx
  unsigned int v23; // r14d
  unsigned __int16 *v24; // r10
  int v25; // r15d
  unsigned int v26; // r12d
  int v27; // r9d
  __int64 v28; // r8
  unsigned int v29; // ecx
  unsigned int *v30; // rax
  int v31; // edx
  _LIST_ENTRY *Flink; // r13
  _LIST_ENTRY *v34; // r15
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // esi
  int v38; // eax
  _DWORD *v39; // rcx
  unsigned __int16 *v40; // r10
  unsigned int v41; // r12d
  unsigned int *v42; // rax
  __int64 v43; // r14
  unsigned int v44; // ecx
  __int64 v45; // rax
  size_t v46; // rdx
  struct _NDIS_GUID *v47; // r9
  struct _NDIS_MINIPORT_BLOCK *v48; // rax
  struct _NDIS_MINIPORT_BLOCK *v49; // [rsp+30h] [rbp-50h]
  struct _NDIS_MINIPORT_BLOCK *v50; // [rsp+30h] [rbp-50h]
  char v51; // [rsp+40h] [rbp-40h]
  int v52; // [rsp+44h] [rbp-3Ch]
  unsigned int v53; // [rsp+44h] [rbp-3Ch]
  size_t Size; // [rsp+48h] [rbp-38h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+50h] [rbp-30h]
  unsigned int v56; // [rsp+58h] [rbp-28h]
  unsigned __int16 *v57; // [rsp+60h] [rbp-20h]
  struct _NDIS_MINIPORT_BLOCK *v58; // [rsp+68h] [rbp-18h]
  int v59; // [rsp+70h] [rbp-10h]
  unsigned int *v60; // [rsp+78h] [rbp-8h]
  struct _NDIS_GUID *v61; // [rsp+C8h] [rbp+48h] BYREF
  struct _GUID *v62; // [rsp+D0h] [rbp+50h]

  v62 = a3;
  v61 = a2;
  v6 = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      34,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v11 = a6;
  v12 = 56;
  *a6 = 0;
  if ( a5 < 0x38 )
  {
    GuidDataSize = -1073741789;
    *v11 = 4;
    goto LABEL_29;
  }
  if ( !v9 )
  {
    if ( (int)ndisWmiGetGuid(&v61, (__int64)a1, (_QWORD *)(a4 + 24), 0) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          18,
          35,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)a1);
      }
      GuidDataSize = -1073741811;
      goto LABEL_29;
    }
    v9 = v61;
  }
  BindPaths = a1->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName((__int64)BindPaths->Paths);
    v6 = v58;
    v55 = v58;
  }
  if ( !ndisWmiGuidIsAdapterSpecific(a3) && (a1->Flags & 0x20000) != 0 )
  {
    v51 = 0;
    v16 = a1->VcCount + 1;
    v17 = v58;
    v18 = v61;
    v19 = 8 * v16 + 72;
    *(_QWORD *)(a4 + 16) = MEMORY[0xFFFFF78000000014];
    v56 = v16;
    v60 = (unsigned int *)(a4 + v19);
    *(_DWORD *)(a4 + 56) = v19;
    v20 = (v19 + 4 * v16 + 7) & 0xFFFFFFF8;
    v57 = (unsigned __int16 *)(a4 + v20);
    v55 = v17;
    GuidDataSize = ndisQueryGuidDataSize((unsigned int *)&Size, a1, v18, 0LL, v62, v17);
    if ( GuidDataSize < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v27 = 40;
      goto LABEL_54;
    }
    v22 = a5;
    v52 = (Size + 7) & 0xFFFFFFF8;
    v23 = v20 + v52 + ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8);
    if ( a5 >= v23 )
    {
      v24 = v57;
      *v60 = v20;
      *v24 = a1->pAdapterInstanceName->Length;
      memmove(v24 + 1, a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
      v49 = v17;
      v25 = Size;
      v26 = ((a1->pAdapterInstanceName->Length + 9) & 0xFFFFFFF8) + v20;
      GuidDataSize = ndisQueryGuidData((CHAR *)(a4 + v26), (unsigned int)Size, a1, (const CHAR *)v61, 0LL, v62, v49);
      if ( GuidDataSize < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_27;
        v27 = 39;
        goto LABEL_54;
      }
      v22 = a5;
      *(_DWORD *)(a4 + 60) = v26;
      v20 = v52 + v26;
      *(_DWORD *)(a4 + 64) = v25;
      v57 = (unsigned __int16 *)(a4 + v20);
    }
    v28 = v56;
    v53 = 1;
    v29 = 1;
    if ( v56 != 1 )
    {
      Flink = a1->WmiEnabledVcs.Flink;
      if ( Flink == &a1->WmiEnabledVcs )
        goto LABEL_48;
      while ( v29 < (unsigned int)v28 )
      {
        v34 = Flink - 20;
        if ( ndisReferenceVcPtr((__int64)&Flink[-20], v22, v28) )
        {
          if ( v34[19].Flink )
          {
            GuidDataSize = ndisQueryGuidDataSize(
                             (unsigned int *)&Size,
                             a1,
                             0LL,
                             (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20],
                             v62,
                             v55);
            if ( GuidDataSize >= 0 )
            {
              v37 = Size;
              v22 = 4294967288LL;
              v38 = ((Size + 7) & 0xFFFFFFF8) + ((LOWORD(v34[18].Blink) + 9) & 0xFFFFFFF8);
              v59 = (Size + 7) & 0xFFFFFFF8;
              v23 += v38;
              if ( a5 >= v23 )
              {
                v40 = v57;
                v60[v53] = v20;
                *v40 = (unsigned __int16)v34[18].Blink;
                memmove(v40 + 1, v34[19].Flink, LOWORD(v34[18].Blink));
                v41 = ((LOWORD(v34[18].Blink) + 9) & 0xFFFFFFF8) + v20;
                GuidDataSize = ndisQueryGuidData(
                                 (CHAR *)(a4 + v41),
                                 v37,
                                 a1,
                                 0LL,
                                 (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20],
                                 v62,
                                 v55);
                if ( GuidDataSize < 0 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v22) = 2;
                    WPP_RECORDER_SF_qq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v22,
                      18,
                      41,
                      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
                      (char)a1,
                      (char)v34);
                  }
                  ndisDereferenceVcPtr((__int64 *)v34, v22, v35, v36);
                  v29 = v53;
                  break;
                }
                *(_DWORD *)(a4 + 8LL * v53 + 64) = Size;
                *(_DWORD *)(a4 + 8LL * v53 + 60) = v41;
                v20 = v59 + v41;
                ++v53;
                v57 = (unsigned __int16 *)(a4 + v20);
              }
              else
              {
                *(_DWORD *)(a4 + 44) |= 0x20u;
                v39 = a6;
                GuidDataSize = 0;
                *(_DWORD *)a4 = 56;
                *(_DWORD *)(a4 + 48) = v23;
                v51 = 1;
                *v39 = 56;
              }
            }
          }
          ndisDereferenceVcPtr((__int64 *)&Flink[-20], v22, v35, v36);
        }
        Flink = Flink->Flink;
        v29 = v53;
        if ( Flink == &a1->WmiEnabledVcs )
          break;
        v28 = v56;
      }
      if ( !v51 )
      {
LABEL_48:
        v42 = a6;
        GuidDataSize = 0;
        *(_DWORD *)a4 = v23;
        *(_DWORD *)(a4 + 52) = v29;
        *v42 = v23;
      }
      goto LABEL_27;
    }
    if ( (unsigned int)v22 < v23 )
    {
      *(_DWORD *)(a4 + 44) |= 0x20u;
      *(_DWORD *)(a4 + 48) = v23;
      v23 = 56;
    }
    else
    {
      *(_DWORD *)(a4 + 52) = 1;
      v12 = v23;
    }
    v30 = a6;
    *(_DWORD *)a4 = v12;
    *v30 = v23;
LABEL_26:
    GuidDataSize = 0;
    goto LABEL_27;
  }
  GuidDataSize = ndisQueryGuidDataSize((unsigned int *)&Size, a1, v9, 0LL, a3, v6);
  if ( GuidDataSize < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v27 = 36;
    goto LABEL_54;
  }
  v43 = ((_DWORD)Size + 3) & 0xFFFFFFFC;
  v21 = a1->pAdapterInstanceName->Length + 2;
  v44 = v21 + v43 + 76;
  if ( v44 < 0x48 || v44 < (unsigned int)v43 || v44 < v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 37;
      goto LABEL_54;
    }
  }
  else
  {
    if ( a5 < v44 )
    {
      *(_DWORD *)(a4 + 44) |= 0x20u;
      *(_DWORD *)a4 = 56;
      *(_DWORD *)(a4 + 48) = v44;
      *v11 = 56;
      goto LABEL_26;
    }
    v45 = MEMORY[0xFFFFF78000000014];
    v46 = (unsigned int)Size;
    v47 = v61;
    *(_DWORD *)(a4 + 44) |= 0x10u;
    *(_QWORD *)(a4 + 16) = v45;
    *(_DWORD *)(a4 + 56) = v43 + 72;
    v48 = v58;
    v50 = v58;
    *(_DWORD *)a4 = v44;
    *(_DWORD *)(a4 + 52) = 1;
    *(_DWORD *)(a4 + 48) = 72;
    *(_DWORD *)(a4 + 60) = v46;
    v55 = v48;
    GuidDataSize = ndisQueryGuidData((CHAR *)(a4 + 72), v46, a1, (const CHAR *)v47, 0LL, a3, v50);
    if ( GuidDataSize >= 0 )
    {
      *(_DWORD *)(*(unsigned int *)(a4 + 56) + a4) = v43 + 76;
      *(_WORD *)(v43 + a4 + 76) = a1->pAdapterInstanceName->Length;
      memmove((void *)((unsigned int)v43 + a4 + 78), a1->pAdapterInstanceName->Buffer, a1->pAdapterInstanceName->Length);
      *v11 = *(_DWORD *)a4;
      goto LABEL_26;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 38;
LABEL_54:
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v21,
        18,
        v27,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
  }
LABEL_27:
  if ( v55 )
    ndisDereferenceMiniport((__int64)v55, 0x60u);
LABEL_29:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v31) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v31,
      18,
      42,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      GuidDataSize);
  }
  return (unsigned int)GuidDataSize;
}
