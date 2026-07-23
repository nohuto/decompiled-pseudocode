/*
 * XREFs of KiDisconnectInterruptInternal @ 0x14016D8D4
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14016D794 (KiDisconnectInterruptCommon.c)
 *     KiProcessPendingDisconnect @ 0x14029A250 (KiProcessPendingDisconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiDisconnectInterruptInternal(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned int v5; // r8d
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  v4 = 0;
  v5 = -1073741585;
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(unsigned int *)(a1 + 88);
    v7 = KeGetCurrentPrcb()->InterruptObject[v6];
    if ( !*((_BYTE *)v7 + 93) )
    {
      v9 = (_QWORD *)v7[1];
      if ( !v9 || v9 == v7 + 1 )
        v4 = 1;
    }
    if ( (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v7[10] != KiChainedDispatch
      || v4 )
    {
      HalDisableInterrupt(a2);
      KeGetCurrentPrcb()->InterruptObject[v6] = 0LL;
      v5 = 0;
    }
    else
    {
      if ( (_QWORD *)a1 == v7 )
      {
        v7 = (_QWORD *)(v7[1] - 8LL);
        v7[10] = KiChainedDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = v7;
      }
      v10 = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD **)(a1 + 16);
      if ( *(_QWORD *)(v10 + 8) != a1 + 8 || *v11 != a1 + 8 )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
      v12 = v7[1] - 8LL;
      if ( v7 == (_QWORD *)v12 && *(_BYTE *)(v12 + 93) )
      {
        *(_QWORD *)(v12 + 80) = KiInterruptDispatch;
        KeGetCurrentPrcb()->InterruptObject[v6] = (void *)v12;
      }
      v5 = 296;
    }
    *(_BYTE *)(a1 + 95) = 0;
  }
  return v5;
}
