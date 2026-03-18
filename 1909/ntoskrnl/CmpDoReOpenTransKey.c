/*
 * XREFs of CmpDoReOpenTransKey @ 0x1408404BC
 * Callers:
 *     CmpDoReDoCreateKey @ 0x14084007C (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x1408401A4 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x1408401F8 (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x1408402D0 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x140840324 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x14084038C (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1408403F4 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x140840450 (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F300 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __int128 *a2, ACCESS_MASK a3, _QWORD *a4)
{
  __int128 v4; // xmm0
  int v9; // esi
  char v10; // r14
  unsigned __int16 v11; // dx
  bool v12; // zf
  HANDLE v13; // rdi
  NTSTATUS v14; // eax
  _QWORD *v15; // rbx
  char v16; // dl
  NTSTATUS v17; // eax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-A8h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-88h]
  _DWORD v26[2]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v27; // [rsp+88h] [rbp-78h]
  __int64 *v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  __int128 v31; // [rsp+A0h] [rbp-60h]
  _QWORD v32[38]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = *a2;
  v26[1] = 0;
  v30 = 0;
  v24 = 0LL;
  v22 = v4;
  v25 = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  v9 = -1073741762;
  v10 = ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) != 0;
  if ( !(_WORD)v4 )
    return (unsigned int)v9;
  while ( 1 )
  {
    memset(v32, 0, 0x128uLL);
    v32[19] = &v32[18];
    v32[18] = &v32[18];
    memset(&v32[27], 0, 0x50uLL);
    v28 = (__int64 *)&v22;
    LODWORD(v32[3]) = 8;
    v26[0] = 48;
    v27 = 0LL;
    v29 = 4928;
    v31 = 0LL;
    v9 = ObOpenObjectByName((__int64)v26, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v32, &Handle);
    CmpCleanupParseContext((__int64)v32, v10);
    if ( v9 >= 0 )
      break;
    v11 = v22;
    if ( (_WORD)v22 )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&v22 + 1) + 2 * ((unsigned __int64)v11 >> 1) - 2) == 92 )
          break;
        v12 = v11 == 2;
        v11 -= 2;
        LOWORD(v22) = v11;
      }
      while ( !v12 );
    }
    LOWORD(v24) = *(_WORD *)a2 - v11;
    v25 = *((_QWORD *)&v22 + 1) + 2 * ((unsigned __int64)v11 >> 1);
    LOWORD(v22) = v11 - 2;
    if ( v11 == 2 )
    {
      v13 = Handle;
      goto LABEL_29;
    }
  }
  v13 = Handle;
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v15 = Object;
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( !v10 )
      CmpLockRegistry();
    v16 = v10 ^ 1;
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v15[1] + 32LL) + 4192LL) )
      goto LABEL_12;
    if ( !v10 )
      CmpUnlockRegistry();
    v15[8] = a1 + 88;
    ObfDereferenceObject(v15);
    v15 = 0LL;
    v16 = 0;
    if ( (_WORD)v24 )
    {
      memset(v32, 0, 0x128uLL);
      v32[19] = &v32[18];
      v32[18] = &v32[18];
      memset(&v32[27], 0, 0x50uLL);
      v28 = &v24;
      LODWORD(v32[3]) = 8;
      v26[0] = 48;
      v27 = v13;
      v29 = 4928;
      v31 = 0LL;
      v9 = ObOpenObjectByName((__int64)v26, (__int64)CmKeyObjectType, 0, 0LL, a3, (__int64)v32, &v23);
      CmpCleanupParseContext((__int64)v32, v10);
      v16 = 0;
      if ( v9 < 0
        || (v17 = ObReferenceObjectByHandle(v13, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL),
            v15 = Object,
            v9 = v17,
            v16 = 0,
            v17 < 0) )
      {
LABEL_25:
        if ( v16 )
          CmpUnlockRegistry();
        goto LABEL_27;
      }
      if ( !v10 )
        CmpLockRegistry();
      v16 = v10 ^ 1;
      if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(*(_QWORD *)(v15[1] + 32LL) + 4192LL) )
      {
LABEL_12:
        v9 = -1073741762;
        goto LABEL_25;
      }
      if ( v16 )
        CmpUnlockRegistry();
      v15[8] = a1 + 88;
      ObfDereferenceObject(v15);
      ZwClose(v13);
      v13 = v23;
      v16 = 0;
    }
    *a4 = v13;
    v9 = 0;
    v13 = 0LL;
    v15 = 0LL;
    goto LABEL_25;
  }
LABEL_27:
  if ( v15 )
    ObfDereferenceObject(v15);
LABEL_29:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v9;
}
