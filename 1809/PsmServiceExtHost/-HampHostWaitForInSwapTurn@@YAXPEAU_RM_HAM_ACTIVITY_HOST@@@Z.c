/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A674
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001041C (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  __int64 v14; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  int *v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+90h] [rbp+2Fh]
  int v21; // [rsp+94h] [rbp+33h]
  int *v22; // [rsp+98h] [rbp+37h]
  int v23; // [rsp+A0h] [rbp+3Fh]
  int v24; // [rsp+A4h] [rbp+43h]

  v2 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  while ( 1 )
  {
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    v3 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               + 120)
                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (*((_BYTE *)a1 + 640) & 0x40) != 0 )
      break;
    if ( (*((_QWORD *)a1 + 79) & 0x200000000000LL) != 0 )
      break;
    if ( !*(_DWORD *)(v3 + 624) )
    {
      v4 = (_QWORD *)(v3 + 608);
      if ( (_QWORD *)*v4 == v4
        || (struct _RM_HAM_ACTIVITY_HOST *)*v4 == (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 952) )
      {
        break;
      }
    }
    if ( !*((_QWORD *)a1 + 119) )
    {
      v6 = *(_QWORD **)(v2 + 784);
      v7 = (_QWORD *)((char *)a1 + 952);
      if ( *v6 != v2 + 776 )
        goto LABEL_19;
      *v7 = v2 + 776;
      *((_QWORD *)a1 + 120) = v6;
      *v6 = v7;
      *(_QWORD *)(v2 + 784) = v7;
    }
    v13 = *(_DWORD *)(v2 + 796);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
    if ( hProvider > 4u )
    {
      v8 = *((_QWORD *)a1 - 4);
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v14 = v8;
      v16 = &v14;
      v11 = *((_DWORD *)a1 + 160);
      v19 = &v11;
      v12 = *(_DWORD *)(v2 + 792);
      v22 = &v12;
      v17 = 8;
      v20 = 4;
      v23 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B295, 0LL, 0LL, 5u, &pData);
    }
    RtlWaitOnAddress(v2 + 796, &v13, 4LL);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  v5 = *((_QWORD *)a1 + 119);
  if ( v5 )
  {
    v9 = (_QWORD *)((char *)a1 + 952);
    if ( *(_QWORD **)(v5 + 8) != v9 || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9) )
LABEL_19:
      __fastfail(3u);
    *v10 = v5;
    *(_QWORD *)(v5 + 8) = v10;
    *v9 = 0LL;
    v9[1] = 0LL;
  }
  ++*(_DWORD *)(v2 + 792);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
}
