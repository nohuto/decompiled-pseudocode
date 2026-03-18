/*
 * XREFs of KdpPrompt @ 0x140956DFC
 * Callers:
 *     KdpTrap @ 0x140957FB8 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x140956980 (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x140957298 (KdpQuickMoveMemory.c)
 *     KdpPromptString @ 0x140957E28 (KdpPromptString.c)
 */

__int64 __fastcall KdpPrompt(
        unsigned __int64 a1,
        unsigned __int16 a2,
        volatile void *a3,
        unsigned __int16 a4,
        char a5,
        __int64 a6)
{
  unsigned __int64 v7; // rdi
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // r14
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  unsigned __int64 v12; // r9
  void *v13; // rsp
  _BYTE *v14; // rcx
  char v15; // bl
  _BYTE v17[480]; // [rsp+0h] [rbp-400h] BYREF
  _BYTE v18[480]; // [rsp+200h] [rbp-200h] BYREF
  _WORD v19[2]; // [rsp+400h] [rbp+0h] BYREF
  int v20; // [rsp+404h] [rbp+4h]
  _BYTE *v21; // [rsp+408h] [rbp+8h]
  __int64 v22; // [rsp+410h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+418h] [rbp+18h]
  _BYTE *v24; // [rsp+420h] [rbp+20h]

  v7 = a1;
  v20 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v8 = 512;
  if ( a2 <= 0x200u )
    v8 = a2;
  v9 = 512;
  if ( a4 <= 0x200u )
    v9 = a4;
  if ( a5 )
  {
    if ( v8 )
    {
      v10 = a1 + v8;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v11 = alloca(512LL);
    v24 = v18;
    KdpQuickMoveMemory(v18, v7, v8);
    v7 = v12;
    ProbeForWrite(a3, v9, 1u);
    v13 = alloca(512LL);
    v14 = v17;
    v24 = v17;
  }
  else
  {
    v14 = a3;
  }
  v21 = v14;
  v19[0] = 0;
  v19[1] = v9;
  v23 = v7;
  LOWORD(v22) = v8;
  KdLogDbgPrint((unsigned __int16 *)&v22);
  v15 = KdEnterDebugger(a6);
  while ( (unsigned __int8)KdpPromptString(&v22, v19) == 1 )
    ;
  KdExitDebugger(v15);
  if ( a5 == 1 )
    KdpQuickMoveMemory(a3, v21, v19[0]);
  return v19[0];
}
