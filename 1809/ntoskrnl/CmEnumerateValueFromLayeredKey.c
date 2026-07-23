/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x1407EE550
 * Callers:
 *     CmEnumerateValueKey @ 0x1405D5080 (CmEnumerateValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpQueryKeyValueData @ 0x1405D2B30 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpValueEnumStackAdvance @ 0x140801DBC (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140801F18 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140801F78 (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140802090 (CmpValueEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // r12
  char v8; // r15
  __int64 v9; // rdx
  __int64 KcbAtLayerHeight; // r14
  __int64 v11; // rsi
  int started; // edi
  __int16 v13; // dx
  __int16 v14; // dx
  __int16 v15; // r8
  char v16; // r9
  int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v21; // rbx
  __int64 v23; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v24; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+50h] [rbp-99h] BYREF
  int v26; // [rsp+58h] [rbp-91h]
  __int64 v27[4]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v28; // [rsp+80h] [rbp-69h]
  void *Src; // [rsp+88h] [rbp-61h]
  int v30; // [rsp+90h] [rbp-59h] BYREF
  __int16 v31; // [rsp+96h] [rbp-53h]

  v7 = a2;
  v26 = a3;
  Src = a4;
  v28 = a6;
  memset(v27, 0, sizeof(v27));
  WORD1(v27[0]) = -1;
  v8 = 0;
  CmpValueEnumStackInitialize(&v30);
  v9 = *(_QWORD *)(a1 + 8);
  KcbAtLayerHeight = 0LL;
  v11 = 0LL;
  v25 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v24 = 0xFFFFFFFFLL;
  started = CmpStartKcbStackForTopLayerKcb((__int64)v27, v9);
  if ( started < 0 )
    goto LABEL_24;
  CmpLockKcbStackShared((__int64)v27);
  v8 = 1;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_24;
  }
  v13 = WORD1(v27[0]);
  if ( SWORD1(v27[0]) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v27, v13);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v16 = 1;
    v13 = v15 + v14;
  }
  while ( v13 > 0 );
  if ( !v16 )
  {
LABEL_15:
    KcbAtLayerHeight = v27[1];
    v19 = v27[1];
    KeyNodeForKcb = CmpGetKeyNodeForKcb(v27[1], (__int64)&v23, 0);
    v11 = KeyNodeForKcb;
    if ( (*(_BYTE *)(KeyNodeForKcb + 2) & 0x40) != 0 )
    {
      started = -1073741816;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_24;
    }
    v18 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        *(unsigned int *)(KeyNodeForKcb + 40),
                        &v24)
                    + 4 * v7);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v24);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v23);
    goto LABEL_20;
  }
  started = CmpValueEnumStackStartFromKcbStack(&v30, v27, a1);
  if ( started < 0 )
    goto LABEL_24;
  started = CmpValueEnumStackAdvance(&v30);
  if ( started < 0 )
    goto LABEL_24;
  v17 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v18 = v30;
    v19 = CmpGetKcbAtLayerHeight((__int64)v27, v31);
LABEL_20:
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 8LL))(
            *(_QWORD *)(v19 + 24),
            v18,
            &v25);
    started = CmpQueryKeyValueData(v19, v18, v21, v26, Src, a5, (int *)v28);
    if ( started >= 0 )
      started = 0;
    v11 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v19 + 24) + 16LL))(*(_QWORD *)(v19 + 24), &v25);
    goto LABEL_24;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance(&v30);
    if ( started < 0 )
      break;
    if ( ++v17 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_24:
  CmpValueEnumStackCleanup(&v30);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v23);
  if ( v8 )
    CmpUnlockKcbStack((__int64)v27);
  if ( v27[3] )
    CmSiFreeMemory((PPRIVILEGE_SET)v27[3]);
  return (unsigned int)started;
}
