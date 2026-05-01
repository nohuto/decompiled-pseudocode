/*
 * XREFs of ?HampHostIdStoreKeyInitialize@@YAXPEBGPEAXKW4_HAM_HOSTID_STORE_CONTAINER_TYPE@@0PEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180010458
 * Callers:
 *     HamHostIdInitializeKey @ 0x18000F2E0 (HamHostIdInitializeKey.c)
 * Callees:
 *     memset_0 @ 0x180009BC4 (memset_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800101EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall HampHostIdStoreKeyInitialize(char *a1, void *a2, int a3, int a4, char *a5, unsigned __int16 *a6)
{
  __int64 v8; // rbp
  char *v10; // r8
  __int64 result; // rax

  v8 = a4;
  memset_0(a6, 0, 0x418uLL);
  StringCchCopyW((char *)a6, 232LL, a1);
  RtlCopySid(0x44u, a6 + 232, a2);
  v10 = a5;
  if ( !a5 )
    v10 = (char *)(&off_1800186A0)[v8];
  result = StringCchCopyW((char *)a6 + 536, 256LL, v10);
  *((_DWORD *)a6 + 133) = a3;
  return result;
}
