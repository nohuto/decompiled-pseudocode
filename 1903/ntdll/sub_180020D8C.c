/*
 * XREFs of sub_180020D8C @ 0x180020D8C
 * Callers:
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_1800D16A0 @ 0x1800D16A0 (sub_1800D16A0.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_180020E1C @ 0x180020E1C (sub_180020E1C.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180020D8C(unsigned __int64 a1, int a2)
{
  int v3; // esi
  NTSTATUS v4; // eax
  int v5; // ebx
  int v6; // ecx
  DWORD v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = sub_18001C4DC(a1, 1, 3u, &v7, &v8);
  v5 = v8;
  if ( v4 < 0 )
    v5 = 0;
  RtlAcquireSRWLockExclusive(&Address);
  sub_180035F18(0LL);
  sub_180020E1C(v6, v3, v5, a2, v7);
  sub_180035F18(1LL);
  RtlReleaseSRWLockExclusive(&Address);
}
