/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0051E7C
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0051768 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this)
{
  CInputConfig *v1; // r15
  _QWORD **v2; // rbx
  _QWORD **v3; // rbp
  _QWORD **v4; // rsi
  CInputConfig *v5; // rax
  CInputConfig *v6; // r14
  _QWORD **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD **v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v1 = gpInputConfig;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)v1;
  v6 = **(CInputConfig ***)v1;
  while ( v5 != v1 )
  {
    v7 = (_QWORD **)((char *)v5 + 16);
    if ( v5 == (CInputConfig *)-16LL )
      break;
    if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    v11 = v7;
    if ( !*((_BYTE *)v7 + 1192) )
      v11 = v2;
    v2 = v11;
    v12 = *((_DWORD *)v7 + 2);
    if ( (v12 & 1) != 0 )
    {
      v3 = v7;
      *((_DWORD *)v7 + 2) = v12 & 0xFFFFFFFE;
    }
    v5 = v6;
    v6 = *(CInputConfig **)v6;
    if ( v4 )
      v7 = v4;
    v4 = v7;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( v2 )
    goto LABEL_16;
  v2 = v4;
  if ( v3 )
    v2 = v3;
  if ( v2 )
LABEL_16:
    *((_DWORD *)v2 + 2) |= 1u;
}
