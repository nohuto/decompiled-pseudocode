/*
 * XREFs of HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C0008C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetDescriptor @ 0x1C0002E7C (HUBHTX_GetDescriptor.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  PVOID PoolWithTag; // rax
  __int64 v4; // r9
  int Descriptor; // eax
  void *v6; // rcx
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 1256);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x68334855u);
    *(_QWORD *)(v1 + 1256) = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x68334855u);
  *(_QWORD *)(v1 + 1256) = PoolWithTag;
  if ( PoolWithTag )
  {
    LOBYTE(v4) = 2;
    Descriptor = HUBHTX_GetDescriptor(v1, (__int64)PoolWithTag, 255LL, v4, v8, 0);
    if ( Descriptor >= 0 )
      return 1000LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2520), 2u, 3u, 0x11u, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
    Descriptor = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2520),
      2u,
      3u,
      0x12u,
      (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids,
      v9);
  }
  v6 = *(void **)(v1 + 1256);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x68334855u);
    *(_QWORD *)(v1 + 1256) = 0LL;
  }
  HUBSM_AddEvent(v1 + 1264, 2004LL);
  return 1000LL;
}
