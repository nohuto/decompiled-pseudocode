/*
 * XREFs of sub_180035E30 @ 0x180035E30
 * Callers:
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     sub_180077EA8 @ 0x180077EA8 (sub_180077EA8.c)
 *     RtlConvertSRWLockExclusiveToShared @ 0x180084470 (RtlConvertSRWLockExclusiveToShared.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 */

int __fastcall sub_180035E30(volatile signed __int64 *a1, signed __int64 a2, char a3)
{
  _QWORD *v4; // r10
  __int64 v5; // r8
  signed __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rbx
  _QWORD *v9; // rax

  while ( a3 || (a2 & 1) == 0 )
  {
LABEL_3:
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v5 )
    {
      do
      {
        v9 = v4;
        v4 = (_QWORD *)*v4;
        v4[2] = v9;
        v5 = v4[1];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v5;
    }
    LODWORD(v6) = *(_DWORD *)(v5 + 36);
    if ( (v6 & 1) != 0 )
    {
      if ( a3 )
      {
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        return v6;
      }
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
        *(_QWORD *)(v5 + 16) = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        do
        {
LABEL_8:
          v8 = *(_QWORD *)(v5 + 16);
          _interlockedbittestandset((volatile signed __int32 *)(v5 + 36), 2u);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v5 + 36), 1u) )
            LODWORD(v6) = ZwAlertThreadByThreadId(*(HANDLE *)(v5 + 24));
          v5 = v8;
        }
        while ( v8 );
        return v6;
      }
    }
    v6 = _InterlockedCompareExchange64(a1, a3 != 0 ? 0x11 : 0, a2);
    v7 = a2 == v6;
    a2 = v6;
    if ( v7 )
      goto LABEL_8;
  }
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v7 = a2 == v6;
    a2 = v6;
    if ( v7 )
      return v6;
    if ( (v6 & 1) == 0 )
      goto LABEL_3;
  }
}
