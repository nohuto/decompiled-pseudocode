/*
 * XREFs of ExpGetLockInformation @ 0x1408CCB4C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     ExQuerySystemLockInformation @ 0x14057F5CC (ExQuerySystemLockInformation.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetLockInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int SystemLockInformation; // ebx
  _DWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    SystemLockInformation = ExQuerySystemLockInformation(v7, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return SystemLockInformation;
  }
  return result;
}
