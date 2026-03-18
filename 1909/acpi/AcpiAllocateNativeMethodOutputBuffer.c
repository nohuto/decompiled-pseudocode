/*
 * XREFs of AcpiAllocateNativeMethodOutputBuffer @ 0x1C005A430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall AcpiAllocateNativeMethodOutputBuffer(_QWORD *a1, void *a2, SIZE_T a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx

  v4 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0x4E706341u);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x4E706341u);
  a1[7] = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    v9 = a1[7];
    a1[6] = a3;
    *a4 = v9;
  }
  else
  {
    v4 = -1073741670;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x13u,
        0x11u,
        (__int64)&WPP_48b43c805f5e38c1fd22948a62472a9f_Traceguids,
        a1[1],
        -1073741670);
  }
  return v4;
}
