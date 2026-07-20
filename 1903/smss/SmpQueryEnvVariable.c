/*
 * XREFs of SmpQueryEnvVariable @ 0x140002270
 * Callers:
 *     SmpParseCommandLine @ 0x140001930 (SmpParseCommandLine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpQueryEnvVariable(__int64 a1, const UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  WCHAR *v3; // rdi
  NTSTATUS result; // eax
  USHORT Length; // ax
  struct _UNICODE_STRING Value; // [rsp+20h] [rbp-10h] BYREF

  v3 = SmpDefaultEnvironment;
  *(_DWORD *)&Value.Length = 0x10000000;
  Value.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, 0x1000uLL);
  if ( !Value.Buffer )
    return -1073741670;
  result = RtlQueryEnvironmentVariable_U(v3, a2, &Value);
  if ( result != -1073741789 )
    goto LABEL_3;
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Value.Buffer);
  Length = Value.Length;
  Value.Length = 0;
  Value.MaximumLength = Length + 2;
  Value.Buffer = (PWSTR)RtlAllocateHeap(
                          *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                          SmBaseTag,
                          (unsigned __int16)(Length + 2));
  if ( !Value.Buffer )
    return -1073741670;
  result = RtlQueryEnvironmentVariable_U(v3, a2, &Value);
LABEL_3:
  if ( result < 0 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Value.Buffer);
    return -1073741772;
  }
  else
  {
    *a3 = Value;
  }
  return result;
}
