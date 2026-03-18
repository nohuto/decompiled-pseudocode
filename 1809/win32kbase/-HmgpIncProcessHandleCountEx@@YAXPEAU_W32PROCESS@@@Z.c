/*
 * XREFs of ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00AAACC
 * Callers:
 *     GreIncQuotaCount @ 0x1C00813B0 (GreIncQuotaCount.c)
 *     HmgIncProcessHandleCount @ 0x1C009CC04 (HmgIncProcessHandleCount.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall HmgpIncProcessHandleCountEx(struct _W32PROCESS *a1)
{
  unsigned int v2; // r8d
  int v3; // r9d
  int v4; // ebx
  int v5; // r9d
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = *((_DWORD *)a1 + 16);
  v3 = *((_DWORD *)a1 + 15) + 1;
  *((_DWORD *)a1 + 15) = v3;
  v4 = v3;
  if ( v3 <= v2 )
    v4 = v2;
  if ( v3 == 1000 * (v3 / 1000)
    && v2 != v4
    && hProvider > 5u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v11 = 0;
    v14 = 0;
    v6 = v5;
    v9 = &v6;
    v12 = &v7;
    v10 = 8;
    v7 = 0x1000000LL;
    v13 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DFCB, 0LL, 0LL, 4u, &pData);
  }
  *((_DWORD *)a1 + 16) = v4;
}
