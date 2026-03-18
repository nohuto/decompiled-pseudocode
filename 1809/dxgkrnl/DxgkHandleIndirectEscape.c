/*
 * XREFs of DxgkHandleIndirectEscape @ 0x1C026FACC
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001DD60 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DFE4 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0044298 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C026E938 (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C026ED40 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C026F4F4 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     DpiIndirectDdiIoControl @ 0x1C026FA68 (DpiIndirectDdiIoControl.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v6; // eax
  __int64 v7; // rcx
  _DWORD *v8; // r15
  _WORD *PoolWithQuotaTag; // rbx
  PVOID v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rcx
  char *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int Miniport; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  struct _FDO_CONTEXT *v24; // [rsp+30h] [rbp-88h] BYREF
  void *v25; // [rsp+38h] [rbp-80h] BYREF
  void *v26; // [rsp+40h] [rbp-78h] BYREF
  __int64 v27; // [rsp+48h] [rbp-70h] BYREF
  __int16 v28; // [rsp+50h] [rbp-68h]
  char v29; // [rsp+52h] [rbp-66h]
  _QWORD v30[2]; // [rsp+58h] [rbp-60h] BYREF
  PVOID v31; // [rsp+68h] [rbp-50h] BYREF
  char v32; // [rsp+70h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-40h] BYREF
  void *v34; // [rsp+D0h] [rbp+18h] BYREF
  void *v35; // [rsp+D8h] [rbp+20h] BYREF

  if ( (unsigned int)a1 < 0x38 )
  {
    v3 = WdLogNewEntry5_WdError(a1);
    v4 = -1073741789LL;
LABEL_3:
    *(_QWORD *)(v3 + 24) = v4;
    WdLogEvent5_WdError(v3);
    return (unsigned int)v4;
  }
  v6 = DpiIndirectEscapeAccessCheck();
  v4 = v6;
  if ( v6 < 0 )
  {
    v3 = WdLogNewEntry5_WdError(v7);
    goto LABEL_3;
  }
  v8 = (_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = 0;
  PoolWithQuotaTag = 0LL;
  v35 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  v11 = *(_DWORD *)(a2 + 16);
  if ( v11 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x74727044u);
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v35);
    v35 = PoolWithQuotaTag;
    v25 = 0LL;
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v25);
    if ( !PoolWithQuotaTag )
      goto LABEL_9;
  }
  v14 = *(_DWORD *)(a2 + 32);
  if ( v14 )
  {
    v10 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14, 0x74727044u);
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v34);
    v34 = v10;
    v26 = 0LL;
    AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v26);
    if ( !v10 )
    {
LABEL_9:
      v13 = WdLogNewEntry5_WdLowResource(v12);
      LODWORD(v4) = -1073741801;
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v34);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v35);
      return (unsigned int)v4;
    }
  }
  v15 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v15 )
  {
    v16 = *(char **)(a2 + 24);
    if ( (unsigned __int64)&v16[v15] > MmUserProbeAddress || &v16[v15] < v16 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v15) = *(_DWORD *)(a2 + 16);
      v16 = *(char **)(a2 + 24);
    }
    memmove(PoolWithQuotaTag, v16, (unsigned int)v15);
  }
  v17 = *(_DWORD *)(a2 + 32);
  if ( v17 )
    ProbeForWrite(*(volatile void **)(a2 + 40), v17, 1u);
  v18 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v18 )
  {
    if ( (_DWORD)v18 == 1 )
    {
      v24 = 0LL;
      v31 = 0LL;
      v32 = 0;
      v27 = 0LL;
      v28 = 0;
      v29 = 0;
      v30[0] = 1LL;
      v30[1] = *(_QWORD *)a2;
      Miniport = DpiIndirectGetMiniport(
                   (const struct DXGK_MINIPORT_FILTER *)v30,
                   &v31,
                   (struct AUTO_PNPPOWER_LOCK *)&v27,
                   &v24);
      if ( Miniport >= 0 )
        Miniport = DpiIndirectDdiIoControl((__int64)v24);
      AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)&v27);
      AUTO_REMOVE_LOCK::Release(&v31);
    }
    else
    {
      Miniport = -1073741637;
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = -1073741637LL;
      WdLogEvent5_WdError(v20);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 16) < 0x240u )
    {
      v22 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v22 + 24) = *(unsigned int *)(a2 + 16);
      WdLogEvent5_WdError(v22);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v34);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v35);
      return 3221225485LL;
    }
    PoolWithQuotaTag[259] = 0;
    RtlInitUnicodeString(&DestinationString, PoolWithQuotaTag);
    Miniport = DpiIndirectStartAdapter(&DestinationString, PoolWithQuotaTag, *(_DWORD *)(a2 + 16));
  }
  if ( Miniport >= 0 )
  {
    if ( *(_DWORD *)(a2 + 32) >= *v8 )
    {
      if ( *v8 )
        memmove(*(void **)(a2 + 40), v10, (unsigned int)*v8);
    }
    else
    {
      Miniport = -1073741811;
      v23 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v23);
    }
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v34);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v35);
  return (unsigned int)Miniport;
}
