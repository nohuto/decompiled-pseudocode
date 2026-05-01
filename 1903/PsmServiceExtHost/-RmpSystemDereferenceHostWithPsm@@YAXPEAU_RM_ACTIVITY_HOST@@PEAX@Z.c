/*
 * XREFs of ?RmpSystemDereferenceHostWithPsm@@YAXPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18000B994
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B78C (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001699C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemDereferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void *a2, __int64 a3)
{
  struct _RM_ACTIVITY_HOST *v4; // r9
  __int64 v5; // rdi
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  struct _RM_ACTIVITY_HOST *v9; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  struct _RM_ACTIVITY_HOST **v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v4 = a1;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v7 = *((_QWORD *)v4 + 4);
    v13 = 0;
    v16 = 0;
    v8 = v7;
    v11 = &v8;
    v14 = &v9;
    v12 = 8;
    v9 = v4;
    v15 = 8;
    TlgWrite(v6, &unk_1800967EC, 0LL, 0LL, 4u, &pData);
  }
  (*(void (__fastcall **)(void *, void *, __int64, struct _RM_ACTIVITY_HOST *))(v5 + 128))(a2, a2, a3, v4);
}
