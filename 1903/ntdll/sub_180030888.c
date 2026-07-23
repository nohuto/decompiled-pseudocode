/*
 * XREFs of sub_180030888 @ 0x180030888
 * Callers:
 *     Callback @ 0x18002EA00 (Callback.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     sub_180030488 @ 0x180030488 (sub_180030488.c)
 *     sub_1800305A0 @ 0x1800305A0 (sub_1800305A0.c)
 *     sub_180030680 @ 0x180030680 (sub_180030680.c)
 *     sub_180030770 @ 0x180030770 (sub_180030770.c)
 *     sub_18007FC20 @ 0x18007FC20 (sub_18007FC20.c)
 *     sub_18010FB10 @ 0x18010FB10 (sub_18010FB10.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall sub_180030888(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _QWORD *v5; // r11
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8

  result = NtCurrentTeb();
  v5 = 0LL;
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v5 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v5 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  *a1 = v5;
  return result;
}
