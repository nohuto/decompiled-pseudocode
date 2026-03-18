/*
 * XREFs of NVMeFreeHostMemoryBuffer @ 0x1C000E3C4
 * Callers:
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0017310 (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeFreeHostMemoryBuffer(__int64 a1)
{
  int *v1; // rdx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  _DWORD *v6; // rdx
  __int64 v7; // r9
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-A0h]
  _BYTE v10[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[120]; // [rsp+38h] [rbp-90h] BYREF

  v1 = *(int **)(a1 + 3696);
  LODWORD(Size) = v1[1];
  NVMeSetHostMemoryBuffer(a1, 0, 0, *v1, v1 + 2, Size);
  v3 = *(_QWORD *)(a1 + 3696);
  v4 = *(_DWORD *)(v3 + 4) >> 4;
  if ( (unsigned int)v4 > 8 )
    v4 = 8LL;
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)v4;
    v6 = (_DWORD *)(v3 + 16);
    do
    {
      *(_QWORD *)&v10[(_QWORD)v6 - v3 - 16] = *((_QWORD *)v6 - 1);
      *(_DWORD *)&v11[(_QWORD)v6 - v3 - 16] = *v6;
      v6 += 4;
      --v5;
    }
    while ( v5 );
  }
  StorPortExtendedFunction(70LL, a1, v10, v4);
  result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 3696), v7);
  *(_QWORD *)(a1 + 3696) = 0LL;
  return result;
}
