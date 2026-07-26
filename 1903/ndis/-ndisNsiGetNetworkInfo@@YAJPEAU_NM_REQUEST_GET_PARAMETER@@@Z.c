/*
 * XREFs of ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002528C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003672C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367B8 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C0062EFC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNsiGetNetworkInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  __int64 v1; // rbp
  int v2; // edi
  const struct _GUID *v4; // r14
  KIRQL v5; // al
  int v6; // ecx
  KIRQL v7; // r15
  int v8; // ecx
  _LIST_ENTRY *Flink; // rbx
  __int64 NetworkBlock; // rax
  char *v11; // r13
  unsigned int v12; // ebx
  int v13; // r15d
  char v14; // r12
  KIRQL v15; // bl
  int v16; // edx
  int v18; // eax
  int v19; // r14d
  unsigned int v20; // ebx
  char v21; // [rsp+40h] [rbp-58h]
  _BYTE v22[24]; // [rsp+48h] [rbp-50h] BYREF

  v1 = 0LL;
  memset(v22, 0, sizeof(v22));
  v2 = 0;
  v21 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      106,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 16 || !*((_DWORD *)a1 + 12) || !*((_QWORD *)a1 + 5) )
  {
    v2 = -1073741808;
    goto LABEL_34;
  }
  v4 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  ndisGetNsiClientInfo((__int64)v22);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v6 = *((_DWORD *)a1 + 14);
  v7 = v5;
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( !v8 )
    {
      *(_QWORD *)&v4->Data1 = 0LL;
      *(_QWORD *)v4->Data4 = 0LL;
      goto LABEL_12;
    }
    if ( v8 == 1 )
    {
LABEL_12:
      while ( 1 )
      {
        Flink = ndisIfNetworkList.Flink;
        v1 = 0LL;
        while ( Flink != &ndisIfNetworkList )
        {
          if ( (int)ndisCompareGuid((const struct _GUID *)&Flink[2], v4) > 0 )
          {
            v1 = (__int64)Flink;
            break;
          }
          Flink = Flink->Flink;
        }
        if ( !v1 )
          break;
        v4 = (const struct _GUID *)(v1 + 32);
        if ( ndisIsCompartmentAccessibleByClient(*(_QWORD *)(v1 + 48), (__int64)v22, 0) )
          goto LABEL_23;
      }
    }
    else
    {
      v2 = -1073741808;
    }
  }
  else
  {
    NetworkBlock = (__int64)ndisIfFindNetworkBlock(v4);
    v1 = NetworkBlock;
    if ( NetworkBlock )
    {
      v1 = -(__int64)ndisIsCompartmentAccessibleByClient(*(_QWORD *)(NetworkBlock + 48), (__int64)v22, 1) & NetworkBlock;
LABEL_23:
      if ( v1 )
      {
        ++*(_DWORD *)(v1 + 76);
        v21 = 1;
        *(_OWORD *)*((_QWORD *)a1 + 2) = *(_OWORD *)(v1 + 32);
      }
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( v2 < 0 )
    goto LABEL_32;
  if ( !v1 )
  {
    v2 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    goto LABEL_32;
  }
  v11 = (char *)*((_QWORD *)a1 + 5);
  v12 = *((_DWORD *)a1 + 13);
  v13 = *((_DWORD *)a1 + 12);
  if ( !v11 )
  {
    *((_DWORD *)a1 + 12) = 0;
    goto LABEL_32;
  }
  v14 = 0;
  if ( *((_DWORD *)a1 + 8) )
  {
    v2 = -1073741808;
    goto LABEL_32;
  }
  while ( v13 > 0 && !v14 )
  {
    switch ( v12 )
    {
      case 0u:
        v19 = 4;
        goto LABEL_46;
      case 4u:
        v19 = 8;
        goto LABEL_46;
      case 8u:
        v19 = 12;
LABEL_46:
        v18 = 4;
        goto LABEL_47;
    }
    if ( v12 != 12 )
      goto LABEL_49;
    v18 = 516;
    v14 = 1;
    v19 = 528;
LABEL_47:
    if ( v13 < v18 )
    {
LABEL_49:
      v14 = 1;
    }
    else
    {
      memmove(v11, (const void *)(v1 + v12 + 80LL), (unsigned int)v18);
      v11 += v19 - v12;
      v13 += v12 - v19;
      v12 = v19;
    }
  }
  v20 = v12 - *((_DWORD *)a1 + 13);
  *((_DWORD *)a1 + 12) = v20;
  if ( !v20 )
    v2 = -1073741811;
LABEL_32:
  if ( v21 )
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v1);
    KeReleaseSpinLock(&ndisIfListLock, v15);
  }
LABEL_34:
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      22,
      107,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v2);
  }
  return (unsigned int)v2;
}
