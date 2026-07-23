/*
 * XREFs of PsspDumpThread @ 0x180113E04
 * Callers:
 *     PsspCaptureThreadInformation @ 0x180113AA8 (PsspCaptureThreadInformation.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A07A0 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x1800A2070 (ZwGetContextThread.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall PsspDumpThread(__int64 *a1, __int16 a2, int a3, int a4, int ThreadInformation, HANDLE ThreadHandle)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r13d
  __int16 v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  NTSTATUS result; // eax
  HANDLE v15; // rsi
  __int16 v16; // ax
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v6 = *((_DWORD *)a1 + 3);
  v7 = *a1;
  v8 = (a4 + 15) & 0xFFFFFFF0;
  v11 = a4;
  v12 = v8 + 128;
  v13 = v6 + v8 + 128;
  if ( v13 < v6 )
    return v13 < v6 ? 0xC0000095 : 0;
  if ( v13 > *((_DWORD *)a1 + 2) )
    return -1073741789;
  memset((void *)v7, 0, 0x80uLL);
  v15 = ThreadHandle;
  result = ZwQueryInformationThread(ThreadHandle, ThreadBasicInformation, (PVOID)v7, 0x30u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( (a2 & 0x400) != 0
      && ZwQueryInformationThread(v15, ThreadLastSystemCall, (PVOID)(v7 + 48), 0x18u, &ReturnLength) < 0 )
    {
      *(_WORD *)(v7 + 56) = -1;
    }
    result = ZwQueryInformationThread(v15, ThreadTimes, (PVOID)(v7 + 72), 0x20u, &ReturnLength);
    if ( result >= 0 )
    {
      result = ZwQueryInformationThread(v15, ThreadQuerySetWin32StartAddress, (PVOID)(v7 + 104), 8u, &ReturnLength);
      if ( result >= 0 )
      {
        result = ZwQueryInformationThread(v15, ThreadIsTerminated, &ThreadInformation, 4u, &ReturnLength);
        if ( result >= 0 )
        {
          v16 = ThreadInformation != 0;
          *(_WORD *)(v7 + 122) &= ~1u;
          *(_WORD *)(v7 + 122) |= v16;
          result = ZwQueryInformationThread(v15, ThreadSuspendCount, &ThreadInformation, 4u, &ReturnLength);
          if ( result >= 0 )
          {
            *(_WORD *)(v7 + 120) = ThreadInformation;
            if ( (a2 & 0x100) != 0 )
            {
              *(_WORD *)(v7 + 122) &= 1u;
              *(_WORD *)(v7 + 122) |= 2 * v11;
              memset((void *)(v7 + 128), 0, v8);
              *(_DWORD *)(v7 + 176) = a3;
              if ( ZwGetContextThread(v15, (PCONTEXT)(v7 + 128)) < 0 )
              {
                *(_WORD *)(v7 + 122) &= 1u;
                v12 = 128;
              }
            }
            *((_DWORD *)a1 + 3) += v12;
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)(v7 + 112) = MEMORY[0x7FFE0014];
            *a1 += v12;
            return 0;
          }
        }
      }
    }
  }
  return result;
}
