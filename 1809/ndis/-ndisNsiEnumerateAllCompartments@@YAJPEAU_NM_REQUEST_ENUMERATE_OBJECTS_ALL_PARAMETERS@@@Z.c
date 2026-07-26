/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C001F9F4 (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C001FA80 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *v1; // rdi
  KIRQL v2; // al
  struct _LIST_ENTRY *Flink; // r11
  KIRQL v4; // r13
  unsigned int v5; // ebx
  bool IsCompartmentAccessibleByClient; // al
  struct _LIST_ENTRY **v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  bool v10; // cf
  __int64 v11; // r12
  char *v12; // r15
  unsigned int v13; // ebx
  _LIST_ENTRY *v14; // r14
  unsigned int v15; // esi
  KIRQL v17; // [rsp+20h] [rbp-58h]
  unsigned int v19[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = a1;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x81u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo(v19);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Flink = ndisIfCompartmentList.Flink;
  v4 = v2;
  v17 = v2;
  v5 = 0;
  if ( ndisIfCompartmentList.Flink != &ndisIfCompartmentList )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient((__int64)Flink, (__int64)v19, 1);
      Flink = *v7;
      v8 = v5 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v5;
      v5 = v8;
    }
    while ( Flink != &ndisIfCompartmentList );
    v1 = a1;
    v4 = v17;
  }
  v9 = *((_DWORD *)v1 + 22);
  *((_DWORD *)v1 + 22) = v5;
  if ( v9 )
  {
    v11 = *((_QWORD *)v1 + 2);
    v12 = (char *)*((_QWORD *)v1 + 5);
    if ( v11 && *((_DWORD *)v1 + 6) != 4 || v12 && *((_DWORD *)v1 + 12) < 0x668u )
    {
      v13 = -1073741306;
      goto LABEL_27;
    }
    v14 = ndisIfCompartmentList.Flink;
    v15 = 0;
    do
    {
      if ( v14 == &ndisIfCompartmentList )
        break;
      if ( ndisIsCompartmentAccessibleByClient((__int64)v14, (__int64)v19, 1) )
      {
        if ( *((_QWORD *)v1 + 2) )
          *(_DWORD *)(v11 + 4LL * v15) = v14[1].Flink;
        if ( *((_QWORD *)v1 + 5) )
        {
          memmove(v12, &v14[4], 0x668uLL);
          v12 += *((unsigned int *)v1 + 12);
        }
        ++v15;
      }
      v14 = v14->Flink;
    }
    while ( v15 < v9 );
    v4 = v17;
    v10 = v15 < v5;
  }
  else
  {
    v10 = v5 != 0;
  }
  v13 = v10 ? 0x105 : 0;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(0x82u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)v1, v13);
  return v13;
}
