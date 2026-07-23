/*
 * XREFs of _PnpCtxCreateNode @ 0x14073CB0C
 * Callers:
 *     _PnpCtxOpenMachine @ 0x14073C8BC (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x1408F71DC (_PnpCtxRegisterMachineNode.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     _SysCtxOpenMachine @ 0x14073CC58 (_SysCtxOpenMachine.c)
 *     _SysCtxCloseMachine @ 0x140901180 (_SysCtxCloseMachine.c)
 */

__int64 __fastcall PnpCtxCreateNode(
        int *a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        int a5,
        PVOID P,
        int a7,
        HANDLE SourceHandle,
        _QWORD *a9)
{
  _QWORD *v9; // r14
  PVOID v10; // rsi
  PVOID PoolWithTag; // rax
  PVOID v15; // rbx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // edi
  int v21; // ebp
  int v23; // ebp

  v9 = a9;
  v10 = 0LL;
  P = 0LL;
  *a9 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x52504E50u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x98uLL);
  if ( RtlCreateUnicodeString((PUNICODE_STRING)v15 + 2, a2) )
  {
    v18 = a7;
    *((_DWORD *)v15 + 12) = a3;
    v19 = SysCtxOpenMachine(v16, a5, v17, v18, SourceHandle, *a1, (__int64)&P);
    v10 = P;
    v20 = v19;
    if ( v19 >= 0 )
    {
      if ( *(_DWORD *)P < 0xA000000u )
      {
        v20 = -1073741637;
      }
      else
      {
        *((_QWORD *)v15 + 8) = 0LL;
        *((_QWORD *)v15 + 9) = 0LL;
        *((_QWORD *)v15 + 10) = 0LL;
        *((_QWORD *)v15 + 11) = 0LL;
        *((_QWORD *)v15 + 12) = 0LL;
        *((_QWORD *)v15 + 13) = 0LL;
        *((_QWORD *)v15 + 14) = 0LL;
        *((_QWORD *)v15 + 16) = 0LL;
        *((_QWORD *)v15 + 17) = 0LL;
        *((_QWORD *)v15 + 18) = 0LL;
        v21 = a3 - 1;
        if ( v21 )
        {
          v23 = v21 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
            {
              v20 = -1073741811;
              goto LABEL_7;
            }
            *((_QWORD *)v15 + 8) = -1LL;
            *((_QWORD *)v15 + 12) = -1LL;
            *((_QWORD *)v15 + 13) = -1LL;
            *((_QWORD *)v15 + 14) = -1LL;
            *((_QWORD *)v15 + 16) = -1LL;
            *((_QWORD *)v15 + 17) = -1LL;
            *((_QWORD *)v15 + 18) = -1LL;
          }
        }
        *((_QWORD *)v15 + 7) = v10;
        v10 = 0LL;
        *v9 = v15;
        v15 = 0LL;
      }
    }
  }
  else
  {
    v20 = -1073741801;
  }
LABEL_7:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v10 )
    SysCtxCloseMachine(v10);
  return v20;
}
