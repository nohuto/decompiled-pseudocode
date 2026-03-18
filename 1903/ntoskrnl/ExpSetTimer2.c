/*
 * XREFs of ExpSetTimer2 @ 0x1400BAB10
 * Callers:
 *     NtSetTimer2 @ 0x1400BAAF0 (NtSetTimer2.c)
 *     NtCancelTimer2 @ 0x14013B2D0 (NtCancelTimer2.c)
 *     NtSetIRTimer @ 0x14013C8C0 (NtSetIRTimer.c)
 * Callees:
 *     ExpSetTimerObject2 @ 0x1400BAC44 (ExpSetTimerObject2.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer2(HANDLE Handle, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS result; // eax
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]

  v9 = 0uLL;
  if ( a2 && KeGetCurrentThread()->PreviousMode )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v4 = a2;
    Object[1] = *(PVOID *)v4;
    if ( a3 )
    {
      v6 = 0x7FFFFFFF0000LL;
      if ( a3 < 0x7FFFFFFF0000LL )
        v6 = a3;
      Object[2] = *(PVOID *)v6;
    }
    v5 = a4;
    if ( a4 )
    {
      if ( a4 >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v9 = *(_OWORD *)v5;
    }
  }
  result = ObReferenceObjectByHandle(Handle, 2u, ExpIRTimerObjectType, KeGetCurrentThread()->PreviousMode, Object, 0LL);
  if ( result >= 0 )
    return ExpSetTimerObject2(Object[0]);
  return result;
}
