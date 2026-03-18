/*
 * XREFs of AlpcpCaptureSecurityAttribute @ 0x14065F320
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3860 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14065F3F8 (AlpcpCaptureSecurityAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureSecurityAttribute(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  PVOID Object; // [rsp+38h] [rbp-30h]

  if ( !KeGetCurrentThread()->PreviousMode )
    return AlpcpCaptureSecurityAttributeInternal(a1, a3);
  Object = *(PVOID *)(a2 + 16);
  result = AlpcpCaptureSecurityAttributeInternal(a1, a3);
  if ( (int)result >= 0 )
    *(_QWORD *)(a2 + 16) = Object;
  return result;
}
