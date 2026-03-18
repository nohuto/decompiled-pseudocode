/*
 * XREFs of PspInitPhase1 @ 0x1409AB320
 * Callers:
 *     PsInitSystem @ 0x1409C4944 (PsInitSystem.c)
 * Callees:
 *     strcpy_s @ 0x14019B7A0 (strcpy_s.c)
 *     KeBugCheck @ 0x1401BBB80 (KeBugCheck.c)
 *     VslRegisterSecureSystemProcess @ 0x14027BB34 (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x14061B280 (ObInsertObject.c)
 *     PsCreateMinimalProcess @ 0x14075754C (PsCreateMinimalProcess.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x1409ADABC (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x1409ADB18 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x1409ADB6C (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x1409ADBC8 (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x1409ADC24 (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x1409ADC78 (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x1409ADCCC (PspInitializeNetRateControl.c)
 */

bool PspInitPhase1()
{
  NTSTATUS inserted; // eax
  int v1; // ecx
  bool result; // al
  NTSTATUS v3; // eax
  HANDLE v4; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  inserted = ObInsertObject(PspSystemPartition, 0LL, 0x1F0003u, 0, 0LL, &PspSystemPartitionHandle);
  v1 = 0;
  if ( inserted < 0 )
    v1 = inserted;
  if ( v1 < 0 )
    KeBugCheck(0x60u);
  result = 0;
  if ( (unsigned __int8)PspInitializeNetRateControl() )
  {
    if ( (int)PspInitializeBackgroundActivityModeratorCallouts() >= 0
      && (int)PspInitializeDesktopActivityModeratorCallouts() >= 0
      && (int)PspInitializeMMCSSCallouts() >= 0
      && (int)PspInitializeHwTraceCallouts() >= 0
      && (int)PspInitializeOctagonExtensionHost() >= 0
      && (int)PspInitializeSecExtensionHost() >= 0 )
    {
      if ( !VslVsmEnabled )
        return 1;
      v4 = 0LL;
      if ( (int)PsCreateMinimalProcess(
                  PsInitialSystemProcess,
                  0LL,
                  0LL,
                  BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]),
                  0LL,
                  0,
                  0,
                  0LL,
                  0LL,
                  &v4) >= 0 )
      {
        v3 = ObReferenceObjectByHandle(v4, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        PsSecureSystemProcess = (ULONG_PTR)Object;
        if ( v3 >= 0 )
        {
          strcpy_s((char *)Object + 1104, 0xFuLL, "Secure System");
          if ( VslRegisterSecureSystemProcess() >= 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
