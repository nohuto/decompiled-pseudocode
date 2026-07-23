/*
 * XREFs of PiCMCaptureInterfaceListInputData @ 0x1405A0850
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1405A068C (PiCMGetDeviceInterfaceList.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140598F3C (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureInterfaceListInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
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
    goto LABEL_17;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = a1 + a2;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x24 && *(_DWORD *)a1 == 36 )
    {
      *(_DWORD *)a4 = 40;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *(_OWORD *)(a4 + 8) = *(_OWORD *)(a1 + 8);
      *((_QWORD *)a4 + 3) = *(unsigned int *)(a1 + 24);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 28);
      *((_DWORD *)a4 + 9) = *(_DWORD *)(a1 + 32);
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
    v8 = a1 + a2;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < a1 )
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
  v9 = a4 + 24;
  v10 = (void *)*((_QWORD *)a4 + 3);
  *((_QWORD *)a4 + 3) = 0LL;
  if ( !v10 )
  {
    if ( !*((_DWORD *)a4 + 8) )
      goto LABEL_17;
    goto LABEL_32;
  }
  v13 = *((_DWORD *)a4 + 8);
  if ( v13 >= 2 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 3, v10, v13, 2u, PreviousMode, 1);
    if ( UserModeCallersCopy < 0 )
    {
      *v9 = 0LL;
      *((_DWORD *)a4 + 8) = 0;
    }
    else
    {
      v5 = 1;
      *(_WORD *)(*v9 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 8) >> 1) - 2) = 0;
    }
LABEL_17:
    if ( UserModeCallersCopy >= 0 )
      return (unsigned int)UserModeCallersCopy;
    goto LABEL_33;
  }
LABEL_32:
  UserModeCallersCopy = -1073741811;
LABEL_33:
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 3));
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
