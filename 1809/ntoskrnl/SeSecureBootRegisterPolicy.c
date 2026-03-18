/*
 * XREFs of SeSecureBootRegisterPolicy @ 0x1409DC17C
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x1409DC0B4 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SepSecureBootSetRegistryKey @ 0x1409DC258 (SepSecureBootSetRegistryKey.c)
 *     SepSecureBootBuildRules @ 0x1409F8328 (SepSecureBootBuildRules.c)
 *     SepSecureBootCheckForUpdates @ 0x1409F839C (SepSecureBootCheckForUpdates.c)
 */

__int64 __fastcall SeSecureBootRegisterPolicy(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  unsigned int v4; // edx
  unsigned int v5; // ecx
  _WORD *v6; // rbx
  signed int v7; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // rbp
  SIZE_T v11; // rdx
  unsigned int v12; // r9d
  unsigned int *v13; // rax
  unsigned int *v14; // rbp
  unsigned int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax

  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)BugCheckParameter3 < 0x10
    || (v4 = *(_DWORD *)(BugCheckParameter2 + 8), v5 = *(_DWORD *)(BugCheckParameter2 + 12), (v4 == 0) != (v5 == 0))
    || v4 >= (unsigned int)v2
    || v5 >= (unsigned int)v2
    || v5 - 1 <= 0x3E
    || v5 + v4 > (unsigned int)v2 )
  {
    v7 = -1069350909;
    goto LABEL_33;
  }
  v6 = 0LL;
  g_SecureBootPolicyBlobHeader = *(_OWORD *)BugCheckParameter2;
  qword_1404401F0 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( *(_DWORD *)(BugCheckParameter2 + 12) )
    v6 = (_WORD *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 8));
  SepSecureBootSetRegistryKey(v6);
  if ( (dword_1404401E4 & 8) != 0 )
    SepSecureBootCheckForUpdates();
  if ( !v6 )
    return 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                  NonPagedPoolNx,
                                  *(unsigned int *)(BugCheckParameter2 + 12),
                                  0x62536553u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_37;
  memmove(PoolWithTag, v6, *(unsigned int *)(BugCheckParameter2 + 12));
  qword_1404DC690 = v10;
  if ( v6[18] || v6[19] )
  {
    qword_1404E1530 = (__int64)v10 + v10[13] + 60;
    v7 = SepSecureBootBuildRules();
    if ( v7 < 0 )
      goto LABEL_34;
    if ( *(_DWORD *)BugCheckParameter2 < 2u )
      goto LABEL_33;
    v11 = *(unsigned int *)(BugCheckParameter2 + 20);
    if ( !(_DWORD)v11 )
      goto LABEL_33;
    if ( (unsigned int)v11 >= (unsigned int)v2 )
      goto LABEL_38;
    v12 = *(_DWORD *)(BugCheckParameter2 + 16);
    if ( v12 >= (unsigned int)v2 || v12 > (int)v2 - (int)v11 )
      goto LABEL_38;
    v13 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x62536553u);
    v14 = v13;
    if ( v13 )
    {
      memmove(
        v13,
        (const void *)(BugCheckParameter2 + *(unsigned int *)(BugCheckParameter2 + 16)),
        *(unsigned int *)(BugCheckParameter2 + 20));
      v15 = *(_DWORD *)(BugCheckParameter2 + 20);
      if ( v15 >= 0x18 )
      {
        v16 = 276LL * *v14;
        *((_QWORD *)v14 + 1) = v14 + 6;
        v17 = v15 - 24;
        if ( v16 <= 0xFFFFFFFF && v17 >= (unsigned int)v16 )
        {
          v18 = v17 - v16;
          v19 = (__int64)v14 + (unsigned int)v16 + 24;
          v20 = -1;
          v21 = 32LL * v14[1];
          if ( v21 <= 0xFFFFFFFF )
            v20 = 32 * v14[1];
          v7 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v21 <= 0xFFFFFFFF && v18 >= v20 )
          {
            *((_QWORD *)v14 + 2) = v19;
            LODWORD(g_SecureBootActivePlatformManifestSize) = *(_DWORD *)(BugCheckParameter2 + 20);
            g_SecureBootActivePlatformManifest = v14;
LABEL_33:
            if ( v7 >= 0 )
              return (unsigned int)v7;
LABEL_34:
            if ( qword_1404DC690 )
            {
              ExFreePoolWithTag(qword_1404DC690, 0);
              qword_1404DC690 = 0LL;
            }
            KeBugCheckEx(0x145u, v7, BugCheckParameter2, v2, 0LL);
          }
        }
      }
LABEL_38:
      v7 = -1069350909;
      goto LABEL_34;
    }
LABEL_37:
    v7 = -1073741670;
    goto LABEL_34;
  }
  return 0;
}
