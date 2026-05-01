/*
 * XREFs of ?AddRef@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x18003BCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::AddRef(HAM_ACTIVITY_RM_CONTEXT *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
  if ( (int)result <= 1 )
    NT_ASSERT("NewCount > 1");
  return result;
}
