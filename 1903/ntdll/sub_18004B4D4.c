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

__int64 __fastcall sub_18004B4D4(__int64 HeapHandle)
{
  __int64 v3; // rax
  int v4; // edi
  PVOID v5; // r14
  char v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+21h] [rbp-27h]

  v8 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(HeapHandle + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(HeapHandle + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
    v7 = 1;
    if ( *(_BYTE *)(HeapHandle + 418) == 2 )
      v3 = *(_QWORD *)(HeapHandle + 408);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *(_WORD *)(HeapHandle + 416) )
    {
      v4 = -1073741794;
    }
    else
    {
      *(_WORD *)(HeapHandle + 416) = 1;
      v8 = 1;
      v4 = sub_18004B6C4((PVOID)HeapHandle);
      if ( v4 >= 0 )
      {
        sub_18004B410((__int64 *)HeapHandle, *(_QWORD *)(HeapHandle + 312));
        *(_QWORD *)(HeapHandle + 408) = 0LL;
        *(_BYTE *)(HeapHandle + 418) = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
        v5 = sub_18004B17C(HeapHandle);
        RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
        if ( v5 )
        {
          *(_QWORD *)(HeapHandle + 408) = v5;
          *(_WORD *)(HeapHandle + 418) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            *(_QWORD *)(HeapHandle + 176) = (unsigned __int64)qword_1801627A0 >> 4;
        }
        else
        {
          v4 = -1073741801;
        }
        --*(_WORD *)(HeapHandle + 416);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(HeapHandle + 352));
  if ( v8 )
    --*(_WORD *)(HeapHandle + 416);
  return (unsigned int)v4;
}
