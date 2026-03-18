/*
 * XREFs of ReferenceClass @ 0x1C00F03B0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z @ 0x1C001C07C (-ClassAllocString@@YAPEAXQEAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C001C0B4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C001C0DC (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C001C134 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F05FC (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00F10AC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C00F8A60 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall ReferenceClass(__int64 a1, __int64 a2)
{
  PVOID *v2; // rbx
  size_t v5; // r12
  __int64 v7; // rsi
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rdi
  char *v11; // rdx
  __int64 v12; // rcx
  const void *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF

  v2 = *(PVOID **)(a2 + 24);
  v5 = 0LL;
  if ( *(PVOID **)(a1 + 32) == v2 )
  {
    ++*(_DWORD *)(a1 + 72);
    return 1LL;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    do
    {
      if ( *(PVOID **)(v7 + 32) == v2 )
        break;
      v7 = *(_QWORD *)v7;
    }
    while ( v7 );
    if ( v7 )
      goto LABEL_19;
  }
  v8 = ClassAlloc(
         v2,
         (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 6LL) & 8u) + *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) + 88);
  v7 = v8;
  if ( v8 )
  {
    v9 = *(void **)(v8 + 8);
    *(_OWORD *)(v8 + 30) = *(_OWORD *)(a1 + 30);
    *(_OWORD *)(v8 + 46) = *(_OWORD *)(a1 + 46);
    *(_OWORD *)(v8 + 62) = *(_OWORD *)(a1 + 62);
    *(_OWORD *)(v8 + 78) = *(_OWORD *)(a1 + 78);
    *(_QWORD *)(v8 + 94) = *(_QWORD *)(a1 + 94);
    *(_WORD *)(v8 + 102) = *(_WORD *)(a1 + 102);
    memmove(
      v9,
      *(const void **)(a1 + 8),
      *(int *)(*(_QWORD *)(a1 + 8) + 12LL) + ((*(_BYTE *)(*(_QWORD *)(a1 + 8) + 6LL) & 8) != 0 ? 96LL : 88LL));
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 104) + v10) );
    v11 = (char *)ClassAllocString(v2, (int)v10 + 1);
    if ( !v11 )
      goto LABEL_22;
    if ( v2 )
    {
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 48LL) = &v11[*(_QWORD *)(v7 + 16) - *(_QWORD *)(v7 + 8)];
      *(_QWORD *)(v7 + 104) = v11;
    }
    else
    {
      v15 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)(v7 + 104) = v11;
      *(_QWORD *)(v15 + 48) = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 96);
    if ( (v12 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)(v12 + 2 * v16) );
      v5 = 2 * v16 + 2;
      v17 = Win32AllocPoolWithQuota(v5, 2020897621LL);
      v18 = v17;
      if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        v18 = -1LL;
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 40LL) = v18;
      *(_QWORD *)(v7 + 96) = v17;
      if ( !v17 )
      {
LABEL_21:
        ClassFree((struct tagDESKTOP *)v2, *(char **)(v7 + 104));
LABEL_22:
        ClassFree((struct tagDESKTOP *)v2, (struct tagCLS *)v7);
        return 0LL;
      }
    }
    if ( !InitLookAsideRef<tagCLS>(v7) )
    {
      Win32FreePool(*(_QWORD *)(v7 + 96));
      goto LABEL_21;
    }
    *(_QWORD *)(v7 + 32) = 0LL;
    LockObjectAssignment(v7 + 32, v2);
    *(_QWORD *)v7 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v7 + 64) = 0LL;
    v13 = *(const void **)(a1 + 104);
    *(_QWORD *)(a1 + 64) = v7;
    memmove(*(void **)(v7 + 104), v13, v10 + 1);
    v14 = *(_QWORD *)(v7 + 96);
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      memmove((void *)v14, *(const void **)(a1 + 96), v5);
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 56LL) = 0LL;
    *(_QWORD *)&v19 = v7 + 80;
    *(_QWORD *)(v7 + 112) = 0LL;
    *(_QWORD *)(v7 + 80) = 0LL;
    *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 80);
    HMAssignmentLock(&v19);
    v19 = *(_OWORD *)LockPointer(&v20, v7 + 112, *(__int64 **)(a1 + 112));
    HMAssignmentLock(&v19);
    *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)&v19 = v7 + 88;
    HMAssignmentLock(&v19);
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_DWORD *)(v7 + 72) = 0;
LABEL_19:
    ++*(_DWORD *)(a1 + 72);
    ++*(_DWORD *)(v7 + 72);
    tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(a2 + 112, v7);
    return 1LL;
  }
  return 0LL;
}
