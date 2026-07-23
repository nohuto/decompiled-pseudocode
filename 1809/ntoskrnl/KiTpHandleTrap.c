/*
 * XREFs of KiTpHandleTrap @ 0x14029C3B4
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiTpWriteMemory @ 0x14029C508 (KiTpWriteMemory.c)
 *     KiTpEmulateInstruction @ 0x14029EAEC (KiTpEmulateInstruction.c)
 */

bool __fastcall KiTpHandleTrap(__int64 a1, __int64 a2, unsigned __int8 a3, char a4)
{
  unsigned __int64 v7; // r10
  _KPROCESS *Process; // r11
  _QWORD *i; // rbx
  unsigned __int8 *v10; // rdx
  _KPROCESS *v11; // rcx
  unsigned __int8 (__fastcall *v12)(__int64, _QWORD); // rax
  int v13; // eax
  bool v15; // [rsp+20h] [rbp-28h]
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = *(_QWORD *)(a2 + 248);
  if ( a3 )
    Process = KeGetCurrentThread()->Process;
  else
    Process = 0LL;
  _InterlockedAdd(&KiTpActiveTrapsCount, 1u);
  for ( i = *(_QWORD **)(KiTpHashTable + 8 * ((v7 >> 4) & 0x3FFF)); ; i = (_QWORD *)*i )
  {
    if ( !i )
    {
      v15 = *(unsigned __int8 *)v7 != 204;
      goto LABEL_17;
    }
    v10 = (unsigned __int8 *)i[1];
    if ( (unsigned __int8 *)v7 == v10 )
    {
      v11 = (_KPROCESS *)i[2];
      if ( Process == v11 )
        break;
    }
  }
  if ( !a4 || !KiDynamicTraceEnabled )
  {
    v13 = KiTpWriteMemory(v11, v10, (char *)i + 41);
    goto LABEL_16;
  }
  v12 = (unsigned __int8 (__fastcall *)(__int64, _QWORD))i[3];
  if ( !v12 || !v12(a2, i[4]) )
  {
    v16[0] = a1;
    v16[1] = a2;
    v16[2] = a3;
    v13 = KiTpEmulateInstruction((char *)i + 42, v16);
LABEL_16:
    v15 = v13 >= 0;
    goto LABEL_17;
  }
  v15 = 1;
LABEL_17:
  _InterlockedDecrement(&KiTpActiveTrapsCount);
  return v15;
}
