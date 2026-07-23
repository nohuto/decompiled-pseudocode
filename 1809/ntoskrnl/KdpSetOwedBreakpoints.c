/*
 * XREFs of KdpSetOwedBreakpoints @ 0x14091A10C
 * Callers:
 *     KdSetOwedBreakpoints @ 0x14028D1E0 (KdSetOwedBreakpoints.c)
 * Callees:
 *     KdEnterDebugger @ 0x140916D40 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x1409198A8 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x140919E64 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x14091A04C (KdpRemoveBreakpoint.c)
 */

void __fastcall KdpSetOwedBreakpoints(__int64 a1)
{
  _KPROCESS **v1; // rdx
  unsigned __int64 v2; // rcx
  _KPROCESS *Process; // rbp
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  char v8; // si
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int inserted; // eax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v1 = (_KPROCESS **)&unk_140424328;
    v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( ((_DWORD)v1[3] & 0xA) != 0 )
      {
        v4 = (unsigned __int64)*(v1 - 1);
        if ( v4 >= 0xFFFF800000000000uLL || *v1 == Process )
        {
          v5 = v2 + 4096;
          v6 = v4 & ~(unsigned __int64)*((unsigned __int8 *)v1 + 29);
          if ( v6 >= v2 && v6 < v5 )
            break;
          v7 = v6 + *((unsigned __int8 *)v1 + 28);
          if ( v7 >= v6 && v7 > v2 && v7 <= v5 )
            break;
        }
      }
      v1 += 5;
      if ( (__int64)v1 >= (__int64)&unk_140424828 )
        return;
    }
    v8 = KdEnterDebugger(0LL);
    KdpOweBreakpoint = 0;
    v9 = (unsigned __int8 *)&unk_140424345;
    do
    {
      if ( (*(_DWORD *)(v9 - 5) & 0xA) != 0 )
      {
        v10 = *(_QWORD *)(v9 - 37);
        if ( v10 >= 0xFFFF800000000000uLL || *(_KPROCESS **)(v9 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((PVOID)(v10 & ~(unsigned __int64)*v9), (__int64)&v13, *(v9 - 1), 4) >= 0 )
          {
            v11 = (__int64)(v9 - 37);
            if ( (*(_DWORD *)(v9 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v9 - 13) = v13;
              inserted = KdpInsertBreakpoint(v11, &v13);
              if ( inserted )
                *(_DWORD *)(v9 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v11, &v13);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v9 += 40;
    }
    while ( (__int64)v9 < (__int64)byte_140424845 );
    KdExitDebugger(v8);
  }
}
