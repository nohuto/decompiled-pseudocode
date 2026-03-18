/*
 * XREFs of FreeInputContext @ 0x1C0117DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeInputContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx

  result = HMMarkObjectDestroy(a1);
  v3 = 0LL;
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 784LL);
    if ( v4 )
    {
      do
      {
        v5 = *(_QWORD *)(v4 + 56);
        if ( v5 == a1 )
          break;
        v4 = *(_QWORD *)(v4 + 56);
      }
      while ( v5 );
      if ( v4 )
      {
        v6 = *(_QWORD *)(a1 + 56);
        if ( v6 )
          v3 = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(*(_QWORD *)(v4 + 40) + 16LL) = v3;
        *(_QWORD *)(v4 + 56) = v6;
      }
    }
    return HMFreeObject(a1);
  }
  return result;
}
