/*
 * XREFs of LdrRemoveLoadAsDataTable @ 0x180073440
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180072080 (LdrAddLoadAsDataTable.c)
 *     LdrResRelease @ 0x18008BB60 (LdrResRelease.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 * Callees:
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 */

__int64 __fastcall LdrRemoveLoadAsDataTable(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  wchar_t *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  bool v11; // zf
  unsigned int v12; // esi
  __int64 v13; // r14
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r15
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 Heap; // rax
  unsigned int v25; // [rsp+24h] [rbp-34h]

  if ( String2 )
  {
    v7 = 0LL;
    v8 = -1073741511;
    sub_18001A790();
    RtlEnterCriticalSection((__int64)&unk_180164300);
    v9 = dword_180164330;
    if ( dword_180164330 )
    {
      if ( (a4 & 0xE00) == 0 )
      {
        v10 = qword_180164328;
        goto LABEL_5;
      }
      if ( a2 )
      {
        *a2 = 0LL;
        v16 = v9;
        v10 = qword_180164328;
        while ( v16 )
        {
          if ( (a4 & 0x800) != 0 )
          {
            v17 = 48LL * (v16 - 1);
            if ( *(wchar_t **)(v17 + v10 + 24) == String2 )
            {
              v7 = *(wchar_t **)(v17 + v10);
              break;
            }
          }
          else if ( (a4 & 0x400) != 0
                 && (v18 = v16 - 1, v19 = 6 * v18, (v20 = *(const wchar_t **)(v10 + 48 * v18 + 8)) != 0LL) )
          {
            if ( !wcsicmp(v20, String2) )
            {
              v10 = qword_180164328;
              v7 = *(wchar_t **)(qword_180164328 + 8 * v19);
              v9 = dword_180164330;
              break;
            }
            v9 = dword_180164330;
            v10 = qword_180164328;
          }
          else if ( (a4 & 0x200) != 0 )
          {
            v21 = 48LL * (v16 - 1);
            if ( *(wchar_t **)(v21 + v10) == String2 )
            {
              v7 = *(wchar_t **)(v21 + v10);
              break;
            }
          }
          --v16;
        }
        if ( v7 )
          *a2 = v7;
        if ( (a4 & 0x200000) != 0 )
        {
          if ( v7 && a3 )
          {
            *a3 = *(_QWORD *)(v10 + 48LL * (v16 - 1) + 16);
            if ( (a4 & 0x40000) != 0 )
              ++*(_DWORD *)(v10 + 48LL * (v16 - 1) + 32);
            v8 = 0;
          }
        }
        else
        {
          v11 = v7 == 0LL;
          if ( !v7 )
          {
LABEL_6:
            if ( v11 )
              v7 = String2;
            v12 = v9;
            v25 = v9;
            while ( v12 )
            {
              v13 = v12 - 1;
              if ( *(wchar_t **)(v10 + 48 * v13) == v7 )
              {
                if ( *(_QWORD *)(v10 + 48 * v13 + 8) )
                {
                  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v10 + 48 * v13 + 8));
                  v10 = qword_180164328;
                  *(_QWORD *)(qword_180164328 + 48 * v13 + 8) = 0LL;
                  v12 = v25;
                  v9 = dword_180164330;
                }
                v14 = *(volatile signed __int32 **)(v10 + 48 * v13 + 40);
                if ( (unsigned __int64)v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                {
                  RtlReleaseActivationContext(v14);
                  v10 = qword_180164328;
                  *(_QWORD *)(qword_180164328 + 48 * v13 + 40) = 0LL;
                  v9 = dword_180164330;
                }
                if ( v12 != v9 )
                {
                  *(_OWORD *)(v10 + 48 * v13) = *(_OWORD *)(v10 + 48LL * (v9 - 1));
                  *(_OWORD *)(v10 + 48 * v13 + 16) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 16);
                  *(_OWORD *)(v10 + 48 * v13 + 32) = *(_OWORD *)(v10 + 48LL * (v9 - 1) + 32);
                }
                dword_180164330 = --v9;
                v15 = (unsigned int)(dword_1801642E8 - 32);
                if ( v9 < (unsigned int)v15 )
                {
                  Heap = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, qword_180164328, 48 * v15);
                  v10 = Heap;
                  if ( !Heap )
                  {
                    v8 = -1073741801;
                    goto LABEL_50;
                  }
                  qword_180164328 = Heap;
                  dword_1801642E8 -= 32;
                  v9 = dword_180164330;
                }
                v8 = 0;
              }
              v12 = v13;
              v25 = v13;
            }
            goto LABEL_50;
          }
          v22 = 48LL * (v16 - 1);
          if ( (int)--*(_DWORD *)(v22 + v10 + 32) <= 0 )
          {
LABEL_5:
            v11 = v7 == 0LL;
            goto LABEL_6;
          }
          v8 = -1073740024;
        }
      }
      else
      {
        v8 = -1073741811;
      }
    }
LABEL_50:
    RtlLeaveCriticalSection((__int64)&unk_180164300);
    return v8;
  }
  return 3221225485LL;
}
