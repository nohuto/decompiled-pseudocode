/*
 * XREFs of CrmActivityTimeSpentUpdate @ 0x180034338
 * Callers:
 *     CrmSrvActivityStop @ 0x180033718 (CrmSrvActivityStop.c)
 *     CrmActivityListenerCallback @ 0x180033AE0 (CrmActivityListenerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityTimeSpentUpdate(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 120) )
  {
    result = RtlQueryUnbiasedInterruptTime(&v7);
    v5 = v7;
    v6 = v7 - *(_QWORD *)(a1 + 152);
    if ( a2 && (a2 != 2 || (result = *(unsigned int *)(a1 + 72), *(_DWORD *)(a1 + 76) == (_DWORD)result)) )
      *(_QWORD *)(a1 + 160) += v6;
    else
      *(_QWORD *)(a1 + 168) += v6;
    *(_QWORD *)(a1 + 152) = v5;
  }
  return result;
}
