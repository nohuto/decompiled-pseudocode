/*
 * XREFs of PiControlGetDeviceDepth @ 0x1406EAD00
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BDCCC (PiControlMakeUserModeCallersCopy.c)
 *     PiGetDeviceDepth @ 0x1406EADA0 (PiGetDeviceDepth.c)
 */

__int64 __fastcall PiControlGetDeviceDepth(__int64 a1, __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax
  unsigned int DeviceDepth; // ebx
  _WORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+34h] [rbp-14h]
  void *v11; // [rsp+38h] [rbp-10h] BYREF

  v4 = *a2;
  v10 = 0;
  v11 = 0LL;
  v9[1] = v4;
  v9[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v11, *((void **)a2 + 1), v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    DeviceDepth = PiGetDeviceDepth(v9, a2 + 8);
    PiControlFreeUserModeCallersBuffer(a4, v11);
    return DeviceDepth;
  }
  return result;
}
