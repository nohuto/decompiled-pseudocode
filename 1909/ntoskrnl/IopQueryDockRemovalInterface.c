/*
 * XREFs of IopQueryDockRemovalInterface @ 0x14087551C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDockRemovalInterface(struct _DEVICE_OBJECT *a1, _QWORD *a2)
{
  _WORD *PoolWithTag; // rax
  _WORD *v5; // rbx
  int v7; // edi
  _QWORD v8[9]; // [rsp+30h] [rbp-78h] BYREF
  GUID v9; // [rsp+78h] [rbp-30h] BYREF

  v9 = GUID_DOCK_INTERFACE;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x20207050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x30uLL);
  *v5 = 48;
  memset(v8, 0, sizeof(v8));
  LOWORD(v8[0]) = 2075;
  v8[1] = &v9;
  LODWORD(v8[2]) = 48;
  v8[3] = v5;
  v8[4] = 0LL;
  v7 = IopSynchronousCall(a1, (__int64)v8, -1073741637, 0LL, 0LL);
  if ( v7 < 0 )
    ExFreePoolWithTag(v5, 0);
  else
    *a2 = v5;
  return (unsigned int)v7;
}
