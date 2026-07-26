/*
 * XREFs of ndisQueryWakeUpPatternList @ 0x1C004B7B8
 * Callers:
 *     ndisOidPrePMWOLPatternList @ 0x1C00E7040 (ndisOidPrePMWOLPatternList.c)
 *     ndisOidPreWakeUpPatternList @ 0x1C00E7370 (ndisOidPreWakeUpPatternList.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // al
  __int64 *v9; // r14
  __int64 *i; // r10
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r15d
  char *v15; // r13
  int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rbx
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]
  int v21; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v21 = 0;
  v5 = a2;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0x2Cu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a2, a1, a3);
  if ( !v5 )
    v5 = *(_QWORD *)(a1 + 16);
  v7 = (KSPIN_LOCK *)(v5 + 96);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  NewIrql = v8;
  *(_DWORD *)(v5 + 1864) = 2755284;
  if ( a1 )
    v9 = *(__int64 **)(a1 + 496);
  else
    v9 = *(__int64 **)(v5 + 960);
  for ( i = v9; i; v3 += v13 )
  {
    v11 = *((unsigned int *)i + 14);
    v12 = *((_DWORD *)i + 15) + *((_DWORD *)i + 16);
    i = (__int64 *)*i;
    v13 = v11 + 24;
    if ( v11 + 24 <= (unsigned __int64)v12 )
      v13 = v12;
  }
  v14 = 0;
  if ( *(_DWORD *)(a3 + 48) >= v3 )
  {
    v15 = *(char **)(a3 + 40);
    if ( v9 )
    {
      v16 = 0;
      do
      {
        v17 = *((unsigned int *)v9 + 14);
        v18 = (unsigned int)(v17 + 24);
        if ( v17 + 24 <= (unsigned __int64)(unsigned int)(*((_DWORD *)v9 + 15) + *((_DWORD *)v9 + 16)) )
          v18 = (unsigned int)(*((_DWORD *)v9 + 15) + *((_DWORD *)v9 + 16));
        memmove(v15, v9 + 6, (unsigned int)v18);
        v9 = (__int64 *)*v9;
        v15 += v18;
        v16 += v18;
      }
      while ( v9 );
      v21 = v16;
      v7 = (KSPIN_LOCK *)(v5 + 96);
    }
  }
  else
  {
    *(_DWORD *)(a3 + 56) = v3;
    v14 = -1073676268;
  }
  *(_DWORD *)(a3 + 52) = v21;
  *(_QWORD *)(v5 + 520) = 0LL;
  *(_DWORD *)(v5 + 1864) = 0;
  KeReleaseSpinLock(v7, NewIrql);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(0x2Du, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v5, a1, a3, v14);
  return v14;
}
