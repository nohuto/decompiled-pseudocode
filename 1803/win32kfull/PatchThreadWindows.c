/*
 * XREFs of PatchThreadWindows @ 0x1C006CC00
 * Callers:
 *     <none>
 * Callees:
 *     DisassociateShellFrameAppThreads @ 0x1C006CD18 (DisassociateShellFrameAppThreads.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  __int64 *i; // rdi
  __int64 v6; // r14
  __int64 v7; // r8
  __int16 v8; // cx
  __int64 v9; // rax
  __int64 v10; // rax

  DisassociateShellFrameAppThreads(a1);
  v2 = gSharedInfo[1];
  result = gpKernelHandleTable;
  v4 = v2 + 32LL * giheLast;
  for ( i = (__int64 *)gpKernelHandleTable; v2 <= v4; i += 3 )
  {
    if ( *(_BYTE *)(v2 + 24) == 1 && (struct tagTHREADINFO *)i[1] == a1 )
    {
      v6 = *i;
      if ( (*(_BYTE *)(v2 + 25) & 1) == 0
        || (v10 = *(_QWORD *)(v6 + 40), *(_QWORD *)(v10 + 120))
        || (result = *(unsigned __int8 *)(v10 + 18), (result & 4) == 0) )
      {
        v7 = *(_QWORD *)(v6 + 40);
        v8 = *(_WORD *)(v7 + 42);
        if ( (unsigned __int16)(v8 - 666) <= 6u )
        {
          v9 = *(_QWORD *)(gpsi + 8LL * ((v8 & 0x3FFFu) - 666) + 272);
        }
        else
        {
          v9 = 0LL;
          if ( v8 == 694 )
            v9 = 5LL;
        }
        *(_QWORD *)(v7 + 120) = v9;
        SetOrClrWF(1LL, v6, 516LL, 1LL);
        result = SetOrClrWF(0LL, v6, 520LL, 1LL);
      }
    }
    v2 += 32LL;
  }
  return result;
}
