/*
 * XREFs of CmpDoReOpenTransKey @ 0x1408087FC
 * Callers:
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x1405828F0 (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     CmpDoReDoCreateKey @ 0x140808414 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x1408084E0 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x140808534 (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x140808610 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140808664 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x1408086CC (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140808734 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140808790 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400B9A20 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpSplitParentKeyName @ 0x1405821A0 (CmpSplitParentKeyName.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405BA290 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __m128i *a2, int a3, _QWORD *a4)
{
  __m128i v4; // xmm0
  int v9; // esi
  char v10; // r14
  HANDLE v11; // rdi
  NTSTATUS v12; // eax
  _QWORD *v13; // rbx
  char v14; // dl
  NTSTATUS v15; // eax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  void *v20; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v21; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v24; // [rsp+88h] [rbp-78h]
  __m128i *v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  _QWORD v28[38]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *a2;
  v22 = 0uLL;
  v20 = 0LL;
  v21 = v4;
  Handle = 0LL;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !v4.m128i_i16[0] )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v28, 0, 0x128uLL);
    v28[19] = &v28[18];
    v28[18] = &v28[18];
    memset(&v28[27], 0, 0x50uLL);
    v25 = &v21;
    LODWORD(v28[3]) = 8;
    v23 = 48;
    v24 = 0LL;
    v26 = 4928;
    v27 = 0LL;
    v9 = ObOpenObjectByName((__int64)&v23, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v28, (__int64)&Handle);
    CmpCleanupParseContext((__int64)v28, v10);
    if ( v9 >= 0 )
      break;
    CmpSplitParentKeyName(a2, &v21, &v22);
    if ( !v21.m128i_i16[0] )
    {
      v11 = Handle;
      goto LABEL_26;
    }
  }
  v11 = Handle;
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v13 = Object;
  v9 = v12;
  if ( v12 >= 0 )
  {
    if ( !v10 )
      CmpLockRegistry();
    v14 = v10 ^ 1;
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v13[1] + 24LL) + 4192LL) )
      goto LABEL_9;
    if ( !v10 )
      CmpUnlockRegistry();
    v13[8] = a1 + 88;
    ObfDereferenceObject(v13);
    v13 = 0LL;
    v14 = 0;
    if ( v22.m128i_i16[0] )
    {
      memset(v28, 0, 0x128uLL);
      v28[19] = &v28[18];
      v28[18] = &v28[18];
      memset(&v28[27], 0, 0x50uLL);
      v25 = &v22;
      LODWORD(v28[3]) = 8;
      v23 = 48;
      v24 = v11;
      v26 = 4928;
      v27 = 0LL;
      v9 = ObOpenObjectByName((__int64)&v23, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v28, (__int64)&v20);
      CmpCleanupParseContext((__int64)v28, v10);
      v14 = 0;
      if ( v9 < 0
        || (v15 = ObReferenceObjectByHandle(v11, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
            v13 = Object,
            v9 = v15,
            v14 = 0,
            v15 < 0) )
      {
LABEL_22:
        if ( v14 )
          CmpUnlockRegistry();
        goto LABEL_24;
      }
      if ( !v10 )
        CmpLockRegistry();
      v14 = v10 ^ 1;
      if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v13[1] + 24LL) + 4192LL) )
      {
LABEL_9:
        v9 = -1073741762;
        goto LABEL_22;
      }
      if ( v14 )
        CmpUnlockRegistry();
      v13[8] = a1 + 88;
      ObfDereferenceObject(v13);
      ZwClose(v11);
      v11 = v20;
      v14 = 0;
    }
    *a4 = v11;
    v9 = 0;
    v11 = 0LL;
    v13 = 0LL;
    goto LABEL_22;
  }
LABEL_24:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_26:
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)v9;
}
