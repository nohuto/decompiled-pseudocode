/*
 * XREFs of ?SetBlendMode@CD3DBatchExecutionContext@@EEAAXW4Enum@BlendMode@@@Z @ 0x18005AD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::SetBlendMode(__int64 a1, int a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  __int64 v5; // rsi
  __int64 result; // rax

  v2 = a2;
  if ( a2 != *(_DWORD *)(a1 + 64) )
  {
    v4 = 4;
    if ( (*(_DWORD *)(a1 + 64) == 22) != (a2 == 22) )
      v4 = -2147483642;
    *(_DWORD *)(a1 + 40) |= v4;
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v5 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 16) + 640LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v5 + 16) + 640LL),
        *(_QWORD *)(v5 + 24),
        0LL);
      *(_QWORD *)(v5 + 40) = 0LL;
      *(_DWORD *)(v5 + 48) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 64) + 640LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v5 + 64) + 640LL),
        *(_QWORD *)(v5 + 72),
        0LL);
      *(_QWORD *)(v5 + 88) = 0LL;
      *(_DWORD *)(v5 + 96) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 96),
        *(unsigned int *)(a1 + 88),
        0LL);
      ++*(_DWORD *)(a1 + 104);
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 96) = 0;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 280LL))(
               *(_QWORD *)(a1 + 16),
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v2 + 1184),
               0LL,
               0xFFFFFFFFLL);
    *(_DWORD *)(a1 + 64) = v2;
  }
  return result;
}
