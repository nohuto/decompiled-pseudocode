/*
 * XREFs of RIMIDEInjectDeviceInput @ 0x1C00F3FE0
 * Callers:
 *     NtUserInjectDeviceInput @ 0x1C00B7E40 (NtUserInjectDeviceInput.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C00F4274 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C00F2678 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C00F4E2C (RIMIDESetLinkCollectionUsageValues.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMIDEInjectDeviceInput(char *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v5; // r12d
  int v6; // edi
  char *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // eax
  int v11; // ecx
  _WORD *v12; // rbx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rax
  int v21; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+44h] [rbp-54h] BYREF
  int *v23; // [rsp+48h] [rbp-50h]
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v27; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v21 = 1;
  v27 = 0;
  v22 = 0;
  v23 = 0LL;
  v5 = 1;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v6 >= 0 )
  {
    v7 = (char *)Object;
    v8 = *((_QWORD *)Object + 58);
    v9 = *((_QWORD *)Object + 52);
    if ( !*(_DWORD *)(v8 + 16) )
      *(_DWORD *)(v8 + 16) = 1;
    RIMLockExclusive(v9 + 96);
    if ( *(_BYTE *)(v9 + 73) )
    {
      v6 = -1073741637;
    }
    else
    {
      v10 = *((_DWORD *)v7 + 70);
      if ( (v10 & 0x10) != 0 || (v10 & 8) != 0 )
        v23 = &v22;
      memset(*(void **)(*((_QWORD *)v7 + 68) + 24LL), 0, *(unsigned __int16 *)(*((_QWORD *)v7 + 68) + 44LL));
      if ( !a3 )
        goto LABEL_33;
      v11 = 1;
      v12 = (_WORD *)(a2 + 8);
      while ( (unsigned int)RIMIDEInjectionIndexToLinkIndex(
                              (struct RIMDEV *)(v7 + 80),
                              (unsigned __int16)*v12,
                              &v27,
                              v11) )
      {
        v14 = *((_DWORD *)v7 + 70);
        if ( ((v14 & 0x10) != 0 || (v14 & 8) != 0) && *(v12 - 4) == 13 && *(v12 - 3) == 84 )
          v5 = *((_DWORD *)v12 - 1);
        v15 = RIMIDESetLinkCollectionUsageValues((int)v7 + 80, v13, (unsigned int)a2 + 12 * v3, v27, (__int64)v23);
        v11 = 0;
        if ( !v15 )
          goto LABEL_33;
        if ( *v12 )
          v21 = 0;
        else
          v11 = v21;
        ++v3;
        v12 += 6;
        if ( v3 >= a3 )
          goto LABEL_23;
      }
      v15 = 0;
LABEL_23:
      if ( v15 )
      {
        v16 = *((_DWORD *)v7 + 70);
        if ( (v16 & 8) != 0 || (v16 & 0x10) != 0 )
        {
          v17 = v22;
          if ( v5 == v22 )
          {
            v18 = v16 & 0xFFFFFFF7;
            *((_DWORD *)v7 + 70) = v18;
          }
          else
          {
            v6 = -1073741668;
            *((_DWORD *)v7 + 70) = v16 | 8;
            WPP_RECORDER_SF_dd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x15u,
              0x14u,
              (__int64)&WPP_f4406fea895d3223a5acc8e9e607c671_Traceguids,
              v5,
              v17);
            v18 = *((_DWORD *)v7 + 70);
          }
          *((_DWORD *)v7 + 70) = v18 & 0xFFFFFFEF;
        }
        if ( v6 < 0 )
        {
          v6 = -1073741811;
        }
        else
        {
          RIMLockExclusive(v9 + 552);
          v19 = *((_QWORD *)v7 + 68);
          *((_DWORD *)v7 + 84) = 0;
          *((_QWORD *)v7 + 43) = *(unsigned __int16 *)(v19 + 44);
          rimProcessDeviceBufferAndStartRead(v9, v7 + 80);
          *(_QWORD *)(v9 + 560) = 0LL;
          ExReleasePushLockExclusiveEx(v9 + 552, 0LL);
          KeLeaveCriticalRegion();
        }
      }
      else
      {
LABEL_33:
        v6 = -1073741668;
      }
    }
    *(_QWORD *)(v9 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v6;
}
