/*
 * XREFs of UsbhGetExtendedHubInformation @ 0x1C0020500
 * Callers:
 *     UsbhInitialize @ 0x1C001EBF0 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     UsbhEtwLogPortInformation @ 0x1C00208A0 (UsbhEtwLogPortInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C0020D30 (UsbhGetAcpiPortAttributes.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhGetExtendedHubInformation(__int64 a1)
{
  _DWORD *v2; // rsi
  unsigned __int16 v3; // bp
  _DWORD *v4; // rax
  PVOID PoolWithTag; // r14
  _DWORD *v6; // rax
  unsigned __int16 i; // bx
  __int64 v8; // rdx
  __int64 PortData; // rax

  v2 = FdoExt(a1);
  v3 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      41,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  v4 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 4LL * *((unsigned __int8 *)v4 + 2938) + 4, 0x42554855u);
  if ( PoolWithTag )
  {
    v6 = FdoExt(a1);
    memset(PoolWithTag, 0, 4LL * *((unsigned __int8 *)v6 + 2938) + 4);
  }
  *((_QWORD *)v2 + 377) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v8 = *(_QWORD *)(a1 + 64);
    if ( !v8 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v8 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v8);
    if ( i > *(unsigned __int8 *)(v8 + 2938) )
      break;
    if ( ((unsigned __int8)(1 << (i & 7)) & *((_BYTE *)v2 + ((unsigned __int64)i >> 3) + 2943)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            42,
            (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
            i);
      }
      *((_DWORD *)PoolWithTag + i) |= 0x10u;
    }
  }
  UsbhGetAcpiPortAttributes(a1, PoolWithTag);
  if ( *((_QWORD *)v2 + 378) )
  {
    while ( v3 <= *((unsigned __int8 *)FdoExt(a1) + 2938) )
    {
      if ( (*((_DWORD *)PoolWithTag + v3) & 0x40) != 0 )
      {
        PortData = UsbhGetPortData(a1, v3);
        if ( PortData )
          *(_QWORD *)(PortData + 2920) = (*(_DWORD *)(28LL * v3 + *((_QWORD *)v2 + 378) + 20) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(28LL * v3 + *((_QWORD *)v2 + 378) + 20)) & 0x7F80)) >> 7;
      }
      ++v3;
    }
  }
  UsbhEtwLogPortInformation(a1);
  return 0LL;
}
