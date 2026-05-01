/*
 * XREFs of ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_LEAF_ENTRY@@@Z @ 0x1800108BC
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180017988 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001096C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z @ 0x1800113C4 (-HamRcLeafInitialize@@YAXPEAU_HAM_RC_TREE_NODE@@PEAU_HAM_RC_TREE_LEAF@@@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall HampHostIdStoreLeafInitialize(
        struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        struct _HAM_HOSTID_STORE_LEAF_ENTRY *a3)
{
  __int64 v6; // rcx
  _OWORD *v7; // rax
  _OWORD *v8; // rdi
  __int128 v9; // xmm1

  memset_0(a3, 0, 0x268uLL);
  HamRcLeafInitialize(a1, a3);
  v6 = 4LL;
  v7 = (_OWORD *)((char *)a3 + 96);
  v8 = (_OWORD *)((char *)a2 + 536);
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v6;
  }
  while ( v6 );
  *((_QWORD *)a3 + 11) = HamObjectIdGenerate(0LL);
}
