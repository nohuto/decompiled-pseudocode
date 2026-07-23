/*
 * XREFs of KdpPrompt @ 0x140919398
 * Callers:
 *     KdpTrap @ 0x14091A518 (KdpTrap.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 *     KdLogDbgPrint @ 0x140918F20 (KdLogDbgPrint.c)
 *     KdpQuickMoveMemory @ 0x140919B04 (KdpQuickMoveMemory.c)
 *     KdpPromptString @ 0x14091A3A8 (KdpPromptString.c)
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
  _WORD v19[4]; // [rsp+400h] [rbp+0h] BYREF
  _BYTE *v20; // [rsp+408h] [rbp+8h]
  _BYTE *v21; // [rsp+410h] [rbp+10h]
  unsigned __int16 v22; // [rsp+418h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+420h] [rbp+20h]

  v7 = a1;
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
    v21 = v18;
    KdpQuickMoveMemory(v18, v7, v8);
    v7 = v12;
    ProbeForWrite(a3, v9, 1u);
    v13 = alloca(512LL);
    v14 = v17;
    v21 = v17;
  }
  else
  {
    v14 = a3;
  }
  v20 = v14;
  v19[0] = 0;
  v19[1] = v9;
  v23 = v7;
  v22 = v8;
  KdLogDbgPrint(&v22);
  v15 = KdEnterDebugger(a6);
  while ( (unsigned __int8)KdpPromptString(&v22, v19) == 1 )
    ;
  KdExitDebugger(v15);
  if ( a5 == 1 )
    KdpQuickMoveMemory(a3, v20, v19[0]);
  return v19[0];
}
