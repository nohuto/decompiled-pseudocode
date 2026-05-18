/*
 * XREFs of ?ReleaseExtraDataSection@CApiPortClient@@AEAAXXZ @ 0x1800046C4
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x1800040C8 (--1CApiPortClient@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApiPortClient::ReleaseExtraDataSection(CApiPortClient *this)
{
  PVOID v1; // rbx
  HANDLE CurrentProcess; // rax

  EnterCriticalSection(&CriticalSection);
  v1 = BaseAddress;
  if ( BaseAddress )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v1);
    BaseAddress = 0LL;
  }
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  LeaveCriticalSection(&CriticalSection);
}
