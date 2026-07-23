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

_BOOL8 __fastcall sub_18008BF20(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  PWSTR NtSystemRoot; // rax
  int v4; // ebx
  HANDLE Handle[3]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+58h] [rbp+20h] BYREF

  Handle[0] = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v4 = sub_18008C038(NtSystemRoot, Handle);
  if ( v4 >= 0 )
  {
    v4 = sub_18008BF8C(Handle[0], &v7);
    if ( v4 >= 0 )
    {
      v4 = 0;
      dword_180162718 = v7;
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return v4 >= 0;
}
