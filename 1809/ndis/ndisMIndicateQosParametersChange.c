/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C0062CD0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 *     ndisValidateQosParameters @ 0x1C004923C (ndisValidateQosParameters.c)
 *     WPP_SF_LLLLLLLL @ 0x1C00614C0 (WPP_SF_LLLLLLLL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007E314 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  int v6; // esi
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // r15
  __int64 v13; // r12
  unsigned int *v14; // r12
  PVOID PoolWithTag; // r13
  void *v16; // rcx
  unsigned __int16 v17; // r12
  _WORD *v19; // rcx

  v6 = a2;
  if ( (unsigned __int8)byte_1C00A0267 >= 5u )
    WPP_SF_qDqL(0xB0u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1, a2);
  if ( !a1->QosHwCapabilities )
  {
    if ( (unsigned __int8)byte_1C00A0267 >= 5u )
    {
      v8 = 177;
LABEL_40:
      WPP_SF_(v8, &WPP_f453a6740ca1326a168191528118e90e_Traceguids);
      return 0;
    }
    return 0;
  }
  if ( a4 < 0x34 )
  {
    if ( (unsigned __int8)byte_1C00A0267 >= 5u )
      WPP_SF_D(0xB2u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a4);
LABEL_38:
    if ( (unsigned __int8)byte_1C00A0267 >= 2u )
    {
      v8 = 180;
      goto LABEL_40;
    }
    return 0;
  }
  if ( *a3 != 0xB6 || (v9 = *((_WORD *)a3 + 1), v9 < 0x34u) || a3[1] != 1 || a4 < v9 )
  {
    if ( (unsigned __int8)byte_1C00A0267 >= 5u )
    {
      LOBYTE(a2) = *a3;
      WPP_SF_LLLLLLLL(*((unsigned __int16 *)a3 + 1), a2, *a3);
    }
    goto LABEL_38;
  }
  LOBYTE(a2) = v6 == 1073873056;
  v10 = ndisValidateQosParameters((__int64)a1, a2, a3, v9, 0LL);
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C00A0267 >= 2u )
      WPP_SF_D(0xB5u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v10);
    return 0;
  }
  v11 = *((unsigned __int16 *)a3 + 1);
  v12 = 4960LL;
  if ( v6 != 1073873056 )
    v12 = 4976LL;
  v13 = 4968LL;
  if ( v6 != 1073873056 )
    v13 = 4984LL;
  v14 = (unsigned int *)(&a1->Header.Type + v13);
  if ( v11 <= *v14 )
  {
    v19 = *(_WORD **)(&a1->Header.Type + v12);
    v17 = *((_WORD *)a3 + 1);
    if ( v19[1] == (_WORD)v11 && !memcmp(v19, a3, *((unsigned __int16 *)a3 + 1)) )
    {
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
        WPP_SF_D(0xB7u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v6);
      return 0;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)a3 + 1), 0x7371444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C00A0267 >= 2u )
        WPP_SF_dd(0xB6u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v11, v6);
      return 0;
    }
    v16 = *(void **)(&a1->Header.Type + v12);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(&a1->Header.Type + v12) = PoolWithTag;
    *v14 = v11;
    v17 = *((_WORD *)a3 + 1);
  }
  memmove(*(void **)(&a1->Header.Type + v12), a3, v17);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( (unsigned __int8)byte_1C00A0267 >= 5u )
    WPP_SF_qDqL(0xB8u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1, v6);
  return 1;
}
