/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x14092550C
 * Callers:
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x1401732F4 (IopfCallDriver.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopPerfCallDriver @ 0x140285568 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x14030AC38 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140925B30 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140930EB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409310A4 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PVOID Object, IRP *a2, __int64 a3)
{
  bool v6; // zf
  int v7; // edx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  PFILE_OBJECT FileObject; // rax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v14[24]; // [rsp+28h] [rbp-91h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = a2->Type == 6;
  v14[20] = Object;
  v14[21] = a2;
  v14[22] = a3;
  if ( !v6 && (MmVerifierData & 0x400000) == 0 )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_140986A78 = 0LL;
    qword_140986A80 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    qword_140986A70 = (ULONG_PTR)a2;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && (v7 & MmVerifierData) == 0 )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    qword_140986A70 = (ULONG_PTR)Object;
    qword_140986A78 = 0LL;
    qword_140986A80 = 0LL;
    VfBugCheckNoStackUsage();
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation[-1].MajorFunction )
  {
    FileObject = CurrentStackLocation[-1].FileObject;
    if ( FileObject )
    {
      if ( (FileObject->Flags & 0x204000) == 0x204000 && (v7 & MmVerifierData) == 0 )
      {
        BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        qword_140986A80 = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_140986A70 = (ULONG_PTR)Object;
        qword_140986A78 = (ULONG_PTR)a2;
        VfBugCheckNoStackUsage();
      }
    }
  }
  v10 = VfBeforeCallDriver(Object, a2, v14);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v11 = IopPerfCallDriver(Object, a2);
  else
    v11 = IopfCallDriver((__int64)Object, a2);
  v13 = v11;
  VfAfterCallDriver(v14, &v13, v10);
  return v13;
}
