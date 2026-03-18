/*
 * XREFs of MiUnmapViewOfSection @ 0x14064C640
 * Callers:
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x14064A8C0 (MmUnmapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x14064C570 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x14066FFB0 (MiUnmapImageInSystemSpace.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406D654C (EtwpCoverageEnsureUserModeView.c)
 *     MiDeleteHotPatchEntry @ 0x14088DF90 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 *     MiUnmapImageForEnclaveUse @ 0x140894E94 (MiUnmapImageForEnclaveUse.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009C6C (MiDereferenceControlAreaFile.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1400ACF04 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCheckSecuredVad @ 0x14064C0CC (MiCheckSecuredVad.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 *     PerfLogImageUnload @ 0x140678768 (PerfLogImageUnload.c)
 *     DbgkUnMapViewOfSection @ 0x1406D97B4 (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // rbp
  int v8; // r12d
  _KPROCESS *Process; // rcx
  int v10; // r15d
  ULONG_PTR v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rdi
  int v18; // esi
  __int64 *v20; // rsi
  ULONG_PTR v21; // r15
  unsigned int v22; // r8d
  int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  __int64 VadEvent; // rax
  __int64 v28; // [rsp+50h] [rbp-88h]
  int v29; // [rsp+58h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-7Ch]
  __int64 v31; // [rsp+60h] [rbp-78h]
  _BYTE v32[48]; // [rsp+68h] [rbp-70h] BYREF

  v4 = a2;
  v30 = a3;
  memset(v32, 0, sizeof(v32));
  v7 = 0LL;
  v8 = 0;
  v31 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = a4 & 0x4000000;
  if ( v10 && v4 != (v4 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v32);
    v8 = 1;
  }
  v11 = MiObtainReferencedVadEx(v4, 1, &v29);
  v12 = v11;
  if ( !v11 )
  {
    v18 = v29;
    if ( v29 == -1073741664 )
      v18 = -1073741799;
    goto LABEL_13;
  }
  v13 = *(_DWORD *)(v11 + 48);
  if ( (v13 & 0x100000) != 0 )
  {
    v18 = -1073741799;
    goto LABEL_41;
  }
  v14 = *(unsigned int *)(v11 + 24);
  v15 = (v14 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) << 12;
  if ( (v13 & 0x70) == 0x20 && (*(_DWORD *)(v11 + 48) & 0xF80) == 0x380 )
    v7 = (v14 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32)) << 12;
  v16 = ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32))
       - (v14 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
       + 1) << 12;
  if ( (v13 & 8) != 0 && (*(_DWORD *)(BugCheckParameter1 + 780) & 0x20) == 0 )
  {
    v18 = MiCheckSecuredVad(v11, v15, v16, 0x55u, KeGetCurrentThread()->PreviousMode);
    if ( v18 < 0 )
      goto LABEL_41;
    v4 = a2;
  }
  if ( !v10 )
  {
    v17 = v31;
    goto LABEL_10;
  }
  if ( v15 == v4 )
  {
    VadEvent = MiLocateVadEvent(v12, 128LL);
    if ( VadEvent )
    {
      v17 = *(_QWORD *)(VadEvent + 8);
      *(_QWORD *)(VadEvent + 8) = 0LL;
      ExAcquirePushLockExclusiveEx(v17 + 40, 0LL);
      *(_DWORD *)(v17 + 24) = *(_DWORD *)(v12 + 24);
      *(_BYTE *)(v17 + 32) = *(_BYTE *)(v12 + 32);
      *(_DWORD *)(v17 + 28) = *(_DWORD *)(v12 + 28);
      *(_BYTE *)(v17 + 33) = *(_BYTE *)(v12 + 33);
LABEL_10:
      if ( (PerfGlobalGroupMask & 4) != 0 )
      {
        if ( v7 )
        {
          if ( *(_QWORD *)(BugCheckParameter1 + 744) )
          {
            if ( (*(_DWORD *)(BugCheckParameter1 + 1788) & 0x1000) == 0 )
            {
              v20 = **(__int64 ***)(v12 + 72);
              if ( v20 )
              {
                if ( v20[8] )
                {
                  v28 = *v20;
                  v21 = MiReferenceControlAreaFile((__int64)v20);
                  if ( (*(_DWORD *)(v12 + 64) & 0x8000000) != 0 )
                  {
                    v22 = 0;
                    v23 = 0;
                  }
                  else
                  {
                    v24 = *(unsigned __int8 *)(v28 + 15);
                    v25 = v24 >> 1;
                    v22 = v24 >> 4;
                    v23 = v25 & 7;
                  }
                  PerfLogImageUnload(
                    v21 + 88,
                    v21,
                    BugCheckParameter1,
                    v7,
                    v16,
                    *(_DWORD *)(*(_QWORD *)(v28 + 56) + 60LL),
                    v22,
                    v23,
                    1);
                  MiDereferenceControlAreaFile((__int64)v20, v21);
                }
              }
            }
          }
        }
      }
      MiUnmapVad(v12, v17, v30);
      v18 = 0;
      goto LABEL_13;
    }
  }
  v18 = -1073741800;
LABEL_41:
  MiUnlockAndDereferenceVad((char *)v12);
LABEL_13:
  if ( v8 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
  if ( v7 )
    DbgkUnMapViewOfSection(BugCheckParameter1);
  return (unsigned int)v18;
}
