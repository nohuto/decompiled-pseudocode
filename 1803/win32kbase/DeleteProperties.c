/*
 * XREFs of DeleteProperties @ 0x1C00662F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeleteProperties(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // esi
  PVOID *v4; // rbx
  __int64 result; // rax
  __int16 v6; // cx

  v2 = *(_QWORD *)(a1 + 120);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (PVOID *)(v2 + 8);
  if ( v3 )
  {
    do
    {
      v6 = *((_WORD *)v4 + 5);
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x8001) == 0x8001 )
        {
          (**(void (__fastcall ***)(PVOID))*v4)(*v4);
        }
        else if ( (v6 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *v4);
        }
        else if ( (v6 & 4) == 0 )
        {
          Win32FreePool((__int64)*v4);
        }
      }
      v4 += 2;
      --v3;
    }
    while ( v3 );
    v2 = *(_QWORD *)(a1 + 120);
  }
  result = Win32FreePool(v2);
  *(_QWORD *)(a1 + 120) = 0LL;
  return result;
}
