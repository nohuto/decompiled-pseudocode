/*
 * XREFs of MiSetImageHotPatchAllowed @ 0x140859224
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075560 (MiLockVadShared.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiSetVadFlags @ 0x1400879D0 (MiSetVadFlags.c)
 *     MiImageVadHotPatchEligible @ 0x1405EF758 (MiImageVadHotPatchEligible.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 */

__int64 __fastcall MiSetImageHotPatchAllowed(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ebp
  int v10; // esi
  char v11; // bl
  int v12; // edi
  __int64 v13; // rcx
  unsigned int v15; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = MiObtainReferencedVadEx(a1, 0, (int *)&v15);
  v4 = v3;
  if ( !v3 )
    return v15;
  if ( (*(_DWORD *)(v3 + 48) & 7) != 2 || (unsigned int)MiVadDeleted(v3) )
    goto LABEL_10;
  if ( !MiImageVadHotPatchEligible(v5) )
  {
    v6 = -1073741637;
LABEL_11:
    MiUnlockAndDereferenceVad((char *)v4);
    return v6;
  }
  if ( a1 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12 )
  {
LABEL_10:
    v6 = -1073741800;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v4 + 48) & 0x4000000) != 0 )
  {
    v6 = 255;
    goto LABEL_11;
  }
  MiSetVadFlags(v4, 8, 1);
  v7 = ***(_QWORD ***)(v4 + 72);
  v8 = *(_QWORD *)(v7 + 56);
  v9 = *(_DWORD *)(v8 + 60);
  v10 = *(_DWORD *)(v8 + 72);
  LODWORD(v8) = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL);
  v11 = *(_BYTE *)(v7 + 15) >> 4;
  v12 = v8;
  MiUnlockVad((__int64)CurrentThread, v4);
  v6 = MiHotPatchImage(v13, v12, (_RTL_BALANCED_NODE *)v4, v9, v10, v11, 1);
  MiLockVadShared((__int64)CurrentThread, v4);
  MiUnlockAndDereferenceVadShared((char *)v4);
  return v6;
}
