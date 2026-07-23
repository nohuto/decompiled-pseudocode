/*
 * XREFs of PiDmEnumObjectsWithCallback @ 0x140597F5C
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmGetObjectList @ 0x140701E30 (PiDmGetObjectList.c)
 *     PiDmListInit @ 0x14072D8E0 (PiDmListInit.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 * Callees:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140006880 (RtlEnumerateGenericTableLikeADirectory.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140599CD0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x14059B4DC (PiDmObjectIsEnumerable.c)
 */

__int64 __fastcall PiDmEnumObjectsWithCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(void *, __int64, _BYTE *),
        __int64 a3)
{
  int v3; // edi
  __int64 ObjectManagerForObjectType; // rax
  __int64 v7; // rsi
  int v8; // r9d
  const wchar_t *v9; // rax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v11; // rax
  void *v12; // rbx
  struct _KTHREAD *v13; // rcx
  PVOID v14; // rax
  _BYTE v16[4]; // [rsp+40h] [rbp-79h] BYREF
  ULONG DeleteCount; // [rsp+44h] [rbp-75h] BYREF
  PVOID P; // [rsp+48h] [rbp-71h] BYREF
  PVOID RestartKey[2]; // [rsp+50h] [rbp-69h] BYREF
  char v20; // [rsp+60h] [rbp-59h] BYREF
  const wchar_t *v21; // [rsp+70h] [rbp-49h]
  int v22; // [rsp+78h] [rbp-41h]
  int v23; // [rsp+7Ch] [rbp-3Dh]

  v3 = 0;
  RestartKey[0] = 0LL;
  DeleteCount = 0;
  P = &v20;
  v16[0] = 0;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a1, a2, a3, (unsigned int)a1);
  v22 = 0;
  v7 = ObjectManagerForObjectType;
  v23 = v8;
  v9 = L"\\\\?\\";
  if ( v8 != 3 )
    v9 = &word_140767740;
  v21 = v9;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)v7, 1u);
  v11 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v7 + 104), 0LL, 0LL, 0, RestartKey, &DeleteCount, &P);
  if ( v11 )
  {
    v12 = *(void **)v11;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v11 + 8LL));
  }
  else
  {
    v12 = 0LL;
  }
  ExReleaseResourceLite((PERESOURCE)v7);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  while ( v12 )
  {
    if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)v12) )
      v3 = a2(v12, a3, v16);
    if ( v3 < 0 || v16[0] )
    {
      PiDmObjectRelease(v12);
      return (unsigned int)v3;
    }
    P = v12;
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)v7, 1u);
    v14 = RtlEnumerateGenericTableLikeADirectory((PRTL_AVL_TABLE)(v7 + 104), 0LL, 0LL, 1u, RestartKey, &DeleteCount, &P);
    if ( v14 )
    {
      v12 = *(void **)v14;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL));
    }
    else
    {
      v12 = 0LL;
    }
    ExReleaseResourceLite((PERESOURCE)v7);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiDmObjectRelease(P);
  }
  return (unsigned int)v3;
}
