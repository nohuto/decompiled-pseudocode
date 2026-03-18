/*
 * XREFs of HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C0027930
 * Callers:
 *     HUBDSM_GettingBOSDescriptorHeader @ 0x1C001F070 (HUBDSM_GettingBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002699C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  PVOID *v3; // rcx
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[257];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  v3 = (PVOID *)a1[330];
  if ( v3 )
  {
    if ( *v3 )
    {
      ExFreePoolWithTag(*v3, 0x64334855u);
      v3 = (PVOID *)a1[330];
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0x64334855u);
  }
  a1[257] = 0LL;
  a1[330] = 0LL;
  Descriptor = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1732, 255, 15, 0, 0);
  if ( Descriptor < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v5) = Descriptor;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0x3Du,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v5);
    }
    HUBSM_AddEvent((__int64)(a1 + 63), 4004);
  }
}
