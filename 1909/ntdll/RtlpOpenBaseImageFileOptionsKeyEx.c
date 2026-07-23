/*
 * XREFs of RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800738AC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x18007384C (RtlpOpenBaseImageFileOptionsKey.c)
 * Callees:
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009D230 (ZwCreateKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKeyEx(_QWORD *a1, ACCESS_MASK a2, char a3)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES v5; // [rsp+40h] [rbp-38h] BYREF
  HANDLE v6; // [rsp+98h] [rbp+20h] BYREF

  v5.Length = 48;
  v5.RootDirectory = 0LL;
  v5.Attributes = 576;
  v5.ObjectName = (PUNICODE_STRING)&unk_180118768;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  if ( a3 )
    result = ZwCreateKey(&v6, a2, &v5, 0, 0LL, 0, 0LL);
  else
    result = NtOpenKey(&v6, a2, &v5);
  if ( result >= 0 )
  {
    *a1 = v6;
    return 0;
  }
  return result;
}
