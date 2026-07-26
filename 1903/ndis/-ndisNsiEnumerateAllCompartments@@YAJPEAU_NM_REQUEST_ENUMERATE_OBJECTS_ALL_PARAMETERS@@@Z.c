/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0064070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003672C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367B8 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK **v3; // r11
  KIRQL v4; // r13
  unsigned int v5; // ebx
  bool IsCompartmentAccessibleByClient; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK ***v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  bool v10; // cf
  __int64 v11; // r12
  char *v12; // r15
  unsigned int v13; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // r14
  unsigned int v15; // esi
  int v16; // edx
  KIRQL v18; // [rsp+40h] [rbp-58h]
  _BYTE v19[24]; // [rsp+48h] [rbp-50h] BYREF

  memset(v19, 0, sizeof(v19));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      130,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((__int64)v19);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v3 = (struct _NDIS_IF_COMPARTMENT_BLOCK **)ndisIfCompartmentList;
  v4 = v2;
  v18 = v2;
  v5 = 0;
  if ( ndisIfCompartmentList != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient((__int64)v3, (__int64)v19, 1);
      v3 = *v7;
      v8 = v5 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v5;
      v5 = v8;
    }
    while ( v3 != &ndisIfCompartmentList );
    v4 = v18;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( v9 )
  {
    v11 = *((_QWORD *)a1 + 2);
    v12 = (char *)*((_QWORD *)a1 + 5);
    if ( v11 && *((_DWORD *)a1 + 6) != 4 || v12 && *((_DWORD *)a1 + 12) < 0x668u )
    {
      v13 = -1073741306;
      goto LABEL_27;
    }
    Flink = ndisIfCompartmentList;
    v15 = 0;
    do
    {
      if ( Flink == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
        break;
      if ( ndisIsCompartmentAccessibleByClient((__int64)Flink, (__int64)v19, 1) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_DWORD *)(v11 + 4LL * v15) = Flink->CompartmentId;
        if ( *((_QWORD *)a1 + 5) )
        {
          memmove(v12, &Flink->LoopbackInfo, 0x668uLL);
          v12 += *((unsigned int *)a1 + 12);
        }
        ++v15;
      }
      Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
    }
    while ( v15 < v9 );
    v4 = v18;
    v10 = v15 < v5;
  }
  else
  {
    v10 = v5 != 0;
  }
  v13 = v10 ? 0x105 : 0;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      22,
      131,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v13);
  }
  return v13;
}
