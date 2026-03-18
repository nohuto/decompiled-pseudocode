/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C00DDB64
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C00F4D04 (RIMIDEIsCompatibleDevice.c)
 *     RIMRemoveHoldingFrame @ 0x1C00F92BC (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  __int64 v2; // rdx
  __int64 *v3; // rsi
  __int64 v4; // rbx
  PVOID **v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  _QWORD *result; // rax
  PVOID ***v11; // r15
  _QWORD *v12; // rbx
  PVOID **v13; // r13
  PVOID *v14; // r12
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  PVOID **v18; // rdi
  PVOID *v19; // rax
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  PVOID *v28; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v31; // [rsp+28h] [rbp-30h]

  RIMLockExclusive((__int64)&gObListLock);
  v3 = (__int64 *)gObRimDevList;
  v31 = &v30;
  v30 = &v30;
  while ( v3 != &gObRimDevList )
  {
    v4 = (unsigned __int64)(v3 + 8) & -(__int64)(v3 != (__int64 *)16);
    v5 = *(PVOID ***)(v4 + 0x150);
    if ( v5
      && *((_BYTE *)v5 + 73)
      && (*(_DWORD *)(((unsigned __int64)(v3 + 8) & -(__int64)(v3 != (__int64 *)16)) + 0xB8) & 0x1000) != 0
      && (*(_DWORD *)(((unsigned __int64)(v3 + 8) & -(__int64)(v3 != (__int64 *)16)) + 0xC8) & 4) == 0 )
    {
      if ( v5 == Object )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v2);
      if ( (unsigned int)RIMIDEIsCompatibleDevice(Object, (unsigned __int64)(v3 + 8) & -(__int64)(v3 != (__int64 *)16)) )
      {
        v7 = (_QWORD *)(v4 + 120);
        if ( (_QWORD *)*v7 != v7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v2);
        v8 = v31;
        if ( *v31 != &v30 )
          __fastfail(3u);
        *(_QWORD *)(((unsigned __int64)(v3 + 8) & -(__int64)(v3 != (__int64 *)16)) + 0x80) = v31;
        *v7 = &v30;
        *v8 = v7;
        v31 = (_QWORD **)(v4 + 120);
        *(_DWORD *)(v4 + 200) |= 0x10u;
      }
    }
    v3 = (__int64 *)*v3;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v9 = v30;
  for ( result = &v30; v9 != &v30; result = &v30 )
  {
    v11 = (PVOID ***)(v9 + 27);
    v12 = v9;
    v13 = (PVOID **)v9[27];
    v14 = (PVOID *)(v9 - 15);
    RIMLockExclusive((__int64)(v13 + 12));
    v16 = (_QWORD *)*v9;
    v9 = v16;
    if ( (_QWORD *)v16[1] != v12 || (v17 = (_QWORD *)v12[1], (_QWORD *)*v17 != v12) )
      __fastfail(3u);
    *v17 = v16;
    v18 = v13 + 51;
    v16[1] = v17;
    v12[1] = v12;
    *v12 = v12;
    while ( 1 )
    {
      v19 = *v18;
      if ( !*v18 )
        break;
      if ( v19 == v14 )
      {
        if ( v12[16] )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v15);
        *v18 = (PVOID *)*(v12 - 10);
        break;
      }
      v18 = (PVOID **)(v19 + 5);
    }
    if ( (v12[8] & 0x100) != 0 )
    {
      v20 = v12 - 2;
      if ( (_QWORD *)*v20 == v20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v15);
      v21 = (_QWORD *)*v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20) )
        __fastfail(3u);
      *v22 = v21;
      v21[1] = v22;
      v20[1] = v20;
      *v20 = v20;
      *((_DWORD *)v12 + 16) &= ~0x100u;
    }
    if ( (*((_DWORD *)v12 + 20) & 0x80u) != 0 )
    {
      v23 = (_QWORD *)(v12[45] + 824LL);
      v24 = *v23;
      if ( *(_QWORD **)(*v23 + 8LL) != v23 || (v25 = *(_QWORD **)(v12[45] + 832LL), (_QWORD *)*v25 != v23) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      v23[1] = v23;
      *v23 = v23;
    }
    RIMRemoveHoldingFrame(v13, v14);
    v13[13] = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 12, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v13);
    RIMLockExclusive((__int64)(Object + 12));
    if ( ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
    *v11 = Object;
    *(v12 - 10) = Object[51];
    *v11 = Object;
    Object[51] = v14;
    if ( Object[78] || *((_DWORD *)Object + 212) )
      *((_DWORD *)v12 + 16) = v12[8] & 0xFF09FFFF | 0x20000;
    if ( (*((_DWORD *)v12 + 20) & 0x80u) != 0 )
    {
      v28 = Object[53];
      v29 = (_QWORD *)(v12[45] + 824LL);
      if ( *v28 != Object + 52 )
        __fastfail(3u);
      *v29 = Object + 52;
      v29[1] = v28;
      *v28 = v29;
      Object[53] = (PVOID *)v29;
    }
    Object[13] = 0LL;
    ExReleasePushLockExclusiveEx(Object + 12, 0LL);
    KeLeaveCriticalRegion();
  }
  return result;
}
