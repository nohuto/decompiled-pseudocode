/*
 * XREFs of ACPIBuildWakeEventDeviceContext @ 0x1C004C100
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0 (ACPIBuildProcessDevicePhasePrw.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sqss @ 0x1C001D524 (WPP_RECORDER_SF_sqss.c)
 *     WPP_RECORDER_SF_sLqss @ 0x1C004C84C (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildWakeEventDeviceContext(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  char v4; // dl
  void *v6; // rax
  void *v7; // r8
  __int64 v8; // r9
  ULONG_PTR v10; // r14
  int v11; // eax
  int v12; // edx
  unsigned int v13; // r10d
  void *v14; // r8
  __int64 v15; // r9
  const char *v16; // rax
  const char *v17; // r10
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  int BugCheckParameter4; // [rsp+20h] [rbp-38h]

  v2 = *(_QWORD *)(BugCheckParameter3 + 32);
  v4 = 0;
  if ( *(_DWORD *)v2 >= 2u )
  {
    v10 = BugCheckParameter2 + 920;
    v11 = AMLIGetNameSpaceObject(*(_BYTE **)(v2 + 40), 0LL, (unsigned __int64 *)(BugCheckParameter2 + 920), 0);
    v12 = 0;
    v13 = v11;
    if ( v11 < 0 )
    {
      v14 = &unk_1C006FE7D;
      if ( BugCheckParameter2 )
      {
        v15 = *(_QWORD *)(BugCheckParameter2 + 8);
        v12 = BugCheckParameter2;
        if ( (v15 & 0x200000000000LL) != 0 && (v15 & 0x400000000000LL) != 0 )
          v14 = *(void **)(BugCheckParameter2 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v12, (_DWORD)v14, 18);
      KeBugCheckEx(0xA5u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    if ( *(_WORD *)(**(_QWORD **)v10 + 66LL) != 6 )
    {
      v16 = (const char *)&unk_1C006FE7D;
      v17 = (const char *)&unk_1C006FE7D;
      if ( BugCheckParameter2 )
      {
        v18 = *(_QWORD *)(BugCheckParameter2 + 8);
        LOBYTE(v12) = BugCheckParameter2;
        if ( (v18 & 0x200000000000LL) != 0 )
        {
          v16 = *(const char **)(BugCheckParameter2 + 560);
          if ( (v18 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(BugCheckParameter2 + 568);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x13u,
          BugCheckParameter4,
          *(const char **)(v2 + 40),
          v12,
          v16,
          v17);
      KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(v2 + 40));
    }
    v19 = *(_QWORD *)(BugCheckParameter3 + 32);
    v20 = *(_WORD *)(v19 + 50);
    if ( v20 != 1 )
      KeBugCheckEx(0xA5u, 4uLL, BugCheckParameter2, BugCheckParameter3, v20);
    *(_DWORD *)(BugCheckParameter2 + 928) = *(_DWORD *)(v19 + 64);
    _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 952), 0x4000000000uLL);
    return v13;
  }
  else
  {
    v6 = &unk_1C006FE7D;
    v7 = &unk_1C006FE7D;
    if ( BugCheckParameter2 )
    {
      v8 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(BugCheckParameter2 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(void **)(BugCheckParameter2 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xAu,
        0x11u,
        (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
        13,
        v4,
        (__int64)v6,
        (__int64)v7);
    return 3221225485LL;
  }
}
