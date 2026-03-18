/*
 * XREFs of ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C003C2C8
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_FindDefaultInputSpace(CInputConfig *this, struct CEResource *a2)
{
  CInputConfig *v2; // r14
  _QWORD **v3; // rbx
  _QWORD **v4; // rbp
  _QWORD **v5; // rsi
  CInputConfig *v6; // rax
  CInputConfig *v7; // r15
  _QWORD **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD **v12; // rax
  int v13; // eax
  PERESOURCE *v14; // [rsp+20h] [rbp-38h] BYREF

  v2 = gpInputConfig;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v14, a2);
  v6 = *(CInputConfig **)v2;
  v7 = **(CInputConfig ***)v2;
  while ( v6 != v2 )
  {
    v8 = (_QWORD **)((char *)v6 + 16);
    if ( v6 == (CInputConfig *)-16LL )
      break;
    if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v12 = v8;
    if ( !*((_BYTE *)v8 + 1192) )
      v12 = v3;
    v3 = v12;
    v13 = *((_DWORD *)v8 + 2);
    if ( (v13 & 1) != 0 )
    {
      v4 = v8;
      *((_DWORD *)v8 + 2) = v13 & 0xFFFFFFFE;
    }
    v6 = v7;
    v7 = *(CInputConfig **)v7;
    if ( v5 )
      v8 = v5;
    v5 = v8;
  }
  ExReleaseResourceLite(*v14);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredMsgKM("There should always be an input space");
  if ( v3 )
    goto LABEL_19;
  v3 = v5;
  if ( v4 )
    v3 = v4;
  if ( v3 )
LABEL_19:
    *((_DWORD *)v3 + 2) |= 1u;
}
