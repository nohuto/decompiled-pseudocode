/*
 * XREFs of sub_18002F2D4 @ 0x18002F2D4
 * Callers:
 *     sub_18002F270 @ 0x18002F270 (sub_18002F270.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     TpSetDefaultPoolStackInformation @ 0x18007E680 (TpSetDefaultPoolStackInformation.c)
 *     sub_1800803C4 @ 0x1800803C4 (sub_1800803C4.c)
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010E940 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     TpReleasePool @ 0x180081400 (TpReleasePool.c)
 */

void __fastcall sub_18002F2D4(const void **a1, _RTL_SRWLOCK *a2)
{
  volatile signed __int32 *v4; // r8
  signed __int32 v5; // ecx
  signed __int32 v6; // edx
  bool v7; // zf
  signed __int32 v8; // eax
  signed __int32 v9; // eax
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // ecx
  signed __int32 v12; // r8d
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  _TP_POOL *Pool; // [rsp+30h] [rbp+8h]

  Pool = 0LL;
  v4 = (volatile signed __int32 *)*a1;
  _m_prefetchw(*a1);
  v5 = *v4;
  while ( v5 > 1 )
  {
    v6 = v5;
    v8 = _InterlockedCompareExchange(v4, v5 - 1, v5);
    v7 = v5 == v8;
    v5 = v8;
    if ( v7 )
    {
      v9 = v6 - 1;
      goto LABEL_5;
    }
  }
  v9 = 0;
LABEL_5:
  if ( !v9 )
  {
    RtlAcquireSRWLockExclusive(a2);
    v10 = (volatile signed __int32 *)*a1;
    _m_prefetchw(*a1);
    v11 = *v10;
    while ( v11 > 1 )
    {
      v12 = v11;
      v13 = _InterlockedCompareExchange(v10, v11 - 1, v11);
      v7 = v11 == v13;
      v11 = v13;
      if ( v7 )
      {
        v14 = v12 - 1;
        goto LABEL_13;
      }
    }
    v14 = 0;
LABEL_13:
    if ( !v14 )
    {
      Pool = (_TP_POOL *)*a1;
      *a1 = 0LL;
    }
    RtlReleaseSRWLockExclusive(a2);
    if ( Pool )
      TpReleasePool(Pool);
  }
}
