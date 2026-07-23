/*
 * XREFs of HvpGetCellPaged @ 0x1406855A0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall HvpGetCellPaged(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3)
{
  unsigned __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 v9; // r9
  unsigned int v10; // edx

  if ( a2 == -1 )
    KeBugCheckEx(0x51u, 0x32uLL, 1uLL, BugCheckParameter3, 0xFFFFFFFFuLL);
  if ( HvShutdownComplete == 1 )
    return 0LL;
  v6 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(632LL * (a2 >> 31) + BugCheckParameter3 + 280) + 8LL * ((a2 >> 21) & 0x3FF))
                + 24LL * ((a2 >> 12) & 0x1FF));
  v7 = v6[1];
  *(_WORD *)(a3 + 4) |= 1u;
  CurrentThread = KeGetCurrentThread();
  v9 = *v6 + (v7 & 0xFFFFFFFFFFFFFFF0uLL) + (a2 & 0xFFF);
  LODWORD(v6) = BYTE4(CurrentThread[1].Queue);
  LODWORD(v7) = CurrentThread[1].WaitListEntry.Flink;
  BYTE4(CurrentThread[1].Queue) = 2;
  v10 = (_DWORD)v6 + 4 * v7;
  BYTE4(CurrentThread[1].Queue) = ((_BYTE)v6 + 4 * v7) & 3;
  result = v9 + 4;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v10 >> 2;
  *(_DWORD *)a3 = a2;
  return result;
}
