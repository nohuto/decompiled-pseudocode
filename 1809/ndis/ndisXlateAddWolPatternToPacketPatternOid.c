/*
 * XREFs of ndisXlateAddWolPatternToPacketPatternOid @ 0x1C00E94E4
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C00BB930 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ??$?8U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@0@$$T@Z @ 0x1C00497BC (--$-8U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@YA_NAEBV-$unique_ptr@U.c)
 */

__int64 __fastcall ndisXlateAddWolPatternToPacketPatternOid(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // r13
  unsigned int v3; // esi
  int v6; // r9d
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // r12d
  _QWORD *v12; // rbx
  _QWORD *v13; // r12
  PVOID v14; // r15
  PVOID v15; // rax
  int v16; // eax
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(a1 + 40);
  v3 = 0;
  *a2 = 0;
  v6 = v2[3];
  if ( v6 != 1 )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 4u )
      WPP_SF_qD(0x6Du, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, v6);
    *a2 = 1;
    return (unsigned int)-1073741637;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x7877444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x20uLL);
  v18 = v8;
  if ( !wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&v18) )
  {
    *(_DWORD *)v8 = *(_DWORD *)(a1 + 32);
    v8[1] = *(_QWORD *)(a1 + 40);
    *((_DWORD *)v8 + 4) = *(_DWORD *)(a1 + 48);
    v9 = v2[41];
    v10 = v9 + v2[43];
    if ( v10 >= v9 )
    {
      LODWORD(v18) = 0;
      if ( v10 + 24 >= 0x18
        && (v11 = v10 + 24,
            v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 24, 0x7877444Eu),
            v12 = v15,
            (v14 = v15) != 0LL) )
      {
        memset(v15, 0, v11);
        LODWORD(v18) = v11;
        *v12 = 0LL;
        v13 = v12;
        v12[1] = 0LL;
        v12[2] = 0LL;
      }
      else
      {
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0LL;
      }
      v19 = v12;
      if ( !wistd::operator==<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(&v19) )
      {
        *((_DWORD *)v12 + 1) = v2[37];
        *(_DWORD *)v12 = v2[2];
        v16 = v2[41];
        *((_DWORD *)v12 + 2) = v16;
        *((_DWORD *)v12 + 3) = v16 + 24;
        *((_DWORD *)v12 + 4) = v2[43];
        memmove(v13 + 3, (char *)v2 + (unsigned int)v2[40], *((unsigned int *)v12 + 2));
        memmove((char *)v13 + *((unsigned int *)v12 + 3), (char *)v2 + (unsigned int)v2[42], *((unsigned int *)v12 + 4));
        *(_DWORD *)(a1 + 48) = (_DWORD)v18;
        *(_DWORD *)(a1 + 32) = -50265853;
        *(_QWORD *)(a1 + 40) = v12;
        v8[3] = v13;
        *(_QWORD *)(a1 + 144) = v8;
        return v3;
      }
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_q(0x70u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
      *a2 = 1;
      v3 = -1073741670;
      if ( v14 )
        ExFreePoolWithTag(v12, 0);
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A025A >= 4u )
        WPP_SF_q(0x6Fu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
      v3 = -1073741811;
      *a2 = 1;
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x6Eu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1);
  *a2 = 1;
  v3 = -1073741670;
  if ( v8 )
LABEL_11:
    ExFreePoolWithTag(v8, 0);
  return v3;
}
