/*
 * XREFs of LinkNodepRunSrsWorker @ 0x1C006BD20
 * Callers:
 *     LinkNodepRunSrsAsync @ 0x1C006BC6C (LinkNodepRunSrsAsync.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_q @ 0x1C001DD80 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall LinkNodepRunSrsWorker(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  char v6; // r14
  int v7; // ecx
  int v8; // ecx
  __int64 *v9; // rcx
  int v10; // eax
  char *v11; // r8
  char *v12; // r9
  char v13; // r10
  const void *v14; // r12
  unsigned __int16 v15; // si
  int v16; // ebp
  bool v17; // r15
  char v18; // r13
  unsigned __int16 v19; // dx
  char v20; // cl
  unsigned int v21; // ebp
  PVOID PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  char *i; // rax
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
        goto LABEL_44;
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
        goto LABEL_45;
    }
    v11 = *(char **)(a4 + 16);
    *(_DWORD *)(a4 + 32) = 2;
    if ( !v11 )
    {
      v5 = -1073741772;
      goto LABEL_45;
    }
    v12 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xDu,
        (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
        v11);
      v11 = *(char **)(a4 + 16);
      v12 = v11;
    }
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      v20 = *v12;
      if ( !*v12 )
        break;
      if ( v20 < 0 )
      {
        v19 = *(_WORD *)(v12 + 1) + 3;
      }
      else
      {
        v19 = (v20 & 7) + 1;
        v20 &= 0x78u;
      }
      if ( v20 == 120 )
      {
        v16 += v19;
        v17 = v19 > 1u;
        break;
      }
      if ( v20 == 32 || v20 == -119 )
      {
        v14 = v12;
        if ( v20 == -119 )
        {
          v15 = 9;
          v18 = 1;
        }
        else
        {
          v15 = v19;
        }
        v13 = 1;
        v16 += v15;
      }
      v12 += v19;
    }
    if ( !v13 )
    {
      ExFreePoolWithTag(v11, 0);
      v5 = -1073741275;
      goto LABEL_45;
    }
    v21 = v16 + 1;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x41706341u);
    *(_QWORD *)(a4 + 24) = PoolWithTag;
    if ( !PoolWithTag )
    {
      ExFreePoolWithTag(*(PVOID *)(a4 + 16), 0);
      v5 = -1073741670;
      goto LABEL_45;
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
      for ( i = *(char **)(a4 + 24); *i != 121; ++i )
        v6 = *i;
      *(_BYTE *)(v15 + v24 + 1) = -v6;
    }
    v26 = AMLIGetNamedChild(*(__int64 **)a4, 1397904223);
    if ( !v26 )
    {
      v5 = -1073741772;
      ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      goto LABEL_45;
    }
    *(_QWORD *)(a4 + 72) = *(_QWORD *)(a4 + 24);
    *(_WORD *)(a4 + 42) = 3;
    *(_DWORD *)(a4 + 64) = v21;
    v5 = AMLIAsyncEvalObject(v26, 0LL, 1u, a4 + 40, LinkNodepRunSrsWorker, a4);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v26);
    if ( v5 != 259 )
    {
      if ( v5 >= 0 )
      {
        v5 = 0;
LABEL_44:
        ExFreePoolWithTag(*(PVOID *)(a4 + 24), 0);
      }
LABEL_45:
      a1 = v28;
      goto LABEL_46;
    }
    return 259LL;
  }
LABEL_46:
  if ( *(_DWORD *)(a4 + 36) )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a4 + 80))(a1, (unsigned int)v5, 0LL, *(_QWORD *)(a4 + 88));
  ExFreePoolWithTag((PVOID)a4, 0);
  return (unsigned int)v5;
}
