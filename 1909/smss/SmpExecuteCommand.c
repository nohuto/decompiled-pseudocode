/*
 * XREFs of SmpExecuteCommand @ 0x1400017F4
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140001350 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140001540 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x140004B40 (SmpStartCsr.c)
 *     SmpLoadDataFromRegistry @ 0x140008D5C (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x140012AE0 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmpInvokeAutoChk @ 0x140001158 (SmpInvokeAutoChk.c)
 *     SmscpLoadSubSystem @ 0x1400016A8 (SmscpLoadSubSystem.c)
 *     SmpParseCommandLine @ 0x140001930 (SmpParseCommandLine.c)
 *     SmpExecuteImage @ 0x140001F14 (SmpExecuteImage.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  int v6; // esi
  __int64 result; // rax
  struct _UNICODE_STRING *v8; // rdi
  int v9; // r9d
  unsigned int v10; // ebx
  unsigned int SubSystem; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = a4;
  v6 = a1;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v8 = &v14;
  if ( (a4 & 0x400) != 0 )
    v8 = 0LL;
  result = SmpParseCommandLine(a1, &v15, &UnicodeString, v8);
  v10 = result;
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) != 0 )
    {
      if ( !SmpSoftBoot )
      {
        SubSystem = SmpInvokeAutoChk(&UnicodeString, (int)v8, &Source, v15);
LABEL_16:
        v10 = SubSystem;
      }
    }
    else
    {
      if ( (v15 & 8) != 0 )
      {
        if ( SmpPrimarySmss )
          SubSystem = SmpLoadSubSystem((int)&UnicodeString, (int)v8, v6, (int)&Source, v15);
        else
          SubSystem = SmscpLoadSubSystem((int)&UnicodeString, (int)v8, v6, a2, v15);
        goto LABEL_16;
      }
      if ( (v15 & 0x10) == 0 )
      {
        SubSystem = SmpExecuteImage((int)&UnicodeString, (int)v8, v6, v9, 0LL, v15, ProcessParameters);
        goto LABEL_16;
      }
      v10 = -1073741772;
    }
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&Source);
    if ( v8 )
      RtlFreeUnicodeString(&v14);
    return v10;
  }
  return result;
}
