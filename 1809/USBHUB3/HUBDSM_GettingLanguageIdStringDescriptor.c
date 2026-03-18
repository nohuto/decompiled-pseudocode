/*
 * XREFs of HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C001C2A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0024610 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingLanguageIdStringDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2024);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  *(_QWORD *)(v1 + 2024) = 0LL;
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 1732, 255, 3, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v5) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Bu,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v5);
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
