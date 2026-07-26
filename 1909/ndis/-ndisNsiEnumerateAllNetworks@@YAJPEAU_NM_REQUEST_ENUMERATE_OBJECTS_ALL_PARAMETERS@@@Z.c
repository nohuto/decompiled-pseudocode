/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00200C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003671C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367A8 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v4; // r12
  unsigned int v5; // r11d
  char IsCompartmentAccessibleByClient; // al
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // r15
  _LIST_ENTRY *v11; // rbp
  _LIST_ENTRY *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY v17; // xmm1
  bool v18; // cf
  unsigned int v19; // ebx
  int v20; // edx
  KIRQL v22; // [rsp+40h] [rbp-58h]
  _BYTE v23[24]; // [rsp+48h] [rbp-50h] BYREF

  memset(v23, 0, sizeof(v23));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      116,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo(v23);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfNetworkList.Flink;
  v4 = v2;
  v22 = v2;
  v5 = 0;
  if ( ndisIfNetworkList.Flink != &ndisIfNetworkList )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(Flink[3].Flink, v23, 0LL);
      Flink = Flink->Flink;
      v8 = v7 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v7;
      v5 = v8;
    }
    while ( Flink != &ndisIfNetworkList );
    v4 = v22;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( !v9 )
  {
    v18 = v5 != 0;
LABEL_27:
    v19 = v18 ? 0x105 : 0;
    goto LABEL_28;
  }
  v10 = *((_QWORD *)a1 + 2);
  v11 = (_LIST_ENTRY *)*((_QWORD *)a1 + 5);
  if ( (!v10 || *((_DWORD *)a1 + 6) == 16) && (!v11 || *((_DWORD *)a1 + 12) >= 0x210u) )
  {
    v12 = ndisIfNetworkList.Flink;
    v13 = 0;
    do
    {
      if ( v12 == &ndisIfNetworkList )
        break;
      if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(v12[3].Flink, v23, 0LL) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_LIST_ENTRY *)(v10 + 16LL * v13) = v12[2];
        if ( *((_QWORD *)a1 + 5) )
        {
          v14 = 4LL;
          v15 = v12 + 5;
          v16 = v11;
          do
          {
            *v16 = *v15;
            v16[1] = v15[1];
            v16[2] = v15[2];
            v16[3] = v15[3];
            v16[4] = v15[4];
            v16[5] = v15[5];
            v16[6] = v15[6];
            v16 += 8;
            v17 = v15[7];
            v15 += 8;
            v16[-1] = v17;
            --v14;
          }
          while ( v14 );
          *v16 = *v15;
          v11 = (_LIST_ENTRY *)((char *)v11 + *((unsigned int *)a1 + 12));
        }
        ++v13;
      }
      v12 = v12->Flink;
    }
    while ( v13 < v9 );
    v4 = v22;
    v18 = v13 < v5;
    goto LABEL_27;
  }
  v19 = -1073741306;
LABEL_28:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      22,
      117,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v19);
  }
  return v19;
}
