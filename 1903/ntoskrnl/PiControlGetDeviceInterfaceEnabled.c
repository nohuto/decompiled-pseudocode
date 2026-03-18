/*
 * XREFs of PiControlGetDeviceInterfaceEnabled @ 0x1405BD5E0
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BD8EC (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDA40 (PnpUnicodeStringToWstrFree.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF440 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PiControlGetDeviceInterfaceEnabled(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  int Object; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-20h] BYREF
  _WORD v13[2]; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+3Ch] [rbp-14h]
  void *v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v16 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v13[1] = v4;
  v13[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x3EFu || (v4 & 1) != 0 || *((_DWORD *)a2 + 4) )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v15, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    Object = PnpUnicodeStringToWstr(&v16, 0LL, v13);
    if ( Object >= 0 )
    {
      Object = PiDmGetObject(3LL, v16, &BugCheckParameter2);
      if ( Object >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v10 = BugCheckParameter2;
        ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
        *((_BYTE *)a2 + 20) = *(_QWORD *)(v10 + 40) != 0LL;
        ExReleasePushLockEx(v10, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PiDmObjectRelease((PVOID)BugCheckParameter2);
      }
    }
    PnpUnicodeStringToWstrFree(v16, v13);
    PiControlFreeUserModeCallersBuffer(a4, v15);
    return (unsigned int)Object;
  }
  return result;
}
