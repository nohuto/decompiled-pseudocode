/*
 * XREFs of ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x180041C5C
 * Callers:
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180041A18 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180041B10 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall SstpPublish(const struct _SYSTEM_STATE_TRACKER *a1)
{
  int *v1; // rbx
  const struct _TlgProvider_t *v2; // rcx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v1 = (int *)((char *)a1 + 20);
  v3 = RtlPublishWnfStateData(*(_QWORD *)((char *)a1 + 220), 0LL, (char *)a1 + 20, 4LL, 0LL);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v4 = *v1;
      v9 = &v4;
      v7 = 4;
      v10 = 4;
      TlgWrite(v2, &unk_18009B3CF, 0LL, 0LL, 4u, &pData);
    }
  }
}
