/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1C0069CC0
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x1C0069C0C (LinkNodepRunSrsAsync.c)
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  char v6; // bp
  int v7; // ecx
  int v8; // ecx
  __int64 *v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  char v12; // r9
  __int64 v13; // r8
  const void *v14; // r12
  unsigned __int16 v15; // si
  int v16; // r14d
  bool v17; // r15
  char v18; // r13
  char i; // cl
  unsigned __int16 v20; // dx
  unsigned int v21; // r14d
  PVOID PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  char *j; // rax
  __int64 *v26; // rsi
  __int64 v28; // [rsp+80h] [rbp+8h]

  v28 = a1;
  v5 = a2;
  v6 = 0;
  if ( a2 >= 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a4 + 36), 1u);
    v7 = *(_DWORD *)(a4 + 32);
    v5 = 0;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          KeBugCheckEx(0xA3u, 1uLL, 0x50951uLL, 0LL, 0LL);
        goto LABEL_42;
      }
    }
    else
    {
      v9 = *(__int64 **)a4;
      *(_DWORD *)(a4 + 32) = 1;
      v10 = ACPIGet(v9, 1397903455, 738263048, 0LL, 0, (__int64)LinkNodepRunSrsWorker, a4, a4 + 16, 0LL);
      v5 = v10;
      if ( v10 == 259 )
        return 259LL;
      if ( v10 < 0 )
        goto LABEL_43;
    }
    v11 = *(_QWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 32) = 2;
    if ( !v11 )
    {
      v5 = -1073741772;
      goto LABEL_43;
    }
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0xDu,
      (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
      v11);
    v12 = 0;
    v13 = *(_QWORD *)(a4 + 16);
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    for ( i = *(_BYTE *)v13; i; i = *(_BYTE *)v13 )
    {
      if ( i < 0 )
      {
        v20 = *(_WORD *)(v13 + 1) + 3;
      }
      else
      {
        v20 = (i & 7) + 1;
        i &= 0x78u;
      }
      if ( i == 120 )
      {
        v16 += v20;
        v17 = v20 > 1u;
        break;
      }
      if ( i == 32 || i == -119 )
      {
        v14 = (const void *)v13;
        if ( i == -119 )
        {
          v15 = 9;
          v18 = 1;
        }
        else
        {
          v15 = v20;
        }
        v12 = 1;
        v16 += v15;
      }
      v13 += v20;
    }
    if ( !v12 )
    {
      ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
      v5 = -1073741275;
      goto LABEL_43;
    }
    v21 = v16 + 1;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x41706341u);
    *(_QWORD *)(a4 + 24) = PoolWithTag;
    if ( !PoolWithTag )
    {
      ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
      v5 = -1073741670;
      goto LABEL_43;
    }
    memmove(PoolWithTag, v14, v15);
    ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
    v23 = *(_QWORD *)(a4 + 24);
    if ( v18 )
    {
      *(_BYTE *)(v23 + 4) = 1;
      *(_WORD *)(v23 + 1) = v15 - 3;
      *(_DWORD *)(v23 + 5) = *(_DWORD *)(a4 + 8);
    }
    else
    {
      *(_WORD *)(v23 + 1) = 1 << *(_DWORD *)(a4 + 8);
    }
    v24 = *(_QWORD *)(a4 + 24);
    *(_BYTE *)(v15 + v24) = 120;
    if ( v17 )
    {
      *(_BYTE *)(v15 + v24) = 121;
      for ( j = *(char **)(a4 + 24); *j != 121; ++j )
        v6 = *j;
      *(_BYTE *)(v15 + v24 + 1) = -v6;
    }
    v26 = AMLIGetNamedChild(*(__int64 **)a4, 1397904223);
    if ( !v26 )
    {
      v5 = -1073741772;
      ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      goto LABEL_43;
    }
    *(_QWORD *)(a4 + 72) = *(_QWORD *)(a4 + 24);
    *(_WORD *)(a4 + 42) = 3;
    *(_DWORD *)(a4 + 64) = v21;
    v5 = AMLIAsyncEvalObject(v26, 0LL, 1u, a4 + 40, LinkNodepRunSrsWorker, a4);
    AMLIDereferenceHandleEx((__int64)v26);
    if ( v5 != 259 )
    {
      if ( v5 >= 0 )
      {
        v5 = 0;
LABEL_42:
        ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      }
LABEL_43:
      a1 = v28;
      goto LABEL_44;
    }
    return 259LL;
  }
LABEL_44:
  if ( *(_DWORD *)(a4 + 36) )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a4 + 80))(a1, (unsigned int)v5, 0LL, *(_QWORD *)(a4 + 88));
  ExFreePoolWithTag((PVOID)a4, 0);
  return (unsigned int)v5;
}
