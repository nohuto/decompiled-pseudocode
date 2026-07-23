/*
 * XREFs of MiSetImageHotPatchAllowed @ 0x140891400
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1400539E0 (MiLockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053A30 (MiUnlockAndDereferenceVadShared.c)
 *     MiSetVadFlags @ 0x140072950 (MiSetVadFlags.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiImageVadHotPatchEligible @ 0x140604C34 (MiImageVadHotPatchEligible.c)
 *     MiHotPatchImage @ 0x14088DFC4 (MiHotPatchImage.c)
 */

__int64 __fastcall MiSetImageHotPatchAllowed(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  int v11; // esi
  signed __int64 v12; // rax
  char v13; // bl
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v17);
  v4 = v3;
  if ( !v3 )
    return v17;
  if ( (*(_DWORD *)(v3 + 48) & 0x70) != 0x20 || (unsigned int)MiVadDeleted(v3) )
    goto LABEL_12;
  if ( !MiImageVadHotPatchEligible(v5) )
  {
    v6 = -1073741637;
LABEL_13:
    MiUnlockAndDereferenceVad((char *)v4);
    return v6;
  }
  if ( a1 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12 )
  {
LABEL_12:
    v6 = -1073741800;
    goto LABEL_13;
  }
  v7 = *(_DWORD *)(v4 + 48);
  if ( (v7 & 0x100000) == 0 && (v7 & 0x70) == 0x20 && (v7 & 0x400000) != 0 )
  {
    v6 = 255;
    goto LABEL_13;
  }
  MiSetVadFlags(v4, 4, 1);
  v8 = ***(_QWORD ***)(v4 + 72);
  v9 = *(_QWORD *)(v8 + 56);
  v10 = *(_DWORD *)(v9 + 60);
  v11 = *(_DWORD *)(v9 + 72);
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL);
  v13 = *(_BYTE *)(v8 + 15) >> 4;
  v14 = v12;
  MiUnlockVad((__int64)CurrentThread, v4);
  v6 = MiHotPatchImage(v15, v14, (_RTL_BALANCED_NODE *)v4, v10, v11, v13, 1);
  MiLockVadShared((__int64)CurrentThread, v4);
  MiUnlockAndDereferenceVadShared((char *)v4);
  return v6;
}
