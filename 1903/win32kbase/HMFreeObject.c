/*
 * XREFs of HMFreeObject @ 0x1C00283C0
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006494C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     HMDestroyObject @ 0x1C006F840 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0090D58 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     DestroyMonitor @ 0x1C00B70F0 (DestroyMonitor.c)
 *     DestroyKL @ 0x1C00BA3F4 (DestroyKL.c)
 *     DestroyKF @ 0x1C00BA480 (DestroyKF.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00282DC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     UnlockObjectAssignment @ 0x1C0035040 (UnlockObjectAssignment.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0053D70 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0053DE0 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C01057C8 (HMCleanupGrantedHandle.c)
 *     McTemplateK0pqqq @ 0x1C0110924 (McTemplateK0pqqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rdx
  char *v7; // rbx
  const void ***v8; // rsi
  unsigned __int16 v9; // di
  const void **v10; // rcx
  unsigned __int64 v11; // r8
  char v12; // al
  __int16 v13; // di
  __int64 v14; // rbx
  __int64 v16; // rcx
  bool v17; // zf
  _QWORD *v18; // r8
  void *v19; // r8
  unsigned int Arg1; // eax
  PMCGEN_TRACE_CONTEXT v21; // rcx
  const GUID *Arg3; // r8
  void *v23; // rcx
  unsigned int v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  GetDomainLockRef(14LL, a2, a3);
  v6 = *(unsigned int *)a1;
  v7 = (char *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)v6;
  v8 = (const void ***)((char *)gpKernelHandleTable + 24 * (unsigned __int16)v6);
  v9 = *((_WORD *)&unk_1C01D2E9C + 12 * (unsigned __int8)v7[24]);
  if ( v8[2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(3LL * (unsigned __int8)v7[24], v6, v5);
  if ( (v9 & 2) != 0 )
  {
    v10 = v8[1];
  }
  else
  {
    if ( (v9 & 1) == 0 )
    {
      v10 = 0LL;
      goto LABEL_7;
    }
    v10 = (const void **)v8[1][52];
  }
  if ( v10 )
    --*((_DWORD *)v10 + 17);
LABEL_7:
  --giheCount;
  if ( v10 )
    v11 = (unsigned __int64)PsGetProcessId((PEPROCESS)*v10) & 0xFFFFFFFC;
  else
    v11 = 0LL;
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
  {
    Arg1 = GetEtwUserHandleType(v7[24]);
    McTemplateK0pqqq(v21, &UserDestroyHandle, Arg3, **v8, Arg1, v24, (const unsigned int)Arg3);
  }
  if ( (v7[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**v8, v6, v11);
    v7[25] &= ~0x20u;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v16 = a1[3];
    a1[3] = 0LL;
    v17 = (v7[25] & 0x40) == 0;
    v25 = v16;
    if ( v17 )
    {
      v18 = (_QWORD *)a1[5];
      if ( !v18 || v18 == a1 )
      {
        RtlFreeHeap(*(PVOID *)(v16 + 128), 0, a1);
      }
      else
      {
        RtlFreeHeap(*(PVOID *)(v16 + 128), 0, v18);
        HMFreeUserOrIsolatedType(v9, v7[24], a1);
      }
      UnlockObjectAssignment(&v25);
    }
    else
    {
      Win32FreePool(a1[5]);
      HMFreeUserOrIsolatedType(v9, v7[24], a1);
      UnlockObjectAssignment(&v25);
    }
    goto LABEL_22;
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
    goto LABEL_22;
  }
  v12 = v7[24];
  if ( v12 == 19 )
  {
    v23 = (void *)(*v8)[4];
    goto LABEL_48;
  }
  if ( v12 == 22 )
  {
    v4 = (*v8)[2];
    v23 = (void *)v4[4];
LABEL_48:
    ObfDereferenceObject(v23);
    goto LABEL_22;
  }
  if ( (v9 & 0x100) != 0 )
  {
    v25 = a1[3];
    UnlockObjectAssignment(&v25);
  }
  if ( (v9 & 0x200) != 0 )
  {
    HMFreeIsolatedType(v7[24], a1);
  }
  else if ( (int)IsWin32FreePoolImplSupported(v10, v6, v11) >= 0 )
  {
    Win32FreePoolImpl(a1);
  }
LABEL_22:
  v13 = *((_WORD *)v7 + 13) + 1;
  if ( *((_WORD *)v7 + 13) == 0xFFFE )
    v13 = 1;
  memset(v7, 0, 0x20uLL);
  *v8 = 0LL;
  v8[1] = 0LL;
  v8[2] = 0LL;
  *((_WORD *)v7 + 13) = v13;
  v14 = (v7 - (char *)qword_1C0213758) >> 5;
  if ( (v14 & 1) != 0 )
  {
    *v8 = (const void **)qword_1C0213700;
    qword_1C0213700 = v14;
  }
  else
  {
    *v8 = (const void **)qword_1C02136F8;
    qword_1C02136F8 = v14;
  }
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObjectWorker(v4);
  return 1LL;
}
