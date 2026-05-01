/*
 * XREFs of ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x18006B658
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180061B48 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HAM_ACTIVITY_RM_CONTEXT::RequestStop(HAM_ACTIVITY_RM_CONTEXT *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  char v7; // al
  char v8; // [rsp+30h] [rbp-59h] BYREF
  int v9; // [rsp+34h] [rbp-55h] BYREF
  __int64 v10; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-49h] BYREF
  int *v12; // [rsp+60h] [rbp-29h]
  int v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+6Ch] [rbp-1Dh]
  __int64 v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  char *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  __int64 *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  __int64 *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+6Fh] BYREF

  v28 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B87A, 0LL, 0LL, 2u, &pData);
  HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(*((_QWORD *)this + 1) + 80LL), 0);
  v10 = *((_QWORD *)this + 2);
  if ( v28 == v10 )
  {
    HampActRequestStop(*((_QWORD *)this + 1), 1u, 1, 6656, 0, 0LL);
    v3 = 0;
  }
  else
  {
    v3 = -1073740007;
  }
  v4 = *((_QWORD *)this + 1);
  v9 = v3;
  HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(v4 + 80));
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
    {
      v6 = *((_QWORD *)this + 1);
      v14 = 0;
      v17 = 0;
      v12 = &v9;
      v13 = 4;
      v15 = v6 + 40;
      v16 = v5;
      v7 = *(_BYTE *)(v6 + 548);
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v8 = v7;
      v18 = &v8;
      v21 = &v28;
      v24 = &v10;
      v19 = 1;
      v22 = v5;
      v25 = v5;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B81D, 0LL, 0LL, 7u, &v11);
    }
  }
}
