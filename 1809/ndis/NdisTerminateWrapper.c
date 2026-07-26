/*
 * XREFs of NdisTerminateWrapper @ 0x1C00F0C60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMUnload @ 0x1C0116CF0 (ndisMUnload.c)
 */

void __stdcall NdisTerminateWrapper(NDIS_HANDLE NdisWrapperHandle, PVOID SystemSpecific)
{
  _WORD *DriverObjectExtension; // rax
  _WORD *v4; // rdi
  __int16 v5; // cx
  unsigned __int16 v6; // cx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids, (__int64)NdisWrapperHandle);
  if ( NdisWrapperHandle && *(_QWORD *)NdisWrapperHandle )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)NdisWrapperHandle, (PVOID)0x4E4D4944);
    v4 = DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      v5 = DriverObjectExtension[13] | 4;
      DriverObjectExtension[13] = v5;
      if ( *((_QWORD *)DriverObjectExtension + 2) || v5 < 0 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
          return;
        v6 = 13;
        goto LABEL_16;
      }
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      {
        WPP_SF_q(0xEu, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids, (__int64)DriverObjectExtension);
        v5 = v4[13];
      }
      *((_QWORD *)v4 + 13) = 0LL;
      v4[13] = v5 | 0x10;
      ndisMUnload(*(PDRIVER_OBJECT *)NdisWrapperHandle);
    }
    else
    {
      ExFreePoolWithTag(NdisWrapperHandle, 0);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
    return;
  v6 = 15;
LABEL_16:
  WPP_SF_(v6, &WPP_eccec8ea231d3733224f85f541fced3f_Traceguids);
}
