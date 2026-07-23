/*
 * XREFs of sub_1800F8260 @ 0x1800F8260
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     sub_1800F7C30 @ 0x1800F7C30 (sub_1800F7C30.c)
 *     sub_1800F7DA0 @ 0x1800F7DA0 (sub_1800F7DA0.c)
 *     sub_1800F7EF4 @ 0x1800F7EF4 (sub_1800F7EF4.c)
 *     sub_1800F8464 @ 0x1800F8464 (sub_1800F8464.c)
 *     sub_1800F8558 @ 0x1800F8558 (sub_1800F8558.c)
 */

__int64 __fastcall sub_1800F8260(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 v6; // rbx
  ULONG_PTR v8; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER v9; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  v8 = 0x10000LL;
  v9.QuadPart = 0LL;
  if ( !byte_180166A30 )
  {
    if ( byte_1801627E9 )
    {
      byte_1801627E9 = 0;
      _InterlockedExchange(&dword_180166A34, 1);
      if ( ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &qword_180166A10,
             0LL,
             0LL,
             &v9,
             &v8,
             ViewShare,
             0,
             4u) < 0 )
        return 0LL;
      if ( !qword_180166A10 )
        return 0LL;
      *((_DWORD *)qword_180166A10 + 12) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !sub_1800F7DA0() )
        return 0LL;
      a3 = (unsigned __int64)Src;
    }
    if ( qword_180166A10 )
    {
      if ( !a2 )
      {
        sub_1800F7C30();
        if ( *((_DWORD *)qword_180166A10 + 15) )
        {
          if ( !(unsigned __int8)sub_1800F8558() )
            return 0LL;
          *((_DWORD *)qword_180166A10 + 15) = 0;
          dword_1801627EC = 0;
        }
        sub_1800F8558();
        return 0LL;
      }
      v6 = sub_1800F7EF4((a3 >> 3) | 0xE000000000000000uLL);
      if ( (unsigned __int8)sub_1800F8464(0x20uLL, &Src, 8uLL) && v6 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
          Src,
          a4,
          (const void *)(v6 + 24),
          *(unsigned __int16 *)(v6 + 16));
      }
    }
  }
  return 0LL;
}
