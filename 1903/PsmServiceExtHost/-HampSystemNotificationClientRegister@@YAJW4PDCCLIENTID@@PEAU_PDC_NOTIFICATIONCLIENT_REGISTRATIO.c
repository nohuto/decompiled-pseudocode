/*
 * XREFs of ?HampSystemNotificationClientRegister@@YAJW4PDCCLIENTID@@PEAU_PDC_NOTIFICATIONCLIENT_REGISTRATION@@PEAXPEAPEAX@Z @ 0x180043128
 * Callers:
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180042F60 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemNotificationClientRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r9d
  const struct _TlgProvider_t *v6; // rcx
  UINT32 cData; // r10d
  unsigned int v9; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp-38h]
  UINT32 v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  __int64 v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v9 = PdcNotificationClientRegister(1LL);
  v5 = v9;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v9;
    v12 = cData;
    v14 = a4;
    v15 = 8;
    TlgWrite(v6, &unk_1800968C6, 0LL, 0LL, cData, &pData);
    return v9;
  }
  return v5;
}
