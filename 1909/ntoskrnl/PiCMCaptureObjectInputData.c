/*
 * XREFs of PiCMCaptureObjectInputData @ 0x1406CF74C
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406CF22C (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1406CF340 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407198C8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PiCMCreateObject @ 0x140870FE0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408711A4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871608 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140871708 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140871950 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x1408723C0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408724CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873394 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BDCCC (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureObjectInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
{
  int v5; // r15d
  char PreviousMode; // r12
  int UserModeCallersCopy; // ebx
  unsigned __int64 v8; // r8
  _QWORD *v9; // r14
  void *v10; // rcx
  unsigned __int64 v12; // r8
  unsigned int v13; // r8d

  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_16;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_DWORD *)a4 + 2) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)a4 + 2) = *(unsigned int *)(a1 + 12);
      *((_DWORD *)a4 + 6) = *(_DWORD *)(a1 + 16);
      *((_DWORD *)a4 + 7) = *(_DWORD *)(a1 + 20);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 24);
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  else
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a1 + a2;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 < 0x28 )
    {
      UserModeCallersCopy = -1073741811;
    }
    else
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)a4 + 4) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy < 0 )
    goto LABEL_33;
  v9 = a4 + 16;
  v10 = (void *)*((_QWORD *)a4 + 2);
  *((_QWORD *)a4 + 2) = 0LL;
  if ( !v10 )
  {
    if ( !*((_DWORD *)a4 + 6) )
      goto LABEL_16;
    goto LABEL_32;
  }
  v13 = *((_DWORD *)a4 + 6);
  if ( v13 >= 2 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 2, v10, v13, 2u, PreviousMode, 1);
    if ( UserModeCallersCopy < 0 )
    {
      *v9 = 0LL;
      *((_DWORD *)a4 + 6) = 0;
    }
    else
    {
      v5 = 1;
      *(_WORD *)(*v9 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 6) >> 1) - 2) = 0;
    }
LABEL_16:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_33;
  }
LABEL_32:
  UserModeCallersCopy = -1073741811;
LABEL_33:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 2));
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
