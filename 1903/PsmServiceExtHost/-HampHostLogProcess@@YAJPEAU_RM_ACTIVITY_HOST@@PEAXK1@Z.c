/*
 * XREFs of ?HampHostLogProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180077990
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostLogProcess(struct _RM_ACTIVITY_HOST *a1, void *a2, __int64 a3, void *a4)
{
  int v4; // edx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // r9d
  __int64 v7; // r10
  UINT32 cData; // r11d
  int v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v13; // [rsp+60h] [rbp-38h]
  UINT32 v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v11 = *(_QWORD *)(v7 + 32);
    v16 = &v11;
    v10 = v6;
    v14 = cData;
    v17 = v4;
    TlgWrite(v5, &unk_180098BA9, 0LL, 0LL, cData, &pData);
  }
  return 0LL;
}
