/*
 * XREFs of SmpExecuteCommand @ 0x1400017E8
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140001350 (SmscpLoadSubSystemsForMuSession.c)
 *     SmscpExecuteInitialCommand @ 0x140001540 (SmscpExecuteInitialCommand.c)
 *     SmpStartCsr @ 0x140004B30 (SmpStartCsr.c)
 *     SmpLoadDataFromRegistry @ 0x140009F38 (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x1400155A0 (SmpLoadDeferredSubsystem.c)
 * Callees:
 *     SmpInvokeAutoChk @ 0x140001158 (SmpInvokeAutoChk.c)
 *     SmscpLoadSubSystem @ 0x14000169C (SmscpLoadSubSystem.c)
 *     SmpParseCommandLine @ 0x140001900 (SmpParseCommandLine.c)
 *     SmpExecuteImage @ 0x140001EE4 (SmpExecuteImage.c)
 *     SmpLoadSubSystem @ 0x140015654 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  int v6; // ebx
  struct _UNICODE_STRING *v7; // rdi
  __int64 result; // rax
  int v9; // r9d
  unsigned int SubSystem; // eax
  unsigned int v11; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = a4;
  v6 = a1;
  if ( (a4 & 1) != 0 )
    return 0LL;
  v7 = &v14;
  if ( (a4 & 0x400) != 0 )
    v7 = 0LL;
  result = SmpParseCommandLine(a1, &v15, &UnicodeString, v7);
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) != 0 )
    {
      SubSystem = SmpInvokeAutoChk(&UnicodeString, (int)v7, &Source, v15);
    }
    else if ( (v15 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        SubSystem = SmpLoadSubSystem((int)&UnicodeString, (int)v7, v6, (int)&Source, v15);
      else
        SubSystem = SmscpLoadSubSystem((int)&UnicodeString, (int)v7, v6, a2, v15);
    }
    else
    {
      if ( (v15 & 0x10) != 0 )
      {
        v11 = -1073741772;
        goto LABEL_10;
      }
      SubSystem = SmpExecuteImage((int)&UnicodeString, (int)v7, v6, v9, 0LL, v15, ProcessParameters);
    }
    v11 = SubSystem;
LABEL_10:
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&Source);
    if ( v7 )
      RtlFreeUnicodeString(&v14);
    return v11;
  }
  return result;
}
