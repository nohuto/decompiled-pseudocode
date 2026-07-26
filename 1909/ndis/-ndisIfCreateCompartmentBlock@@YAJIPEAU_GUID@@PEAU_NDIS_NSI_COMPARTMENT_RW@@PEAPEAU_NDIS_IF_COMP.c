/*
 * XREFs of ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0036BC0
 * Callers:
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00368EC (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0063100 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C0006400 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C0063BCC (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(
        unsigned int a1,
        struct _GUID *a2,
        struct _NDIS_NSI_COMPARTMENT_RW *Src,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a4)
{
  int v5; // ebx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  int v10; // edx
  int v11; // r8d
  char *v12; // rdi
  USHORT Size; // ax
  size_t v14; // r8
  KIRQL v15; // si
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *Flink; // rax
  NTSTATUS v20; // eax
  unsigned int AvailableCompartmentId; // eax
  int v22; // [rsp+20h] [rbp-48h]

  v5 = 0;
  v8 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x76u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1);
  *a4 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6D0uLL, 0x6669444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_16;
  }
  memset(PoolWithTag, 0, 0x6D0uLL);
  *((_DWORD *)v12 + 4) = v8;
  *((_QWORD *)v12 + 4) = v12 + 24;
  *((_QWORD *)v12 + 3) = v12 + 24;
  *((_QWORD *)v12 + 217) = v12 + 1728;
  *((_QWORD *)v12 + 216) = v12 + 1728;
  *(_QWORD *)(v12 + 44) = 1LL;
  if ( Src )
  {
    Size = Src->Header.Size;
    v14 = 1640LL;
    if ( Size < 0x668u )
      v14 = Size;
    memmove(v12 + 64, Src, v14);
    goto LABEL_8;
  }
  v20 = ExUuidCreate((UUID *)v12 + 5);
  v5 = v20;
  if ( v20 >= 0 )
  {
    if ( v20 == 1073872982 )
      v5 = 0;
LABEL_8:
    v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( a2 )
    {
      AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
      if ( !AvailableCompartmentId )
      {
        v5 = -1073741270;
        goto LABEL_14;
      }
      *((_DWORD *)v12 + 4) = AvailableCompartmentId;
      v8 = AvailableCompartmentId;
      *(struct _GUID *)(v12 + 1144) = *a2;
    }
    if ( !v5 )
    {
      for ( i = ndisIfCompartmentList;
            i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList;
            i = (struct _NDIS_IF_COMPARTMENT_BLOCK *)i->Link.Flink )
      {
        if ( i->CompartmentId == v8 )
        {
          v5 = -1073741270;
          KeReleaseSpinLock(&ndisIfListLock, v15);
          goto LABEL_31;
        }
        if ( i->CompartmentId > v8 )
          break;
      }
      Blink = i->Link.Blink;
      Flink = Blink->Flink;
      if ( Blink->Flink->Blink != Blink )
        __fastfail(3u);
      *(_QWORD *)v12 = Flink;
      *((_QWORD *)v12 + 1) = Blink;
      Flink->Blink = (_LIST_ENTRY *)v12;
      Blink->Flink = (_LIST_ENTRY *)v12;
      _InterlockedIncrement((volatile signed __int32 *)&ndisIfCompartmentCount);
    }
LABEL_14:
    KeReleaseSpinLock(&ndisIfListLock, v15);
    if ( v5 >= 0 )
    {
      *a4 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)v12;
      goto LABEL_16;
    }
  }
LABEL_31:
  ExFreePoolWithTag(v12, 0);
  LOBYTE(v12) = 0;
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 119, v22, v8, (char)v12, v5);
  return (unsigned int)v5;
}
