/*
 * XREFs of sub_18008BF20 @ 0x18008BF20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     sub_18008BF8C @ 0x18008BF8C (sub_18008BF8C.c)
 *     sub_18008C038 @ 0x18008C038 (sub_18008C038.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

_BOOL8 sub_18008BF20()
{
  __int64 NtSystemRoot; // rax
  int v1; // ebx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v3[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v1 = sub_18008C038(NtSystemRoot, v3);
  if ( v1 >= 0 )
  {
    v1 = sub_18008BF8C(v3[0], &v4);
    if ( v1 >= 0 )
    {
      v1 = 0;
      dword_180162718 = v4;
    }
  }
  if ( v3[0] )
    ZwClose(v3[0]);
  return v1 >= 0;
}
