/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x18014C694
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801495E0 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(CWatchdogTimer *this)
{
  signed int LastError; // eax
  char *v3; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER v5; // [rsp+40h] [rbp+8h] BYREF

  v5.QuadPart = 0LL;
  *((_BYTE *)this + 17) = 1;
  if ( !SetWaitableTimer(*((HANDLE *)this + 1), &v5, 0, 0LL, 0LL, 0) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  WaitForSingleObject(*(HANDLE *)this, 0xFFFFFFFF);
  v3 = (char *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  if ( (unsigned __int64)(*(_QWORD *)this - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(*(HANDLE *)this);
}
