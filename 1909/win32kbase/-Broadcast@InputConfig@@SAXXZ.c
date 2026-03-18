/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1C00519EC
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0051324 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x1C00A8D50 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C004B1B0 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputConfig::Broadcast(void)
{
  InputExtensibilityCallout *v0; // rdi
  char *v1; // rbx
  __int64 v2; // r8
  CInputConfig *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r8
  CInputConfig *v6; // rax
  CInputConfig *i; // r14
  _QWORD **v8; // rsi
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  char *v11; // rax
  __int64 v12; // rdi
  int v13; // ecx
  __int64 *v14; // rsi
  unsigned int v15; // ebp
  __int64 *j; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _BYTE v21[100]; // [rsp+24h] [rbp-84h] BYREF

  v0 = gpInputExtensibilityCallout;
  v1 = (char *)gpInputExtensibilityCallout + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = InputExtensibilityCallout::_CanSendMessageToDestinationInternal((__int64)v0, 7LL, v2);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v0 )
  {
    v3 = gpInputConfig;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v6 = *(CInputConfig **)v3;
    for ( i = **(CInputConfig ***)v3; ; i = *(CInputConfig **)i )
    {
      if ( v6 == v3 || (v8 = (_QWORD **)((char *)v6 + 16), v6 == (CInputConfig *)-16LL) )
      {
LABEL_12:
        ExReleaseResourceLite(CInputConfig::slock);
        KeLeaveCriticalRegion();
        memset(v21, 0, sizeof(v21));
        InputExtensibilityCallout::CoreMsgSendMessage(v18, 7);
        return;
      }
      v9 = *((_DWORD *)v6 + 303);
      if ( v9 > 1 )
      {
        v20 = 84LL * (v9 - 1);
        if ( v20 > 0xFFFFFFFF || (v10 = v20 + 104, (unsigned int)v20 >= 0xFFFFFF98) )
        {
          v10 = 0;
          MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL, v4, v5);
        }
        if ( !v10 )
          goto LABEL_15;
      }
      else
      {
        v10 = 104;
      }
      v11 = (char *)Win32AllocPoolZInit(v10, 1866690121LL);
      v12 = (__int64)v11;
      if ( !v11 )
        goto LABEL_12;
      *(_DWORD *)v11 = 0;
      *(_QWORD *)(v11 + 4) = *v8;
      v13 = *((_DWORD *)v8 + 2);
      v14 = (__int64 *)(v8 + 150);
      *((_DWORD *)v11 + 4) = v9;
      v15 = 0;
      *((_DWORD *)v11 + 3) = v13;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = (__int64 *)*v14; j != v14 && j != (__int64 *)-16LL; j = (__int64 *)*j )
      {
        v17 = 84LL * v15++;
        *(_OWORD *)(v17 + v12 + 20) = *((_OWORD *)j + 1);
        *(_OWORD *)(v17 + v12 + 36) = *((_OWORD *)j + 2);
        *(_OWORD *)(v17 + v12 + 52) = *((_OWORD *)j + 3);
        *(_OWORD *)(v17 + v12 + 68) = *((_OWORD *)j + 4);
        *(_OWORD *)(v17 + v12 + 84) = *((_OWORD *)j + 5);
        *(_DWORD *)(v17 + v12 + 100) = *((_DWORD *)j + 24);
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      InputExtensibilityCallout::CoreMsgSendMessage(v19, 7);
      Win32FreePool(v12);
LABEL_15:
      v6 = i;
    }
  }
}
