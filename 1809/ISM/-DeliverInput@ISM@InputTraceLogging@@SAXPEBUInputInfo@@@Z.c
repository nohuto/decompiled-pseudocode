/*
 * XREFs of ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18008F544
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18008FE40 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ISM::DeliverInput(const struct InputInfo *a1)
{
  __int64 v1; // rdi
  const struct _TlgProvider_t *v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  const char *v6; // rax
  int v7; // r8d
  const struct _TlgProvider_t *v8; // r10
  __int64 v9; // rcx
  const unsigned __int16 *v10; // rdx
  int v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  const unsigned __int16 *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  int *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]
  __int64 *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]

  v1 = 0LL;
  if ( (*(_BYTE *)a1 & 0x3B) != 0 )
    v1 = *((_QWORD *)a1 + 48);
  v3 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 4u
    && (*((_DWORD *)v3 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x200LL) == *((_QWORD *)v3 + 3) )
  {
    v4 = *((_QWORD *)a1 + 2);
    v5 = *(_DWORD *)a1;
    v17 = 0;
    v12 = v4;
    v15 = &v12;
    v16 = 8;
    v6 = InputTraceLogging::InputTypeToString(v5);
    LODWORD(v9) = 0;
    v10 = &word_18014A10A;
    if ( v6 )
    {
      v10 = (const unsigned __int16 *)v6;
      v9 = -1LL;
      do
        ++v9;
      while ( v6[v9] );
    }
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v19 = v9 + 1;
    v11 = *((_DWORD *)a1 + 1);
    v21 = &v11;
    v24 = &v13;
    v18 = v10;
    v22 = 4;
    v13 = v1;
    v25 = v7;
    TlgWrite(v8, &unk_180168DD9, 0LL, 0LL, 6u, &pData);
  }
}
