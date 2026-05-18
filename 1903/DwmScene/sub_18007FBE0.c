/*
 * XREFs of sub_18007FBE0 @ 0x18007FBE0
 * Callers:
 *     sub_180077D74 @ 0x180077D74 (sub_180077D74.c)
 * Callees:
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007FBE0(__int64 a1, __int64 a2)
{
  void *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  void *v7; // rdx

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::wstreambuf::pptr(a1) )
  {
    v4 = **(void ***)(a1 + 32);
    v5 = std::wstreambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    v6 = (__int64)(v5 - (_QWORD)v4) >> 1;
    v7 = v4;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::wstreambuf::gptr(a1) )
  {
    v7 = **(void ***)(a1 + 24);
    v6 = (**(_QWORD **)(a1 + 56) + 2LL * **(int **)(a1 + 80) - (__int64)v7) >> 1;
LABEL_9:
    sub_180026168((char *)a2, v7, v6);
  }
  return a2;
}
