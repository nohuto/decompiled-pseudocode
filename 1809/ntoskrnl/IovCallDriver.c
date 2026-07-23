/*
 * XREFs of IovCallDriver @ 0x140924CD4
 * Callers:
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x1401732D0 (IofCallDriverSpecifyReturn.c)
 *     VerifierIofCallDriver @ 0x140933260 (VerifierIofCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     IopfCallDriver @ 0x1401732F4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140285568 (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x14030AC38 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409254A0 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14092550C (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140925B30 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140930EB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409310A4 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x1409314D4 (VfIrpAllocateCallDriverData.c)
 */

__int64 __fastcall IovCallDriver(PVOID Object, IRP *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  char *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PFILE_OBJECT FileObject; // rax
  unsigned int *v11; // r14
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned int v14; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  if ( IovpEnabledInThePast || (MmVerifierData & 0x20) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && (MmVerifierData & 0x400000) == 0 )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140986A70 = CurrentIrql;
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 16LL;
      qword_140986A78 = 0LL;
      qword_140986A80 = 0LL;
      VfBugCheckNoStackUsage();
    }
    if ( (unsigned int)VfIrpAllocateCallDriverData(a2, &Entry) )
    {
      v8 = (char *)Entry;
      if ( Entry )
      {
        *((_QWORD *)Entry + 20) = Object;
        *((_QWORD *)v8 + 21) = a2;
        *((_QWORD *)v8 + 22) = a3;
        if ( **((_WORD **)v8 + 21) != 6 && (MmVerifierData & 0x400000) == 0 )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140986A70 = *((_QWORD *)v8 + 21);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 3LL;
          qword_140986A78 = 0LL;
          qword_140986A80 = 0LL;
          VfBugCheckNoStackUsage();
        }
        if ( !(unsigned __int8)IovpValidateDeviceObject(Object) && (MmVerifierData & 0x400000) == 0 )
        {
          v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140986A70 = *((_QWORD *)v8 + 20);
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          BugCheckParameter1 = 4LL;
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
            if ( (FileObject->Flags & 0x204000) == 0x204000 && (MmVerifierData & 0x400000) == 0 )
            {
              v8[157] = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
              qword_140986A70 = *((_QWORD *)v8 + 20);
              qword_140986A78 = *((_QWORD *)v8 + 21);
              qword_140986A80 = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
              *(_QWORD *)&VfBugcheckTmpData = 201LL;
              BugCheckParameter1 = 15LL;
              VfBugCheckNoStackUsage();
            }
          }
        }
        v11 = (unsigned int *)(v8 + 184);
        v12 = VfBeforeCallDriver(Object, a2, v8);
        if ( (IopFunctionPointerMask & 2) != 0 )
          v13 = IopPerfCallDriver(Object, a2);
        else
          v13 = IopfCallDriver((__int64)Object, a2);
        *v11 = v13;
        VfAfterCallDriver(v8, v8 + 184, v12);
        v14 = *v11;
        ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v8);
        return v14;
      }
      else
      {
        return IovpCallDriverNoIrpTracking(Object);
      }
    }
    else
    {
      return IovpCallDriverWithStackBuffer(Object);
    }
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(Object, a2);
  }
  else
  {
    return IopfCallDriver((__int64)Object, a2);
  }
}
