/*
 * XREFs of RIMCmAllocPointerDeviceContacts @ 0x1C0159664
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C013F7E0 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C0148B58 (RIMIDEResetPointerDeviceMaxCount.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0159908 (RIMCmFreePointerDeviceContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  v4 = *(unsigned int *)(a1 + 720);
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 24);
  v7 = v4 - 1;
  if ( (_DWORD)v6 != 7 )
    v7 = v4;
  if ( (unsigned int)v4 < v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
    v4 = *(unsigned int *)(a1 + 720);
    v6 = *(unsigned int *)(a1 + 24);
  }
  v8 = v4 - 1;
  if ( (_DWORD)v6 != 7 )
    v8 = v4;
  if ( (unsigned int)v4 > v8 + 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
    v4 = *(unsigned int *)(a1 + 720);
  }
  if ( !(_DWORD)v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, v6);
    LODWORD(v4) = *(_DWORD *)(a1 + 720);
  }
  v9 = 10;
  if ( (unsigned int)v4 <= 0xA )
    v9 = v4;
  *(_DWORD *)(a1 + 944) = v9;
  v10 = 2840LL * *(unsigned int *)(a1 + 720);
  *(_QWORD *)(a1 + 936) = 0LL;
  v11 = Win32AllocPoolZInit(v10, v5);
  *(_QWORD *)(a1 + 912) = v11;
  if ( v11 && (v14 = Win32AllocPoolZInit(16LL * *(unsigned int *)(a1 + 944), v5), (*(_QWORD *)(a1 + 936) = v14) != 0LL) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 944); *v17 = v17 )
    {
      v16 = i++;
      v17 = (_QWORD *)(*(_QWORD *)(a1 + 936) + 16 * v16);
      v17[1] = v17;
    }
    v18 = (_QWORD *)(a1 + 920);
    *(_QWORD *)(a1 + 928) = a1 + 920;
    *(_QWORD *)(a1 + 920) = a1 + 920;
    v19 = *(_DWORD *)(a1 + 720);
    v20 = *(_DWORD *)(a1 + 24) == 7;
    if ( v20 < v19 )
    {
      v21 = a1 + 920;
      v22 = a1 + 920;
      while ( 1 )
      {
        v23 = (_QWORD *)(2840LL * v20 + *(_QWORD *)(a1 + 912) + 16LL);
        if ( v22 != v21 )
          __fastfail(3u);
        *v23 = v21;
        ++v20;
        v23[1] = v18;
        *v18 = v23;
        *(_QWORD *)(a1 + 928) = v23;
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
