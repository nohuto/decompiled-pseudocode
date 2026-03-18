/*
 * XREFs of DestroyEventHook @ 0x1C0056410
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C0056500 (FreeThreadsWinEvents.c)
 *     _UnhookWinEvent @ 0x1C0056FA0 (_UnhookWinEvent.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0053B88 (RemoveHmodDependency.c)
 *     CategoryMaskFromEventRange @ 0x1C00564B8 (CategoryMaskFromEventRange.c)
 */

__int64 __fastcall DestroyEventHook(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 *i; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // r8
  int v9; // ecx

  *(_DWORD *)(a1 + 40) |= 1u;
  v2 = 0;
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    for ( i = (__int64 *)gpWinEventHooks; ; i = (__int64 *)(v5 + 24) )
    {
      v5 = *i;
      if ( !*i )
        break;
      if ( v5 == a1 )
      {
        *i = *(_QWORD *)(a1 + 24);
        break;
      }
    }
    v6 = gpWinEventHooks;
    while ( v6 )
    {
      v7 = CategoryMaskFromEventRange(*(unsigned int *)(v6 + 32), *(unsigned int *)(v6 + 36), v6);
      v6 = *(_QWORD *)(v8 + 24);
      v2 |= v7;
    }
    *(_DWORD *)(gpsi + 1892LL) = v2;
    v9 = *(_DWORD *)(a1 + 72);
    if ( v9 >= 0 )
      RemoveHmodDependency(v9);
    return HMFreeObject(a1);
  }
  return result;
}
