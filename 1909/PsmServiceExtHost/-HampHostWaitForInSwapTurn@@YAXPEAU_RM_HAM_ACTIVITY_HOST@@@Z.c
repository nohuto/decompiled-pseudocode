/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C41C
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800182C0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800308B4 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rbx
  int IsNull; // eax
  int v4; // edx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  int v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  int v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  int *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  int *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]

  v2 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  while ( 1 )
  {
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    IsNull = CempListEntryIsNull((char *)a1 + 976);
    if ( v4 )
      break;
    if ( IsNull )
    {
      v5 = *(_QWORD **)(v2 + 776);
      v6 = (_QWORD *)((char *)a1 + 976);
      if ( *v5 != v2 + 768 )
        goto LABEL_14;
      *v6 = v2 + 768;
      *((_QWORD *)a1 + 123) = v5;
      *v5 = v6;
      *(_QWORD *)(v2 + 776) = v6;
    }
    v14 = *(_DWORD *)(v2 + 788);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    HampHostReleaseLockExclusiveEx(a1, v7);
    RmpReleaseGlobalLock();
    if ( dword_1800AB2C0 > 4u )
    {
      v8 = *((_QWORD *)a1 - 4);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v15 = v8;
      v17 = &v15;
      v12 = *((_DWORD *)a1 + 166);
      v20 = &v12;
      v13 = *(_DWORD *)(v2 + 784);
      v23 = &v13;
      v18 = 8;
      v21 = 4;
      v24 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098DD3, 0LL, 0LL, 5u, &pData);
    }
    RtlWaitOnAddress(v2 + 788, &v14, 4LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  if ( !IsNull )
  {
    v9 = (_QWORD *)((char *)a1 + 976);
    v10 = *((_QWORD *)a1 + 122);
    if ( *(struct _RM_HAM_ACTIVITY_HOST **)(v10 + 8) != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 976)
      || (v11 = (_QWORD *)*((_QWORD *)a1 + 123), (_QWORD *)*v11 != v9) )
    {
LABEL_14:
      __fastfail(3u);
    }
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *v9 = 0LL;
    *((_QWORD *)a1 + 123) = 0LL;
  }
  ++*(_DWORD *)(v2 + 784);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
}
