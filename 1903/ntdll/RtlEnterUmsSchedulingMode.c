/*
 * XREFs of RtlEnterUmsSchedulingMode @ 0x1800F36C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentUmsThread @ 0x18005DB50 (RtlGetCurrentUmsThread.c)
 *     ZwRaiseException @ 0x18009F2D0 (ZwRaiseException.c)
 *     sub_1800A15F0 @ 0x1800A15F0 (sub_1800A15F0.c)
 *     sub_1800F3BA0 @ 0x1800F3BA0 (sub_1800F3BA0.c)
 *     sub_1800F3C68 @ 0x1800F3C68 (sub_1800F3C68.c)
 *     sub_18010A184 @ 0x18010A184 (sub_18010A184.c)
 */

__int64 __fastcall RtlEnterUmsSchedulingMode(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  int CurrentUmsThread; // ebx
  int v7; // eax
  struct _TEB **v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 != 256 )
    return 3221225485LL;
  if ( (int)RtlGetCurrentUmsThread(&v8) >= 0 )
    return 3221225659LL;
  result = sub_1800F3BA0(v4, v1);
  if ( (int)result >= 0 )
  {
    CurrentUmsThread = RtlGetCurrentUmsThread(&v8);
    if ( CurrentUmsThread >= 0 )
    {
      CurrentUmsThread = sub_18010A184(v8);
      if ( CurrentUmsThread >= 0 )
      {
        sub_1800A15F0(v2, v3);
        CurrentUmsThread = 0;
      }
    }
    v7 = sub_1800F3C68();
    if ( v7 < 0 && CurrentUmsThread >= 0 )
      return (unsigned int)v7;
    return (unsigned int)CurrentUmsThread;
  }
  return result;
}
