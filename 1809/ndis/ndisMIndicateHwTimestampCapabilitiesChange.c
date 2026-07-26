/*
 * XREFs of ndisMIndicateHwTimestampCapabilitiesChange @ 0x1C0062A74
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 * Callees:
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qDL @ 0x1C00616A0 (WPP_SF_qDL.c)
 *     WPP_SF_qDqLLLL @ 0x1C00617B8 (WPP_SF_qDqLLLL.c)
 */

char __fastcall ndisMIndicateHwTimestampCapabilitiesChange(
        _QWORD *a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        char a5,
        unsigned __int8 *a6)
{
  char v6; // r13
  unsigned __int8 v8; // di
  int v10; // r12d
  unsigned __int16 v12; // ax
  size_t v13; // r14
  void *v14; // rbx
  PVOID PoolWithTag; // rax
  unsigned __int16 v17; // ax
  __int64 v18; // [rsp+20h] [rbp-58h]

  v6 = 0;
  v8 = 0;
  v10 = a2;
  if ( (unsigned __int8)byte_1C00A0267 >= 4u )
  {
    HIDWORD(v18) = HIDWORD(a3);
    WPP_SF_qDqLLLL((__int64)a1, a2, (__int64)a1, a2);
  }
  if ( a6 )
    *a6 = 0;
  if ( a4 < 0x36 )
    goto LABEL_32;
  if ( *(_BYTE *)a3 != 0x80 )
    goto LABEL_32;
  v12 = a3[1];
  if ( v12 < 0x36u || !*((_BYTE *)a3 + 1) )
    goto LABEL_32;
  if ( a5 )
  {
    v13 = 56LL;
    if ( v10 == 1074073601 )
    {
      v14 = (void *)a1[731];
      if ( !v14 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
        a1[731] = PoolWithTag;
        goto LABEL_13;
      }
LABEL_25:
      if ( !memcmp(v14, a3, v12) )
        goto LABEL_27;
      goto LABEL_26;
    }
    v14 = (void *)a1[732];
    if ( v14 )
      goto LABEL_25;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
    a1[732] = PoolWithTag;
  }
  else
  {
    v14 = (void *)a1[729];
    if ( v10 == 1074073601 )
    {
      if ( !v14 )
      {
        if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          WPP_SF_q(0x112u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)a1);
        return 0;
      }
      v14 = (void *)a1[730];
      v13 = 56LL;
      if ( v14 )
        goto LABEL_25;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
      a1[730] = PoolWithTag;
    }
    else
    {
      v13 = 56LL;
      if ( v14 )
        goto LABEL_25;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
      a1[729] = PoolWithTag;
    }
  }
LABEL_13:
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
LABEL_26:
  v8 = 1;
LABEL_27:
  if ( v14 )
  {
    v17 = a3[1];
    if ( v17 < 0x38u )
      v13 = v17;
    memmove(v14, a3, v13);
    v6 = 1;
    if ( (unsigned __int8)byte_1C00A0267 >= 4u )
    {
      LODWORD(v18) = v8;
      WPP_SF_qDL(0x113u, v8, (__int64)a1, v10, v18);
    }
  }
LABEL_32:
  if ( a6 )
    *a6 = v8;
  return v6;
}
