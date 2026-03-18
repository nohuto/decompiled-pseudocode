/*
 * XREFs of HMFreeObject @ 0x1C002DB60
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00420A8 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     DestroyKL @ 0x1C0063B44 (DestroyKL.c)
 *     DestroyKF @ 0x1C0063BD0 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0063C60 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C0065980 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0065EB8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     UnlockObjectAssignment @ 0x1C002E730 (UnlockObjectAssignment.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002E75C (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C002E78C (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C00EB8B4 (HMCleanupGrantedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD *v5; // r14
  __int64 v6; // r15
  char *v7; // rdi
  __int64 v8; // rsi
  unsigned __int16 v9; // bp
  __int64 v10; // rax
  char v11; // al
  __int16 v12; // bx
  __int16 v13; // ax
  __int64 v14; // rdi
  __int64 v16; // rcx
  bool v17; // zf
  _QWORD *v18; // r8
  void *v19; // r8
  void *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(unsigned int *)a1;
  v5 = gpKernelHandleTable;
  v6 = 0LL;
  v7 = (char *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)v3;
  v8 = 3LL * (unsigned __int16)v3;
  v9 = *((_WORD *)&unk_1C018DB4C + 12 * (unsigned __int8)v7[24]);
  if ( *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v3 + 2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(3LL * (unsigned __int8)v7[24], v3, a3);
  if ( (v9 & 2) != 0 )
  {
    v10 = v5[v8 + 1];
  }
  else if ( (v9 & 1) != 0 )
  {
    v10 = *(_QWORD *)(v5[v8 + 1] + 424LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    --*(_DWORD *)(v10 + 68);
  --giheCount;
  if ( (v7[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*(_QWORD *)v5[v8]);
    v7[25] &= ~0x20u;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v16 = a1[3];
    a1[3] = 0LL;
    v17 = (v7[25] & 0x40) == 0;
    v21 = v16;
    if ( v17 )
    {
      v18 = (_QWORD *)a1[5];
      if ( !v18 || v18 == a1 )
      {
        RtlFreeHeap(*(PVOID *)(v16 + 128), 0, a1);
        goto LABEL_33;
      }
      RtlFreeHeap(*(PVOID *)(v16 + 128), 0, v18);
    }
    else
    {
      Win32FreePool(a1[5]);
    }
    HMFreeUserOrIsolatedType(v9, v7[24], a1);
LABEL_33:
    UnlockObjectAssignment(&v21);
    goto LABEL_18;
  }
  if ( (v9 & 0x40) != 0 )
  {
    v19 = (void *)a1[5];
    if ( v19 )
    {
      RtlFreeHeap(gpvSharedAlloc, 0, v19);
      HMFreeUserOrIsolatedType(v9, v7[24], a1);
    }
    else
    {
      RtlFreeHeap(gpvSharedAlloc, 0, a1);
    }
    goto LABEL_18;
  }
  v11 = v7[24];
  if ( v11 == 19 )
  {
    v20 = *(void **)(v5[v8] + 32LL);
    goto LABEL_44;
  }
  if ( v11 == 22 )
  {
    v6 = *(_QWORD *)(v5[v8] + 16LL);
    v20 = *(void **)(v6 + 32);
LABEL_44:
    ObfDereferenceObject(v20);
    goto LABEL_18;
  }
  if ( (v9 & 0x100) != 0 )
  {
    v21 = a1[3];
    UnlockObjectAssignment(&v21);
  }
  if ( (v9 & 0x200) != 0 )
  {
    HMFreeIsolatedType(v7[24], a1);
  }
  else if ( (int)IsWin32FreePoolImplSupported() >= 0 )
  {
    Win32FreePoolImpl(a1);
  }
LABEL_18:
  v12 = *((_WORD *)v7 + 13) + 1;
  memset(v7, 0, 0x20uLL);
  v5[v8] = 0LL;
  v5[v8 + 1] = 0LL;
  v5[v8 + 2] = 0LL;
  v13 = 1;
  if ( v12 != -1 )
    v13 = v12;
  *((_WORD *)v7 + 13) = v13;
  v14 = (v7 - (_BYTE *)qword_1C01CBA58) >> 5;
  if ( (v14 & 1) != 0 )
  {
    v5[v8] = qword_1C01CCB30;
    qword_1C01CCB30 = v14;
  }
  else
  {
    v5[v8] = qword_1C01CCB28;
    qword_1C01CCB28 = v14;
  }
  if ( !gbInDestroyHandleTableObjects && v6 )
    HMUnlockObject(v6);
  return 1LL;
}
