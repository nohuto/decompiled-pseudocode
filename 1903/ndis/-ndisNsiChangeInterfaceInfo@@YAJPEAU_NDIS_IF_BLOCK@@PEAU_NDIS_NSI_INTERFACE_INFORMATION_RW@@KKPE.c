/*
 * XREFs of ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0029FF0
 * Callers:
 *     ndisIfUpdateFilterIfStack @ 0x1C0029E44 (ndisIfUpdateFilterIfStack.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065A00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C002A178 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003F544 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

__int64 __fastcall ndisNsiChangeInterfaceInfo(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_NSI_INTERFACE_INFORMATION_RW *a2,
        int a3,
        int a4,
        wchar_t *a5)
{
  int v6; // r13d
  struct _NDIS_NSI_INTERFACE_INFORMATION_RW *v7; // r15
  unsigned int v9; // ebx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  char v11; // di
  int v12; // eax
  int v13; // ebp
  int v14; // edx
  int v15; // r14d
  int updated; // eax
  int v17; // r13d
  _OWORD *v19; // rdi
  __int64 v20; // r8
  _IF_COUNTED_STRING_LH *PoolWithTag; // rax
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // r8
  _IF_COUNTED_STRING_LH *p_ifAlias; // rdx
  __int64 v26; // rax
  __int128 v27; // xmm1
  char v28; // [rsp+30h] [rbp-48h]
  int v30; // [rsp+98h] [rbp+20h]

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      114,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v28);
  }
  ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)a5;
  v11 = 0;
  v12 = v6;
  v13 = a4;
  v30 = v6;
  v14 = -1073741811;
  *(_DWORD *)a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_13:
        v6 = a3;
        ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)a5;
        v14 = -1073741811;
        goto LABEL_14;
      }
      v15 = 0;
      if ( !a4 )
        break;
      if ( a4 == 16 )
      {
        v15 = 4;
        a1->ifAdminStatus = *((_DWORD *)v7 + 4);
        v13 = 20;
        goto LABEL_8;
      }
      if ( a4 != 20 )
      {
        if ( a4 == 536 )
          goto LABEL_29;
        if ( a4 == 570 )
        {
          v19 = (_OWORD *)((char *)v7 + 570);
          v15 = 516;
          if ( !ndisIsValidIfStringParts(&ifL2NetworkInfo->Length, *((unsigned __int16 *)v7 + 285)) )
            goto LABEL_29;
          ifL2NetworkInfo = a1->ifL2NetworkInfo;
          if ( !ifL2NetworkInfo )
          {
            PoolWithTag = (_IF_COUNTED_STRING_LH *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x204uLL, 0x6669444Eu);
            a1->ifL2NetworkInfo = PoolWithTag;
            ifL2NetworkInfo = PoolWithTag;
            if ( !PoolWithTag )
            {
              v9 = -1073741670;
LABEL_27:
              v12 = v30;
LABEL_28:
              v11 = 1;
              goto LABEL_12;
            }
            v20 = 128LL;
          }
          v22 = 4LL;
          do
          {
            *(_OWORD *)&ifL2NetworkInfo->Length = *v19;
            *(_OWORD *)&ifL2NetworkInfo->String[7] = v19[1];
            *(_OWORD *)&ifL2NetworkInfo->String[15] = v19[2];
            *(_OWORD *)&ifL2NetworkInfo->String[23] = v19[3];
            *(_OWORD *)&ifL2NetworkInfo->String[31] = v19[4];
            *(_OWORD *)&ifL2NetworkInfo->String[39] = v19[5];
            *(_OWORD *)&ifL2NetworkInfo->String[47] = v19[6];
            ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v20);
            v23 = v19[7];
            v19 = (_OWORD *)((char *)v19 + v20);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[249] = v23;
            --v22;
          }
          while ( v22 );
          v13 = 1086;
          *(_DWORD *)&ifL2NetworkInfo->Length = *(_DWORD *)v19;
        }
LABEL_41:
        v11 = 1;
        goto LABEL_8;
      }
      v15 = 516;
      if ( !ndisIsValidIfStringParts((const wchar_t *)v7 + 10, *((unsigned __int16 *)v7 + 10)) || a1->IsNdisFilter )
      {
LABEL_29:
        v9 = -1073741811;
        goto LABEL_27;
      }
      p_ifAlias = &a1->ifAlias;
      v26 = 4LL;
      do
      {
        *(_OWORD *)&p_ifAlias->Length = *(_OWORD *)&ifL2NetworkInfo->Length;
        *(_OWORD *)&p_ifAlias->String[7] = *(_OWORD *)&ifL2NetworkInfo->String[7];
        *(_OWORD *)&p_ifAlias->String[15] = *(_OWORD *)&ifL2NetworkInfo->String[15];
        *(_OWORD *)&p_ifAlias->String[23] = *(_OWORD *)&ifL2NetworkInfo->String[23];
        *(_OWORD *)&p_ifAlias->String[31] = *(_OWORD *)&ifL2NetworkInfo->String[31];
        *(_OWORD *)&p_ifAlias->String[39] = *(_OWORD *)&ifL2NetworkInfo->String[39];
        *(_OWORD *)&p_ifAlias->String[47] = *(_OWORD *)&ifL2NetworkInfo->String[47];
        p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + v24);
        v27 = *(_OWORD *)&ifL2NetworkInfo->String[55];
        ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v24);
        *(_OWORD *)&p_ifAlias[-1].String[249] = v27;
        --v26;
      }
      while ( v26 );
      v13 = 536;
      *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)&ifL2NetworkInfo->Length;
LABEL_8:
      if ( v9 )
        goto LABEL_27;
      v12 = v30;
      if ( !v15 || v30 < v15 )
        goto LABEL_28;
      v12 = a4 - v13 + v30;
      a4 = v13;
      v30 = v12;
LABEL_12:
      if ( v12 <= 0 )
        goto LABEL_13;
    }
    v15 = 16;
    updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, (const struct _GUID *)v7, 0);
    if ( updated >= 0 )
    {
      v13 = 16;
      goto LABEL_8;
    }
    v9 = updated;
    goto LABEL_41;
  }
LABEL_14:
  v17 = v6 - v12;
  *(_DWORD *)&ifL2NetworkInfo->Length = v17;
  if ( !v17 )
    v9 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      22,
      115,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)v7,
      v9);
  }
  return v9;
}
