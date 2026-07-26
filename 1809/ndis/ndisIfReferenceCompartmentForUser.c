/*
 * XREFs of ndisIfReferenceCompartmentForUser @ 0x1C0013E38
 * Callers:
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001446C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0014540 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ndisHandlePnPRequest @ 0x1C010ECF4 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C001FB00 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003EF20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfReferenceCompartmentForUser(
        struct _GUID *a1,
        unsigned int a2,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a3)
{
  int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rcx
  KIRQL v9; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  int UserRef; // eax

  v6 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_D(154LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *a3;
  v9 = v7;
  if ( *a3
    || (a1
      ? (CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(a1))
      : (CompartmentBlockByGuid = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(a2)),
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
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_dq(155LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (unsigned int)v6, a3);
  return (unsigned int)v6;
}
