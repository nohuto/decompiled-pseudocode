/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C012E874
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C011F8B8 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C012EB18 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCmAllocPointerDeviceContacts(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  size_t v10; // rcx
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  void *v14; // rax
  unsigned int i; // ecx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // esi
  unsigned int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // r11
  _QWORD *v23; // r8

  v3 = 0;
  v4 = *(unsigned int *)(a1 + 712);
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 24);
  v7 = v4 - 1;
  if ( (_DWORD)v6 != 7 )
    v7 = v4;
  if ( (unsigned int)v4 < v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
    v4 = *(unsigned int *)(a1 + 712);
    v6 = *(unsigned int *)(a1 + 24);
  }
  v8 = v4 - 1;
  if ( (_DWORD)v6 != 7 )
    v8 = v4;
  if ( (unsigned int)v4 > v8 + 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
    v4 = *(unsigned int *)(a1 + 712);
  }
  if ( !(_DWORD)v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
    LODWORD(v4) = *(_DWORD *)(a1 + 712);
  }
  v9 = 10;
  if ( (unsigned int)v4 <= 0xA )
    v9 = v4;
  *(_DWORD *)(a1 + 936) = v9;
  v10 = 2776LL * *(unsigned int *)(a1 + 712);
  *(_QWORD *)(a1 + 928) = 0LL;
  v11 = Win32AllocPoolZInit(v10, v5);
  *(_QWORD *)(a1 + 904) = v11;
  if ( v11 && (v14 = Win32AllocPoolZInit(16LL * *(unsigned int *)(a1 + 936), v5), (*(_QWORD *)(a1 + 928) = v14) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 936); *v17 = v17 )
    {
      v16 = i++;
      v17 = (_QWORD *)(*(_QWORD *)(a1 + 928) + 16 * v16);
      v17[1] = v17;
    }
    v18 = (_QWORD *)(a1 + 912);
    *(_QWORD *)(a1 + 920) = a1 + 912;
    *(_QWORD *)(a1 + 912) = a1 + 912;
    v19 = *(_DWORD *)(a1 + 712);
    v20 = *(_DWORD *)(a1 + 24) == 7;
    if ( v20 < v19 )
    {
      v21 = a1 + 912;
      v22 = a1 + 912;
      while ( 1 )
      {
        v23 = (_QWORD *)(2776LL * v20 + *(_QWORD *)(a1 + 904) + 16LL);
        if ( v22 != v21 )
          __fastfail(3u);
        *v23 = v21;
        ++v20;
        v23[1] = v18;
        *v18 = v23;
        *(_QWORD *)(a1 + 920) = v23;
        if ( v20 >= v19 )
          break;
        v22 = *v23;
        v18 = v23;
      }
    }
  }
  else
  {
    RIMCmFreePointerDeviceContacts(a1, v12, v13);
    return (unsigned int)-1073741670;
  }
  return v3;
}
