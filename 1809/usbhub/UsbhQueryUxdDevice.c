/*
 * XREFs of UsbhQueryUxdDevice @ 0x1C005C610
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryUxdDevice(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  SIZE_T v6; // rsi
  int v8; // ebp
  unsigned int v10; // ebx
  int v12; // ebp
  void *v13; // rcx
  PVOID PoolWithTag; // rax
  __int64 v15; // [rsp+28h] [rbp-20h]

  v6 = a4;
  v8 = a2;
  v10 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      (_DWORD)a3,
      12,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      v15);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0xEu,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      v15);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x10u,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      a5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1u,
      0x11u,
      (__int64)&WPP_dd05d02cb99337cab6a3b345564f2de7_Traceguids,
      a6);
  if ( !a6 )
    return 3221225485LL;
  v12 = v8 - 1;
  if ( !v12 )
  {
    if ( (unsigned int)v6 <= 0x200 )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x42554855u);
      *(_QWORD *)a6 = PoolWithTag;
      if ( !PoolWithTag )
        return v10;
      memset(PoolWithTag, 0, v6);
      v13 = *(void **)a6;
      if ( !*(_QWORD *)a6 )
        return v10;
      a6[2] = v6;
      goto LABEL_27;
    }
    return (unsigned int)-2147483643;
  }
  if ( v12 == 2 )
  {
    if ( (unsigned int)v6 <= 0x44 )
    {
      v13 = a6;
LABEL_27:
      memmove(v13, a3, v6);
      return v10;
    }
    return (unsigned int)-2147483643;
  }
  return (unsigned int)-1073741811;
}
