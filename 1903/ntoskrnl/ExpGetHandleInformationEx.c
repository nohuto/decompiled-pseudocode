/*
 * XREFs of ExpGetHandleInformationEx @ 0x1409091BC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140116740 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1406BF9BC (ExLockUserBuffer.c)
 *     ExpSnapShotHandleTables @ 0x14090B7D8 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ExpGetHandleInformationEx(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // edx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v10, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    if ( a2 >= 0x10 )
    {
      v7 = (int)v10;
      *v10 = 0LL;
      v6 = ExpSnapShotHandleTables((unsigned int)ObpCaptureHandleInformationEx, v7, a2, (unsigned int)&v9, 1);
      *a3 = v9;
    }
    else
    {
      v6 = -1073741820;
    }
    ExUnlockUserBuffer((struct _MDL *)P);
    return v6;
  }
  return result;
}
