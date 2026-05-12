/*
 * XREFs of PortPassThroughValidate @ 0x1C0076CDC
 * Callers:
 *     PortPassThroughSendAsync @ 0x1C0076920 (PortPassThroughSendAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     PortPassThroughNormalize @ 0x1C0052B0C (PortPassThroughNormalize.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C0052E34 (PortpPassThroughZeroUnusedBuffers.c)
 *     PortPassThroughGetDataBuffer @ 0x1C00768FC (PortPassThroughGetDataBuffer.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C0076DDC (PortPassThroughValidateNormalizedRequest.c)
 */

__int64 __fastcall PortPassThroughValidate(__int64 a1, IRP *a2, char a3, unsigned int a4, unsigned int a5, _BYTE *a6)
{
  _BYTE *v10; // rdi
  int v11; // ebx
  __int64 v12; // r8
  int DataBuffer; // eax
  __int64 v14; // rdx
  _BYTE v16[56]; // [rsp+20h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  v10 = v16;
  if ( a6 )
    v10 = a6;
  v11 = PortPassThroughNormalize((__int64)v10, a2);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a3;
    v11 = PortPassThroughValidateNormalizedRequest(v10, a2, v12);
    if ( v11 >= 0 )
    {
      PortpPassThroughZeroUnusedBuffers((__int64)a2);
      DataBuffer = PortPassThroughGetDataBuffer((__int64)v10, (__int64)a2, a3);
      if ( (*(_DWORD *)(a1 + 152) & DataBuffer) != 0 )
        return (unsigned int)-1073741811;
      v14 = *((unsigned int *)v10 + 3);
      if ( (_DWORD)v14 )
      {
        if ( (unsigned int)(((unsigned __int64)(DataBuffer & 0xFFF) + v14 + 4095) >> 12) > a4 || (unsigned int)v14 > a5 )
          return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v11;
}
