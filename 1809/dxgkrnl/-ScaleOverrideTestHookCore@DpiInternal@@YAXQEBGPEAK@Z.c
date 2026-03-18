/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00029B8
 * Callers:
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0002994 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0002B74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h]
  wchar_t *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+80h] [rbp-80h]
  const wchar_t *v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  _BYTE v36[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t Dest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v38[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(Dest, 0x16uLL, L"%d", v10);
  v12 = v11;
  if ( v11 < 0
    || (v13 = RtlStringCbPrintfW(
                v38,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                Dest),
        v12 = v13,
        v13 < 0) )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = v12;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogEvent5_WdAssertion(v16);
  }
  else
  {
    v18 = 0;
    v22 = v38;
    v19 = 0;
    v29 = L"DesktopScaleFactor";
    v20 = 0LL;
    v30 = &v18;
    v32 = &v19;
    v21 = 5;
    v23 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v28 = 288;
    v31 = 0x4000000;
    v33 = 4;
    v34 = 0LL;
    v35 = 0;
    memset(v36, 0, sizeof(v36));
    v14 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v20, 0LL, 0LL);
    v15 = v14;
    if ( v14 >= 0 )
    {
      if ( v18 != v19 )
        *(_DWORD *)a2 = v18;
    }
    else if ( v14 != -1073741772 )
    {
      v17 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v17 + 24) = v15;
      WdLogEvent5_WdError(v17);
    }
  }
}
