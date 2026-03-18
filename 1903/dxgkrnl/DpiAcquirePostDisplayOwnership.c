/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1C029DB1C
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1C029BD50 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1C029BD70 (DpAcquirePostDisplayOwnership2.c)
 *     DpGetPostDisplayInfoPlusEdid @ 0x1C029C130 (DpGetPostDisplayInfoPlusEdid.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax

  v6 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    if ( a1 && a2 && KeGetCurrentThread() == (struct _KTHREAD *)qword_1C00A2A90 && a1 == qword_1C00A2A98 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 2 )
        {
          v9 = *(_DWORD *)(v8 + 236);
          if ( v9 != 2 && (*(_DWORD *)(v8 + 240) != 2 || ((v9 - 3) & 0xFFFFFFFC) != 0 || v9 == 4) )
            *(_BYTE *)(v8 + 3904) |= 4u;
        }
      }
      if ( qword_1C00A29D8 == a1 )
      {
        memmove(a2, &dword_1C00A29E8, 0x20uLL);
        if ( a3 )
          *a3 ^= ((unsigned __int8)dword_1C00A2AD4 ^ (unsigned __int8)*a3) & 0xF;
      }
      else
      {
        v10 = WdLogNewEntry5_WdEvent(v8);
        *(_QWORD *)(v10 + 24) = 0LL;
        WdLogEvent5_WdEvent(v10);
        memset(a2, 0, 0x20uLL);
        a2[6] = -1;
        if ( a3 )
          *a3 &= 0xFFFFFFF0;
      }
    }
    else
    {
      v6 = -1073741811;
      v11 = WdLogNewEntry5_WdError(a1, a2, a1);
      *(_QWORD *)(v11 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v11);
    }
  }
  else
  {
    v6 = -1073741811;
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v7[3] = 275LL;
    v7[4] = 21LL;
    v7[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  return v6;
}
