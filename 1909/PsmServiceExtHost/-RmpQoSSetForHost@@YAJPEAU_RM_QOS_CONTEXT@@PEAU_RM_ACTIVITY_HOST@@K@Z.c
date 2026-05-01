/*
 * XREFs of ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001460
 * Callers:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001258 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180072920 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpQoSSetForHost(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2, int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int v8; // edx
  const struct _TlgProvider_t *v9; // rcx
  bool v11; // [rsp+40h] [rbp-39h] BYREF
  int v12; // [rsp+44h] [rbp-35h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  __int64 *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  bool *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  __int64 v24; // [rsp+A0h] [rbp+27h]

  if ( a3 )
    v5 = *((unsigned __int8 *)a1 + 32);
  else
    v5 = 0LL;
  memset_0(&pData, 0, 0x60uLL);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((unsigned int *)a2 + 156);
  HIDWORD(v15) = 1;
  v24 = v5;
  v12 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, __int64, _QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)(v6 + 40) + 136LL))(
          (char *)a2 + 552,
          *((unsigned int *)a2 + 155),
          (char *)a2 + 88,
          v7,
          *((_QWORD *)a2 + 4),
          &pData);
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), 0);
  if ( v12 < 0 )
  {
    if ( !a3 )
      *((_BYTE *)a2 + 1196) &= ~4u;
  }
  else
  {
    *((_BYTE *)a2 + 1196) &= ~4u;
    *((_BYTE *)a2 + 1196) |= 4 * (a3 & 1);
    v12 = 0;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), v8);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v12;
    v13 = *((_QWORD *)a2 + 4);
    v11 = a3 != 0;
    v23 = 0;
    v18 = &v13;
    v21 = &v11;
    v16 = 4;
    v19 = 8;
    v22 = 1;
    TlgWrite(v9, &unk_180096516, 0LL, 0LL, 5u, &pData);
  }
  return (unsigned int)v12;
}
