/*
 * XREFs of ndisIfDereferenceCompartmentForUser @ 0x1C00140B4
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C00010C0 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C0009B10 (-ndisCmDeleteStateObject@@YAXPEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001446C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0014540 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C006BFAC (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C006C130 (NdisSetSessionCompartmentId.c)
 *     ndisDispatchRequest @ 0x1C00CB980 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003EB04 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(unsigned int *a1)
{
  unsigned int v1; // edi
  bool v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(156LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = a1[12];
  if ( v5 <= 0 )
  {
    v1 = -1073741811;
  }
  else
  {
    v6 = v5 - 1;
    a1[12] = v6;
    v3 = !v6 && (a1[10] & 2) != 0;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisIfDeleteCompartment(a1[4]);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_dq(157LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v1, a1);
  return v1;
}
