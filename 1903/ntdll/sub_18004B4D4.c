/*
 * XREFs of sub_18004B4D4 @ 0x18004B4D4
 * Callers:
 *     sub_18004B760 @ 0x18004B760 (sub_18004B760.c)
 *     sub_1800F1080 @ 0x1800F1080 (sub_1800F1080.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18004B410 @ 0x18004B410 (sub_18004B410.c)
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 */

__int64 __fastcall sub_18004B4D4(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rcx
  char v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+21h] [rbp-27h]

  v10 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v9 = 1;
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v3 = *(_QWORD *)(a1 + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v5 = 0;
    }
    else if ( *(_WORD *)(a1 + 416) )
    {
      v5 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 416) = 1;
      v10 = 1;
      v4 = (unsigned __int64)qword_1801627A0 >> 4;
      LOWORD(v4) = ((unsigned __int64)qword_1801627A0 >> 4) + 2;
      v5 = sub_18004B6C4(a1, v4);
      if ( v5 >= 0 )
      {
        sub_18004B410(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 408) = 0LL;
        *(_BYTE *)(a1 + 418) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = sub_18004B17C(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( v6 )
        {
          *(_QWORD *)(a1 + 408) = v6;
          *(_WORD *)(a1 + 418) = 514;
          if ( (RtlGetSuiteMask(v7) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)qword_1801627A0 >> 4;
        }
        else
        {
          v5 = -1073741801;
        }
        --*(_WORD *)(a1 + 416);
        v10 = 0;
        v9 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v10 )
    --*(_WORD *)(a1 + 416);
  return (unsigned int)v5;
}
