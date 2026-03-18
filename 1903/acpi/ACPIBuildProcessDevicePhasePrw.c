/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00101E0 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGpeValidIndex @ 0x1C0023E5C (ACPIGpeValidIndex.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002C91C (ACPIBuildDevicePowerNodes.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C100 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r13
  bool v4; // si
  int v5; // r15d
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  __int64 v8; // rdx
  void *v9; // rax
  void *v10; // r8
  __int64 v12; // rbx
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  unsigned __int8 v19; // cl
  unsigned int v20; // ebx
  int v21; // esi
  unsigned __int64 v22; // rdx
  __int64 *v23; // rbx
  int v24; // r8d
  unsigned __int8 v25; // r8
  __int64 v26; // rdx
  void *v27; // rax
  void *v28; // r8
  _QWORD v29[16]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 408) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C0082858 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1LL);
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1465074783LL);
    if ( v6 )
      *(_DWORD *)(v1 + 552) |= 0x40u;
    else
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1465077855LL);
    *(_QWORD *)(v1 + 408) = v6;
    v7 = *(_QWORD *)(a1 + 56);
    if ( !v7 )
    {
      if ( (*(_DWORD *)(v1 + 552) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x400000000uLL);
      v7 = *(_QWORD *)(a1 + 56);
    }
    if ( v7 )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 )
        v4 = (*(_QWORD *)(v1 + 8) & 0x800000000LL) == 0;
      if ( *(_WORD *)(v2 + 2) != 4 )
      {
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
        v7 = *(_QWORD *)(a1 + 56);
      }
      v5 = ACPIBuildDevicePowerNodes(v1, v7);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v12 = *(_QWORD *)(v2 + 32);
      v13 = *(_WORD *)(v12 + 10);
      if ( v13 != 1 )
      {
        if ( v13 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v13);
        v5 = ACPIBuildWakeEventDeviceContext(v1, v12 + 8);
        if ( v5 < 0 )
        {
          v26 = *(_QWORD *)(v1 + 8);
          v27 = &unk_1C006FE7D;
          v28 = &unk_1C006FE7D;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v27 = *(void **)(v1 + 560);
            if ( (v26 & 0x400000000000LL) != 0 )
              v28 = *(void **)(v1 + 568);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v26,
              10,
              43,
              (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
              v5,
              v1,
              (__int64)v27,
              (__int64)v28);
          }
          KeBugCheckEx(0xA5u, 6uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v12 + 10));
        }
      }
      v14 = *(_QWORD *)(v2 + 32);
      v15 = *(_WORD *)(v14 + 50);
      if ( v15 != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), v15);
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 456) = *(_DWORD *)(v12 + 24);
        v16 = *(_QWORD *)(v14 + 64);
        if ( v16 >= 6 )
          v17 = 0;
        else
          v17 = SystemPowerStateTranslation[v16];
        *(_DWORD *)(v1 + 488) = v17;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x100000000uLL);
        }
        else
        {
          v18 = *(_QWORD *)(v1 + 952);
          if ( (v18 & 0x800000000LL) != 0 )
          {
            if ( (v18 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v12 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && (*(_QWORD *)(v1 + 952) & 0x100000000LL) == 0
        && (unsigned __int8)ACPIGpeValidIndex(*(unsigned int *)(v12 + 24)) )
      {
        v20 = v19;
        v21 = 1 << (v19 & 7);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        v22 = (unsigned __int64)v20 >> 3;
        if ( ((unsigned __int8)v21 & *((_BYTE *)GpeEnable + v22)) != 0 )
        {
          if ( (*(_QWORD *)(v1 + 8) & 0x800000000LL) != 0 )
          {
            *((_BYTE *)GpeSpecialHandler + v22) |= v21;
            v25 = *((_BYTE *)GpeWakeHandler + v22);
            if ( (v25 & (unsigned __int8)v21) != 0 )
              *((_BYTE *)GpeWakeHandler + v22) = v25 & ~(_BYTE)v21;
          }
          else if ( ((unsigned __int8)v21 & *((_BYTE *)GpeSpecialHandler + v22)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v22) |= v21;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C0082858 = 0;
    pszDest = 0;
    FreeDataBuffs(v2, 1LL);
    v23 = *(__int64 **)(v1 + 408);
    if ( v23 )
    {
      memset(v29, 0, 0x78uLL);
      v24 = *(_DWORD *)(v1 + 552) & 0x40;
      WORD1(v29[0]) = 1;
      v29[2] = 0LL;
      WORD1(v29[5]) = 1;
      v29[7] = 0LL;
      WORD1(v29[10]) = 1;
      v29[12] = 0LL;
      AMLIAsyncEvalObject(v23, 0LL, (v24 | 0x20u) >> 5, v29, 0LL, 0LL);
    }
  }
LABEL_6:
  v8 = *(_QWORD *)(v1 + 8);
  v9 = &unk_1C006FE7D;
  v10 = &unk_1C006FE7D;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(void **)(v1 + 560);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6,
      44,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v5,
      v1,
      (__int64)v9,
      (__int64)v10);
  }
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
