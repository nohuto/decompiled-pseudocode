/*
 * XREFs of sub_1800DCD38 @ 0x1800DCD38
 * Callers:
 *     sub_1800DCC38 @ 0x1800DCC38 (sub_1800DCC38.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_1800DCD38(void *a1)
{
  unsigned int v2; // ebx
  struct _PEB *v3; // rax
  struct _PEB *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = -1073741823;
  ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessWow64Information, &v5, 8u, 0LL);
  v3 = NtCurrentPeb();
  if ( v3 && (v5 == v3 || !v5) )
  {
    v3->WerShipAssertPtr = a1;
    return 0;
  }
  return v2;
}
