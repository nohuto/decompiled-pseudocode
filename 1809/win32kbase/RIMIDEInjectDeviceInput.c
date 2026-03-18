/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C011EA60
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C00F03E0 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C011ED14 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C011CD70 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C011D0D8 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C011F964 (RIMIDESetLinkCollectionUsageValues.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(char *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  int v6; // r12d
  int v7; // esi
  char *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // eax
  int v12; // ecx
  _WORD *v13; // rbx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-58h] BYREF
  int v23; // [rsp+44h] [rbp-54h]
  int v24; // [rsp+48h] [rbp-50h] BYREF
  int *v25; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  v23 = 1;
  v22[0] = 0;
  v24 = 0;
  v25 = 0LL;
  v6 = 1;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = (char *)Object;
    v9 = *((_QWORD *)Object + 59);
    v10 = *((_QWORD *)Object + 53);
    if ( !*(_DWORD *)(v9 + 16) )
      *(_DWORD *)(v9 + 16) = 1;
    RIMLockExclusive(v10 + 104);
    InputTraceLogging::RIM::InjectInput((__int64)(v8 + 88), a4);
    if ( *(_BYTE *)(v10 + 81) )
    {
      v7 = -1073741637;
    }
    else
    {
      v11 = *((_DWORD *)v8 + 72);
      if ( (v11 & 0x10) != 0 || (v11 & 8) != 0 )
        v25 = &v24;
      memset(*(void **)(*((_QWORD *)v8 + 69) + 24LL), 0, *(unsigned __int16 *)(*((_QWORD *)v8 + 69) + 44LL));
      if ( !a3 )
        goto LABEL_33;
      v12 = 1;
      v13 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex(
                              (struct RIMDEV *)(v8 + 88),
                              (unsigned __int16)*v13,
                              v22,
                              v12) )
      {
        v15 = *((_DWORD *)v8 + 72);
        if ( ((v15 & 0x10) != 0 || (v15 & 8) != 0) && *(v13 - 4) == 13 && *(v13 - 3) == 84 )
          v6 = *((_DWORD *)v13 - 1);
        v16 = RIMIDESetLinkCollectionUsageValues((int)v8 + 88, v14, (unsigned int)a2 + 12 * v4, v22[0], (__int64)v25);
        v12 = 0;
        if ( !v16 )
          goto LABEL_33;
        if ( *v13 )
          v23 = 0;
        else
          v12 = v23;
        ++v4;
        v13 += 6;
        if ( v4 >= a3 )
          goto LABEL_23;
      }
      v16 = 0;
LABEL_23:
      if ( v16 )
      {
        v17 = *((_DWORD *)v8 + 72);
        if ( (v17 & 8) != 0 || (v17 & 0x10) != 0 )
        {
          v18 = v24;
          if ( v6 == v24 )
          {
            v19 = v17 & 0xFFFFFFF7;
            *((_DWORD *)v8 + 72) = v19;
          }
          else
          {
            v7 = -1073741668;
            *((_DWORD *)v8 + 72) = v17 | 8;
            WPP_RECORDER_SF_dd(
              gRimLog,
              3u,
              0x16u,
              0x13u,
              (__int64)&WPP_432d1bb01b1f3454cb02163d6984f489_Traceguids,
              v6,
              v18);
            v19 = *((_DWORD *)v8 + 72);
          }
          *((_DWORD *)v8 + 72) = v19 & 0xFFFFFFEF;
        }
        if ( v7 < 0 )
        {
          v7 = -1073741811;
        }
        else
        {
          RIMLockExclusive(v10 + 568);
          v20 = *((_QWORD *)v8 + 69);
          *((_DWORD *)v8 + 86) = 0;
          *((_QWORD *)v8 + 44) = *(unsigned __int16 *)(v20 + 44);
          rimProcessDeviceBufferAndStartRead((struct RawInputManagerObject *)v10, (struct RIMDEV *)(v8 + 88));
          *(_QWORD *)(v10 + 576) = 0LL;
          ExReleasePushLockExclusiveEx(v10 + 568, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
LABEL_33:
        v7 = -1073741668;
      }
    }
    *(_QWORD *)(v10 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
