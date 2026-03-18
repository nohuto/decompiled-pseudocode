/*
 * XREFs of ControllerEnable @ 0x1C000B7A4
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000DABC (NVMeControllerInitPart1.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerEnable(__int64 a1)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 164) / 0xAu;
  v3 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 136) + 20LL) |= 1u;
  _InterlockedOr(v7, 0);
  v4 = *(_QWORD *)(a1 + 136);
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 28);
    if ( (v5 & 1) != 0 || v3 >= v2 )
      break;
    StorPortStallExecution(10000LL);
    v4 = *(_QWORD *)(a1 + 136);
    ++v3;
  }
  return v5 & 1;
}
