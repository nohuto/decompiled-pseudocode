/*
 * XREFs of MmAllocatePoolMemory @ 0x140099080
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x14000D060 (RtlpHpEnvAllocVA.c)
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 *     MiAllocatePoolPages @ 0x140162C10 (MiAllocatePoolPages.c)
 *     MiAllocatePagedPoolPages @ 0x140162D70 (MiAllocatePagedPoolPages.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiObtainSystemVa @ 0x1400F69E4 (MiObtainSystemVa.c)
 *     MiObtainDynamicVa @ 0x1400F6A0C (MiObtainDynamicVa.c)
 *     MiObtainSessionVa @ 0x1400F7324 (MiObtainSessionVa.c)
 */

__int64 __fastcall MmAllocatePoolMemory(ULONG_PTR *a1, ULONG_PTR *a2, int a3, int a4, int a5)
{
  unsigned int v6; // r10d
  unsigned int v7; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // r10d
  int v12; // r14d
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  int v15; // ebp

  v6 = a3 & 0x7F;
  v7 = v6;
  if ( (a3 & 0x7F) == 0 || v6 > (unsigned __int16)KeNumberNodes )
    return 3221225713LL;
  v10 = a3 & 0xFFFFFF80;
  v11 = v6 - 1;
  v12 = a3 & 0x2000;
  if ( (a3 & 0x2000) != 0 )
  {
    *a1 = 0LL;
    v13 = *a2 >> 21;
    if ( v13 >= 0x100000000LL )
      return 3221225495LL;
    if ( (a5 & 1) != 0 )
      v14 = (a5 & 0x20) != 0 ? MiObtainSessionVa((unsigned int)v13) : MiObtainSystemVa((unsigned int)v13, 6LL);
    else
      v14 = MiObtainDynamicVa((char *)&qword_14043B118[25 * v11 + 11].HeaderX64 + 8, (unsigned int)v13, 5LL);
    if ( !v14 )
      return 3221225495LL;
    *a1 = v14;
  }
  v15 = 0;
  if ( (v10 & 0x1000) != 0 )
  {
    v15 = MiCommitPoolMemory((_DWORD)a1, (_DWORD)a2, v10 | v7, a4, a5);
    if ( v15 < 0 )
    {
      if ( v12 )
        MmFreePoolMemory(a1, a2);
      *a1 = 0LL;
    }
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  return (unsigned int)v15;
}
