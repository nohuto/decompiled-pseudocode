/*
 * XREFs of sub_18001564C @ 0x18001564C
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x180007950 (RtlpLoadMachineUIByPolicy.c)
 *     sub_180007D24 @ 0x180007D24 (sub_180007D24.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     RtlpLoadUserUIByPolicy @ 0x180009270 (RtlpLoadUserUIByPolicy.c)
 *     sub_180012DAC @ 0x180012DAC (sub_180012DAC.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 * Callees:
 *     sub_1800156DC @ 0x1800156DC (sub_1800156DC.c)
 */

__int64 __fastcall sub_18001564C(int a1, char a2, __int64 a3)
{
  int v5; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = 4;
  if ( a1 >= 1 )
    v5 = a1;
  result = sub_1800156DC(64, v5, 6, 0, 0, (__int64)&v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v5;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
