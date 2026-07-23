/*
 * XREFs of PiControlGetRelatedDevice @ 0x1406F9990
 * Callers:
 *     <none>
 * Callees:
 *     PiControlAllocateBufferForUserModeCaller @ 0x140001D7C (PiControlAllocateBufferForUserModeCaller.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140598F3C (PiControlMakeUserModeCallersCopy.c)
 *     PiGetRelatedDevice @ 0x1406F9ACC (PiGetRelatedDevice.c)
 */

__int64 __fastcall PiControlGetRelatedDevice(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // edx
  int UserModeCallersCopy; // edi
  int v10; // eax
  void *v12; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v13; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v14; // [rsp+3Ah] [rbp-16h]
  void *v15; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+28h] BYREF

  v14 = *a2;
  v13 = v14;
  if ( (unsigned __int16)(v14 - 1) > 0x18Fu || (v14 & 1) != 0 )
    return 3221225485LL;
  v12 = 0LL;
  v15 = 0LL;
  v6 = *((_QWORD *)a2 + 3);
  if ( v6 && (v7 = *((_DWORD *)a2 + 8)) != 0 )
    v8 = 2 * v7;
  else
    v8 = 0;
  v16 = v8;
  UserModeCallersCopy = PiControlAllocateBufferForUserModeCaller(&v12, v8, a4, v6);
  if ( UserModeCallersCopy >= 0 )
  {
    UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v15, *((void **)a2 + 1), v13, 2u, a4, 1);
    if ( UserModeCallersCopy >= 0 )
    {
      UserModeCallersCopy = PiGetRelatedDevice(&v13, v12, &v16, *((unsigned int *)a2 + 4));
      if ( v12 )
      {
        v10 = PiControlMakeUserModeCallersCopy((void **)a2 + 3, v12, 2 * *((_DWORD *)a2 + 8), 2u, a4, 0);
        if ( v10 < 0 )
          UserModeCallersCopy = v10;
      }
      *((_DWORD *)a2 + 8) = v16 >> 1;
    }
  }
  PiControlFreeUserModeCallersBuffer(a4, v15);
  PiControlFreeUserModeCallersBuffer(a4, v12);
  return (unsigned int)UserModeCallersCopy;
}
