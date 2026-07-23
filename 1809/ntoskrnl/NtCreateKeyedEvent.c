/*
 * XREFs of NtCreateKeyedEvent @ 0x140757890
 * Callers:
 *     <none>
 * Callees:
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateKeyedEvent(
        PHANDLE OutHandle,
        ACCESS_MASK AccessMask,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  char PreviousMode; // cl
  NTSTATUS result; // eax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v13[5]; // [rsp+60h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)OutHandle & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *OutHandle = 0LL;
  if ( Flags )
    return -1073741582;
  result = ObCreateObjectEx(
             PreviousMode,
             ExpKeyedEventObjectType,
             (int)ObjectAttributes,
             PreviousMode,
             v11,
             1536,
             0,
             0,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v8 = Object;
    v9 = (char *)Object + 8;
    v10 = 64LL;
    do
    {
      *(v9 - 1) = 0LL;
      v9[1] = v9;
      *v9 = v9;
      v9 += 3;
      --v10;
    }
    while ( v10 );
    result = ObInsertObjectEx(v8, 0LL, AccessMask, 0, 0, 0LL, v13);
    if ( result >= 0 )
      *OutHandle = (HANDLE)v13[0];
  }
  return result;
}
