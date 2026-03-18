/*
 * XREFs of PiUEventApplyAdditionalFilters @ 0x140697A2C
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x1406990D0 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14071D0B8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x14073444C (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14073CCC4 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1405BB1C4 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBF24 (PiPnpRtlApplyMandatoryFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x1405BC070 (SeQuerySessionIdTokenEx.c)
 */

BOOLEAN __fastcall PiUEventApplyAdditionalFilters(__int64 a1, __int64 a2)
{
  int v2; // r8d
  BOOLEAN v3; // bl
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  struct _SECURITY_SUBJECT_CONTEXT *v9; // rsi
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // eax
  void *v14; // rdx
  int v15; // r8d
  int v16; // r8d
  PACCESS_TOKEN ClientToken; // rcx
  GENERIC_MAPPING GenericMapping; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN IsServiceSession; // [rsp+70h] [rbp+30h] BYREF
  ULONG SessionId; // [rsp+80h] [rbp+40h] BYREF

  v2 = *(_DWORD *)(a1 + 88);
  v3 = 1;
  IsServiceSession = 1;
  v6 = v2 - 1;
  if ( !v6 )
  {
LABEL_4:
    v9 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
    v10 = 1;
    v11 = a1 + 120;
    goto LABEL_5;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v15 = v8 - 1;
      if ( v15 )
      {
        v16 = v15 - 5;
        if ( v16 )
        {
          if ( (unsigned int)(v16 - 1) >= 2 )
            return v3;
        }
      }
    }
    goto LABEL_4;
  }
  v9 = (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 56);
  v10 = 3;
  v11 = a1 + 136;
LABEL_5:
  v12 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, v11, v10, 0LL, v9, &IsServiceSession);
  if ( v12 >= 0 )
    return IsServiceSession;
  if ( v12 != -1073741772 )
    return 0;
  v14 = *(void **)(a1 + 48);
  v3 = 1;
  if ( !v14
    || (GenericMapping.GenericRead = 131073,
        GenericMapping.GenericWrite = 0x20000,
        GenericMapping.GenericExecute = 0x20000,
        GenericMapping.GenericAll = 983041,
        (int)PiAuVerifyAccessToObject(1u, v14, &GenericMapping, v9, &IsServiceSession) < 0)
    || (v3 = IsServiceSession) != 0 )
  {
    if ( *(_DWORD *)(a1 + 60) != -1 )
    {
      ClientToken = v9->ClientToken;
      if ( !v9->ClientToken )
        ClientToken = *(PACCESS_TOKEN *)(a2 + 72);
      SeQuerySessionIdTokenEx(ClientToken, &SessionId, &IsServiceSession);
      if ( !IsServiceSession && SessionId != *(_DWORD *)(a1 + 60) )
        return 0;
    }
  }
  return v3;
}
