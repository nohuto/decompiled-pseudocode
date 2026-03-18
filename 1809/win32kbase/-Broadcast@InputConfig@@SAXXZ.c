/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1C003C578
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x1C0095CF0 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C00365D4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputConfig::Broadcast(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  struct CEResource *v3; // rdx
  CInputConfig *v4; // r15
  __int64 v5; // r8
  unsigned int *v6; // rax
  _QWORD *v7; // rsi
  unsigned int *v8; // r14
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  char *v11; // rax
  struct CEResource *v12; // rdx
  __int64 v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  __int64 *v16; // r14
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  char v24[8]; // [rsp+28h] [rbp-79h] BYREF
  CInputConfig *v25; // [rsp+30h] [rbp-71h]
  unsigned int *v26; // [rsp+38h] [rbp-69h]
  _QWORD *v27; // [rsp+40h] [rbp-61h]
  char v28[8]; // [rsp+48h] [rbp-59h] BYREF
  __int64 *v29; // [rsp+50h] [rbp-51h]
  __int64 *v30; // [rsp+58h] [rbp-49h]
  int v31; // [rsp+68h] [rbp-39h]

  v0 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v0, 7LL, v2);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v0 )
  {
    v4 = gpInputConfig;
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v24, v3);
    v6 = *(unsigned int **)v4;
    v25 = v4;
    v7 = *(_QWORD **)v6;
    v27 = *(_QWORD **)v6;
    while ( 1 )
    {
      v26 = v6;
      if ( v6 == (unsigned int *)v4 || (v8 = v6 + 4, v6 == (unsigned int *)-16LL) )
      {
LABEL_12:
        v27 = v7;
        CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v24);
        v31 = 1;
        InputExtensibilityCallout::CoreMsgSendMessage(v19, 7);
        return;
      }
      v9 = v6[303];
      if ( v9 > 1 )
      {
        v21 = 84LL * (v9 - 1);
        v22 = 0xFFFFFFFFLL;
        if ( v21 > 0xFFFFFFFF || (v22 = (unsigned int)v21, v23 = v21 + 104, (unsigned int)v22 >= 0xFFFFFF98) )
          v10 = 0;
        else
          v10 = v23;
        if ( v10 < 0x68 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, 0xFFFFFFFFLL, v5);
        if ( !v10 )
          goto LABEL_15;
      }
      else
      {
        v10 = 104;
      }
      v11 = (char *)Win32AllocPoolZInit(v10, 0x6F436E49u);
      v13 = (__int64)v11;
      if ( !v11 )
        goto LABEL_12;
      *(_DWORD *)v11 = 0;
      v14 = 0;
      *(_QWORD *)(v11 + 4) = *(_QWORD *)v8;
      v15 = v8[2];
      v16 = (__int64 *)(v8 + 300);
      *((_DWORD *)v11 + 3) = v15;
      *((_DWORD *)v11 + 4) = v9;
      CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v28, v12);
      v17 = (__int64 *)*v16;
      v30 = (__int64 *)*v16;
      v29 = v16;
      while ( v17 != v16 && v17 != (__int64 *)-16LL )
      {
        v18 = 84LL * v14++;
        *(_OWORD *)(v18 + v13 + 20) = *((_OWORD *)v17 + 1);
        *(_OWORD *)(v18 + v13 + 36) = *((_OWORD *)v17 + 2);
        *(_OWORD *)(v18 + v13 + 52) = *((_OWORD *)v17 + 3);
        *(_OWORD *)(v18 + v13 + 68) = *((_OWORD *)v17 + 4);
        *(_OWORD *)(v18 + v13 + 84) = *((_OWORD *)v17 + 5);
        *(_DWORD *)(v18 + v13 + 100) = *((_DWORD *)v17 + 24);
        v17 = (__int64 *)*v17;
      }
      v30 = v17;
      CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v28);
      InputExtensibilityCallout::CoreMsgSendMessage(v20, 7);
      Win32FreePool(v13);
LABEL_15:
      v6 = (unsigned int *)v7;
      v7 = (_QWORD *)*v7;
    }
  }
}
