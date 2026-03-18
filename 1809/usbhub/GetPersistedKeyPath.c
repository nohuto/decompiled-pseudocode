/*
 * XREFs of GetPersistedKeyPath @ 0x1C005D540
 * Callers:
 *     ReadTestOverrideValue @ 0x1C005D740 (ReadTestOverrideValue.c)
 *     UpdateUcmIsPresentBit @ 0x1C005D9C0 (UpdateUcmIsPresentBit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C005DCA8 (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall GetPersistedKeyPath(_QWORD *a1)
{
  PVOID PoolWithTag; // rdi
  int PersistedStateLocation; // eax
  int v4; // ebx
  unsigned __int16 v5; // r9
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"USB",
                             0LL,
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                             0LL,
                             0LL,
                             0,
                             &NumberOfBytes);
  v4 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x55445246u);
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      WPP_RECORDER_SF_Ld(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v10, NumberOfBytes);
      return (unsigned int)v4;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"USB",
                               0LL,
                               L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB",
                               0LL,
                               PoolWithTag,
                               NumberOfBytes,
                               0LL);
    v4 = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      *a1 = PoolWithTag;
      goto LABEL_9;
    }
    v5 = 12;
  }
  else
  {
    v5 = 10;
  }
  LODWORD(v11) = PersistedStateLocation;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v5,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
    v11);
LABEL_9:
  if ( v4 < 0 && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v4;
}
