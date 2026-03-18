/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C0014AC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIConvertStringDelimitation @ 0x1C0016114 (ACPIConvertStringDelimitation.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  const char *v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rax
  const char *v8; // rdx
  int v9; // ebp
  __int64 v10; // rsi
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // rsi
  __int64 v17; // [rsp+40h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = AcpiInternalDeviceFlagTable;
    v5 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v6 = 0LL;
      while ( !strstr((const char *)v1, v4) )
      {
        v6 = ++v5;
        v4 = (&AcpiInternalDeviceFlagTable)[4 * v5];
        if ( !v4 )
          goto LABEL_6;
      }
      v16 = 4 * v6;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v16 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 952), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v16 + 2]);
    }
  }
LABEL_6:
  v7 = *(_QWORD *)(v3 + 8);
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 560) )
    {
      v8 = AcpiInternalDeviceFlagTable;
      v9 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v10 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 560), v8) )
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~(__int64)(&AcpiInternalDeviceFlagTable)[v10 + 3]);
          v10 = 4LL * (unsigned int)++v9;
          v8 = (&AcpiInternalDeviceFlagTable)[v10];
        }
        while ( v8 );
        v7 = *(_QWORD *)(v3 + 8);
      }
    }
  }
  if ( (v7 & 0x2000000) != 0 )
    v1 &= (unsigned __int128)-(__int128)(unsigned __int64)_InterlockedCompareExchange64(
                                                            (volatile signed __int64 *)(v3 + 200),
                                                            v1,
                                                            0LL) >> 64;
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0);
  *(_DWORD *)(a1 + 32) = 10;
  v11 = &unk_1C006E28A;
  v12 = *(_QWORD *)(v3 + 8);
  v13 = &unk_1C006E28A;
  if ( (v12 & 0x200000000000LL) != 0 )
  {
    v11 = *(void **)(v3 + 560);
    if ( (v12 & 0x400000000000LL) != 0 )
      v13 = *(void **)(v3 + 568);
  }
  v17 = (__int64)v13;
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v13,
    6,
    34,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v3,
    (__int64)v11,
    v17);
  v14 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v14);
  return 0LL;
}
