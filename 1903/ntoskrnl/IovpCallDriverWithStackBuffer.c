/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x14096368C
 * Callers:
 *     IovCallDriver @ 0x140962E34 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x140180764 (IopfCallDriver.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopPerfCallDriver @ 0x14029A534 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x1403286C4 (VfBugCheckNoStackUsage.c)
 *     IovpValidateDeviceObject @ 0x140963CC0 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x14096E734 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14096E920 (VfBeforeCallDriver.c)
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
    qword_1409C7DB8 = 0LL;
    qword_1409C7DC0 = 0LL;
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 3LL;
    qword_1409C7DB0 = (ULONG_PTR)a2;
    VfBugCheckNoStackUsage();
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && (v7 & MmVerifierData) == 0 )
  {
    BYTE5(v14[19]) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 4LL;
    qword_1409C7DB0 = (ULONG_PTR)Object;
    qword_1409C7DB8 = 0LL;
    qword_1409C7DC0 = 0LL;
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
        qword_1409C7DC0 = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        BugCheckParameter1 = 15LL;
        qword_1409C7DB0 = (ULONG_PTR)Object;
        qword_1409C7DB8 = (ULONG_PTR)a2;
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
