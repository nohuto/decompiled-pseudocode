/*
 * XREFs of ExpGetHandleInformation @ 0x1408CCA1C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     ExpSnapShotHandleTables @ 0x1408CF4D4 (ExpSnapShotHandleTables.c)
 */

__int64 __fastcall ExpGetHandleInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // edx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v10, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    if ( a2 >= 8 )
    {
      v7 = (int)v10;
      *v10 = 0;
      v6 = ExpSnapShotHandleTables((unsigned int)ObpCaptureHandleInformation, v7, a2, (unsigned int)&v9, 0);
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
