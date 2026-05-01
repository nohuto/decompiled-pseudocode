/*
 * XREFs of ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18006365C
 * Callers:
 *     ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800634F8 (-RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostIsGpuInterfering(struct _RM_ACTIVITY_HOST *a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  unsigned __int64 v7; // [rsp+40h] [rbp-29h] BYREF
  struct _RM_ACTIVITY_HOST *v8; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _RM_ACTIVITY_HOST **v10; // [rsp+70h] [rbp+7h]
  int v11; // [rsp+78h] [rbp+Fh]
  int v12; // [rsp+7Ch] [rbp+13h]
  char *v13; // [rsp+80h] [rbp+17h]
  int v14; // [rsp+88h] [rbp+1Fh]
  int v15; // [rsp+8Ch] [rbp+23h]
  unsigned __int64 *v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+98h] [rbp+2Fh]
  int v18; // [rsp+9Ch] [rbp+33h]

  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                                 + 88LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    if ( v7 <= *((_QWORD *)a1 + 145) )
    {
      *a2 = 0;
    }
    else
    {
      if ( dword_18009B0B0 > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
        {
          v12 = 0;
          v15 = 0;
          v18 = 0;
          v10 = &v8;
          v16 = &v7;
          v8 = a1;
          v11 = 8;
          v13 = (char *)a1 + 1160;
          v14 = 8;
          v17 = 8;
          TlgWrite(v6, &unk_180087DDB, 0LL, 0LL, 5u, &pData);
          v5 = v7;
        }
      }
      *a2 = 1;
      *((_QWORD *)a1 + 145) = v5;
    }
    return 0LL;
  }
  return result;
}
