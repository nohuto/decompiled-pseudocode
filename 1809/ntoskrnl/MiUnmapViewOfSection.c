/*
 * XREFs of MiUnmapViewOfSection @ 0x1406181B0
 * Callers:
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x140617D50 (MmUnmapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x140617E90 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x1406180E0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406B52AC (EtwpCoverageEnsureUserModeView.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     MiDeleteHotPatchEntry @ 0x140855D98 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x140619974 (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x1406786CC (PerfLogImageUnload.c)
 *     DbgkUnMapViewOfSection @ 0x1406B861C (DbgkUnMapViewOfSection.c)
 */

__int64 __fastcall MiUnmapViewOfSection(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, unsigned int a3, int a4)
{
  int v4; // r12d
  unsigned __int64 v5; // r15
  _KPROCESS *Process; // rcx
  unsigned __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  __int64 *v16; // rdi
  int v17; // esi
  __int64 *v19; // rsi
  ULONG_PTR v20; // rbp
  unsigned int v21; // r8d
  int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 **VadEvent; // rax
  __int64 v27; // [rsp+50h] [rbp-88h]
  int v28; // [rsp+58h] [rbp-80h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-7Ch]
  __int64 *v30; // [rsp+60h] [rbp-78h]
  _BYTE v31[48]; // [rsp+68h] [rbp-70h] BYREF

  v4 = 0;
  v29 = a3;
  v5 = 0LL;
  v30 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = a2;
  v9 = a4 & 0x4000000;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31);
    v4 = 1;
  }
  v10 = MiObtainReferencedVadEx(v8, 1, &v28);
  v11 = v10;
  if ( !v10 )
  {
    v17 = v28;
    if ( v28 == -1073741664 )
      v17 = -1073741799;
    goto LABEL_13;
  }
  v12 = *(_DWORD *)(v10 + 48);
  if ( (v12 & 0x4000) != 0 )
  {
    v17 = -1073741799;
    goto LABEL_41;
  }
  v13 = *(unsigned int *)(v10 + 24);
  v14 = (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
  if ( (v12 & 7) == 2 && (v12 & 0xF8) == 0x38 )
    v5 = (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
  v15 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32))
       - (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
       + 1) << 12;
  if ( (v12 & 0x8000000) != 0 && (*(_DWORD *)(BugCheckParameter1 + 772) & 0x20) == 0 )
  {
    v17 = MiCheckSecuredVad(
            v10,
            (_DWORD)v13 << 12,
            (*(_DWORD *)(v10 + 28) - (int)v13 + 1) << 12,
            85,
            KeGetCurrentThread()->PreviousMode);
    if ( v17 < 0 )
      goto LABEL_41;
    v8 = a2;
  }
  if ( !v9 )
  {
    v16 = v30;
    goto LABEL_10;
  }
  if ( v14 == v8 )
  {
    VadEvent = MiLocateVadEvent(v11, 128);
    if ( VadEvent )
    {
      v16 = VadEvent[1];
      VadEvent[1] = 0LL;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v16 + 5), 0LL);
      *((_DWORD *)v16 + 6) = *(_DWORD *)(v11 + 24);
      *((_BYTE *)v16 + 32) = *(_BYTE *)(v11 + 32);
      *((_DWORD *)v16 + 7) = *(_DWORD *)(v11 + 28);
      *((_BYTE *)v16 + 33) = *(_BYTE *)(v11 + 33);
LABEL_10:
      if ( (PerfGlobalGroupMask & 4) != 0 )
      {
        if ( v5 )
        {
          if ( *(_QWORD *)(BugCheckParameter1 + 736) )
          {
            if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 0x1000) == 0 )
            {
              v19 = **(__int64 ***)(v11 + 72);
              if ( v19 )
              {
                if ( v19[8] )
                {
                  v27 = *v19;
                  v20 = MiReferenceControlAreaFile((__int64)v19);
                  if ( (*(_DWORD *)(v11 + 64) & 0x8000000) != 0 )
                  {
                    v21 = 0;
                    v22 = 0;
                  }
                  else
                  {
                    v23 = *(unsigned __int8 *)(v27 + 15);
                    v24 = v23 >> 1;
                    v21 = v23 >> 4;
                    v22 = v24 & 7;
                  }
                  PerfLogImageUnload(
                    v20 + 88,
                    v20,
                    BugCheckParameter1,
                    v5,
                    v15,
                    *(_DWORD *)(*(_QWORD *)(v27 + 56) + 60LL),
                    v21,
                    v22,
                    1);
                  MiDereferenceControlAreaFile((__int64)v19, v20);
                }
              }
            }
          }
        }
      }
      MiUnmapVad(v11, v16, v29);
      v17 = 0;
      goto LABEL_13;
    }
  }
  v17 = -1073741800;
LABEL_41:
  MiUnlockAndDereferenceVad((char *)v11);
LABEL_13:
  if ( v4 == 1 )
    KiUnstackDetachProcess((__int64)v31, 0LL);
  if ( v5 )
    DbgkUnMapViewOfSection((PVOID)BugCheckParameter1);
  return (unsigned int)v17;
}
