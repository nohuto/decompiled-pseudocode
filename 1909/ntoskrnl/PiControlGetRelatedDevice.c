/*
 * XREFs of PiControlGetRelatedDevice @ 0x14066FB40
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x1400D4E9C (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BDCCC (PiControlMakeUserModeCallersCopy.c)
 *     PiGetRelatedDevice @ 0x14066FCAC (PiGetRelatedDevice.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int16 v4; // cx
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // edx
  int UserModeCallersCopy; // edi
  int v11; // eax
  void *v13; // [rsp+30h] [rbp-20h] BYREF
  _WORD v14[2]; // [rsp+38h] [rbp-18h] BYREF
  int v15; // [rsp+3Ch] [rbp-14h]
  void *v16; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+28h] BYREF

  v4 = *a2;
  v15 = 0;
  v16 = 0LL;
  v14[1] = v4;
  v14[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  v13 = 0LL;
  v16 = 0LL;
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 && (v8 = *((_DWORD *)a2 + 8)) != 0 )
    v9 = 2 * v8;
  else
    v9 = 0;
  v17 = v9;
  UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v13, v9, a4, v7);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v16, *((void **)a2 + 1), v14[0], 2u, a4, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiGetRelatedDevice(v14, v13, &v17, *((unsigned int *)a2 + 4));
      if ( v13 )
      {
        v11 = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v13, 2 * *((_DWORD *)a2 + 8), 2u, a4, 0);
        if ( v11 < 0 )
          UserModeCallersCopy = v11;
      }
      *((_DWORD *)a2 + 8) = v17 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v16);
  PiControlFreeUserModeCallersBuffer(a4, v13);
  return (unsigned int)UserModeCallersCopy;
}
