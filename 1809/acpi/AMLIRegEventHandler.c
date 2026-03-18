/*
 * XREFs of AMLIRegEventHandler @ 0x1C002B7F4
 * Callers:
 *     RegisterOperationRegionHandler @ 0x1C009EB20 (RegisterOperationRegionHandler.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00ADD24 (UnRegisterOperationRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1C00BB270 (OSInitializeCallbacks.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     RegEventHandler @ 0x1C002B9E8 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C002BA10 (RegRSAccess.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     Simulator_Free_Arguments @ 0x1C0061738 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C0061CD4 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_TestNotifyRet @ 0x1C0061EA8 (Simulator_TestNotifyRet.c)
 *     RegOpcodeHandler @ 0x1C0063660 (RegOpcodeHandler.c)
 */

__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 *v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // r9
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v2 = v16;
  v3 = 0LL;
  dword_1C0080868 = 0;
  v5 = v16;
  v6 = v14;
  v13[0] = 0LL;
  pszDest = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v13);
    if ( (_DWORD)result )
      return result;
    v5 = v16;
    v6 = v14;
    v3 = v13[0];
  }
  if ( a1 <= 0xB )
  {
    if ( a1 == 11 )
    {
      v8 = &ghDestroyObj;
      goto LABEL_10;
    }
    if ( a1 > 6 )
    {
      if ( a1 != 7 )
      {
        if ( a1 == 8 )
        {
          v8 = &qword_1C0080848;
        }
        else if ( a1 == 9 )
        {
          v8 = &qword_1C0080858;
        }
        else
        {
          v8 = (__int64 *)&ghCreate;
        }
        goto LABEL_10;
      }
      LOBYTE(v2) = 1;
    }
    else
    {
      if ( a1 != 6 )
      {
        if ( a1 != 1 )
        {
          switch ( a1 )
          {
            case 2u:
              v8 = &ghNotify;
              goto LABEL_10;
            case 3u:
              v8 = &ghFatal;
LABEL_10:
              v9 = RegEventHandler(v8, v6, v5);
              goto LABEL_11;
            case 4u:
              v8 = (__int64 *)&ghValidateTable;
              goto LABEL_10;
            case 5u:
              v8 = (__int64 *)&ghGlobalLock;
              goto LABEL_10;
          }
          goto LABEL_51;
        }
        v12 = 0LL;
        goto LABEL_53;
      }
      v2 = 0LL;
    }
    v9 = RegRSAccess(a2, v6, v5, v2);
    goto LABEL_11;
  }
  switch ( a1 )
  {
    case 0xCu:
      v12 = 0x80000000LL;
LABEL_53:
      v9 = RegOpcodeHandler(a2, v6, v5, v12);
LABEL_11:
      v10 = v9;
      if ( v9 == 32772 )
        v10 = 259;
      goto LABEL_13;
    case 0xDu:
      v8 = &ghMapTable;
      goto LABEL_10;
    case 0xEu:
      v8 = (__int64 *)&ghGetAcpiTableVersion;
      goto LABEL_10;
    case 0xFu:
      v8 = (__int64 *)&ghCheckOsiString;
      goto LABEL_10;
    case 0x10u:
      v8 = &ghMutexObject;
      goto LABEL_10;
    case 0x11u:
      v8 = &ghQueryDLMSupportHandler;
      goto LABEL_10;
    case 0x12u:
      v8 = &ghLoadTable;
      goto LABEL_10;
    case 0x13u:
      v8 = &ghUnloadTable;
      goto LABEL_10;
    case 0x14u:
      v8 = &ghNativeMethodEvalObject;
      goto LABEL_10;
  }
LABEL_51:
  v10 = -1072431091;
  LogError(-1072431091);
  AcpiDiagTraceAmlError(0LL, -1072431091);
  PrintDebugMessage(164, a1, 0, 0, 0LL);
LABEL_13:
  if ( g_SimulatorCallbackObject )
  {
    if ( v3 )
    {
      v10 = Simulator_TestNotifyRet((PVOID)v3);
      if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
        Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v10;
}
