/*
 * XREFs of sub_180050F4C @ 0x180050F4C
 * Callers:
 *     sub_180050ED4 @ 0x180050ED4 (sub_180050ED4.c)
 *     sub_180076BD0 @ 0x180076BD0 (sub_180076BD0.c)
 *     RtlWalkHeap @ 0x1800EFB60 (RtlWalkHeap.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 * Callees:
 *     sub_180050F9C @ 0x180050F9C (sub_180050F9C.c)
 *     sub_1800F14C0 @ 0x1800F14C0 (sub_1800F14C0.c)
 */

__int64 __fastcall sub_180050F4C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 *v5; // rcx
  char *v6; // rdx

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return sub_1800F14C0();
  v3 = 0LL;
  if ( (dword_18016273C & 2) != 0 && *(_QWORD *)a2 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
    *(_QWORD *)a2 -= *(_QWORD *)(*(_QWORD *)a2 - 16LL);
  result = sub_180050F9C();
  if ( (dword_18016273C & 2) != 0 && (_DWORD)result != -2147483622 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
  {
    v5 = *(__int64 **)a2;
    if ( *(_QWORD *)a2 )
    {
      v3 = *v5;
      v6 = (char *)v5 + *v5;
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(a2 + 8) -= v3;
    *(_QWORD *)a2 = v6;
  }
  return result;
}
