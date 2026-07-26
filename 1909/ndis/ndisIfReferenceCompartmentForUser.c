/*
 * XREFs of ndisIfReferenceCompartmentForUser @ 0x1C0020380
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0020FB0 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C00210A0 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C001A2B4 (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C0063C64 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReferenceCompartmentForUser(struct _GUID *a1, int a2, struct _NDIS_IF_COMPARTMENT_BLOCK **a3)
{
  unsigned int v4; // ebp
  int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rcx
  KIRQL v9; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  int UserRef; // eax
  char v13; // [rsp+28h] [rbp-30h]

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      155,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v13);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *a3;
  v9 = v7;
  if ( *a3
    || (a1
      ? (CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(a1))
      : (CompartmentBlockByGuid = ndisIfFindCompartmentBlock(v4)),
        (v8 = CompartmentBlockByGuid) != 0LL) )
  {
    if ( (v8->Flags & 1) != 0 || (UserRef = v8->UserRef, UserRef == 0x7FFFFFFF) )
    {
      v6 = -1073741811;
    }
    else
    {
      v8->UserRef = UserRef + 1;
      *a3 = v8;
    }
  }
  else
  {
    v6 = -1073741772;
  }
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( v6 < 0 )
    *a3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x9Cu,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v6,
      a3);
  return (unsigned int)v6;
}
