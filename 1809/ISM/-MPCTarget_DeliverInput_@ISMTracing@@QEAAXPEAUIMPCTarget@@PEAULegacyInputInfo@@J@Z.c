/*
 * XREFs of ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18000BF30
 * Callers:
 *     ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18000BB30 (-DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCTarget_DeliverInput_(
        ISMTracing *this,
        struct IMPCTarget *a2,
        struct LegacyInputInfo *a3,
        int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  char v9; // al
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  struct IMPCTarget *v17; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  struct IMPCTarget **v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  int *v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  const wchar_t *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  int *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+178h] [rbp+78h] BYREF

  v42 = a4;
  v6 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
  {
    v7 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
    {
      v17 = a2;
      v20 = 8LL;
      v19 = &v17;
      if ( a2 )
        v8 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 48LL))(a2);
      else
        v8 = 0;
      v12 = v8;
      v21 = &v12;
      v22 = 4LL;
      if ( a2 )
      {
        v9 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 32LL))(a2);
        v10 = L"Exclusive";
        if ( !v9 )
          v10 = L"SharedWorld";
      }
      else
      {
        v10 = &sourceString;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
      v23 = v10;
      v24 = 2 * v11 + 2;
      v13 = *(_DWORD *)a3;
      v26 = &v13;
      v14 = *((_DWORD *)a3 + 1);
      v28 = &v14;
      v30 = (char *)a3 + 8;
      v32 = (char *)a3 + 528;
      v15 = *((_DWORD *)a3 + 130);
      v34 = &v15;
      v16 = *((_DWORD *)a3 + 131);
      v36 = &v16;
      v38 = (char *)a3 + 1586;
      v40 = &v42;
      v25 = 0;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 1LL;
      v41 = 4LL;
      TlgWrite((TraceLoggingHProvider)v7, &unk_18016643C, 0LL, 0LL, 0xDu, &pData);
    }
  }
}
