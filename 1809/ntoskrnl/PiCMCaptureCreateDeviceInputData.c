/*
 * XREFs of PiCMCaptureCreateDeviceInputData @ 0x14083728C
 * Callers:
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140598F3C (PiControlMakeUserModeCallersCopy.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureCreateDeviceInputData(unsigned __int64 a1, unsigned int a2, int a3, char *a4)
{
  char PreviousMode; // r13
  int UserModeCallersCopy; // edi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  _QWORD *v9; // r15
  void *v10; // rax
  unsigned int v11; // r8d
  _QWORD *v12; // r15
  void *v13; // rax
  unsigned int v14; // r8d
  int v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+38h] [rbp-40h]

  v16 = 0;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  UserModeCallersCopy = 0;
  if ( !a1 || !a2 )
  {
    UserModeCallersCopy = -1073741811;
    goto LABEL_44;
  }
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a1 + a2;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a2 >= 0x1C && *(_DWORD *)a1 == 28 )
    {
      *(_DWORD *)a4 = 40;
      *((_DWORD *)a4 + 1) = *(_DWORD *)(a1 + 4);
      *((_QWORD *)a4 + 1) = *(unsigned int *)(a1 + 8);
      *((_DWORD *)a4 + 4) = *(_DWORD *)(a1 + 12);
      *((_QWORD *)a4 + 3) = *(unsigned int *)(a1 + 16);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(a1 + 20);
      *((_DWORD *)a4 + 9) = *(_DWORD *)(a1 + 24);
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
    if ( a2 >= 0x28 )
    {
      *(_OWORD *)a4 = *(_OWORD *)a1;
      *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)a4 + 4) = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)a4 != 40 )
        UserModeCallersCopy = -1073741811;
    }
    else
    {
      UserModeCallersCopy = -1073741811;
    }
  }
  if ( UserModeCallersCopy >= 0 )
  {
    v9 = a4 + 8;
    v10 = (void *)*((_QWORD *)a4 + 1);
    *((_QWORD *)a4 + 1) = 0LL;
    if ( v10 )
    {
      v11 = *((_DWORD *)a4 + 4);
      if ( v11 >= 2 )
      {
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 1, v10, v11, 2u, PreviousMode, 1);
        if ( UserModeCallersCopy < 0 )
        {
          *v9 = 0LL;
          *((_DWORD *)a4 + 4) = 0;
        }
        else
        {
          v16 = 1;
          *(_WORD *)(*v9 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 4) >> 1) - 2) = 0;
        }
LABEL_27:
        v12 = a4 + 24;
        v13 = (void *)*((_QWORD *)a4 + 3);
        *((_QWORD *)a4 + 3) = 0LL;
        if ( v13 )
        {
          v14 = *((_DWORD *)a4 + 8);
          if ( v14 >= 2 )
          {
            UserModeCallersCopy = PiControlMakeUserModeCallersCopy((void **)a4 + 3, v13, v14, 2u, PreviousMode, 1);
            if ( UserModeCallersCopy < 0 )
            {
              *v12 = 0LL;
              *((_DWORD *)a4 + 8) = 0;
            }
            else
            {
              v17 = 1;
              *(_WORD *)(*v12 + 2 * ((unsigned __int64)*((unsigned int *)a4 + 8) >> 1) - 2) = 0;
            }
LABEL_44:
            if ( UserModeCallersCopy >= 0 )
              return (unsigned int)UserModeCallersCopy;
            goto LABEL_45;
          }
          if ( *((_DWORD *)a4 + 8) >= 2u )
            goto LABEL_44;
        }
        else if ( !*((_DWORD *)a4 + 8) )
        {
          goto LABEL_44;
        }
        goto LABEL_36;
      }
      if ( *((_DWORD *)a4 + 4) >= 2u )
        goto LABEL_27;
    }
    else if ( !*((_DWORD *)a4 + 4) )
    {
      goto LABEL_27;
    }
LABEL_36:
    UserModeCallersCopy = -1073741811;
  }
LABEL_45:
  if ( v16 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 1));
  if ( v17 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)a4 + 3));
  memset(a4, 0, 0x28uLL);
  return (unsigned int)UserModeCallersCopy;
}
