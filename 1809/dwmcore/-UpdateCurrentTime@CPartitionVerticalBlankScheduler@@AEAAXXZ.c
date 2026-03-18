/*
 * XREFs of ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800786A0
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180080EDC (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800C967C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateCurrentTime(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 *v1; // r14
  LARGE_INTEGER *v3; // r12
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  LARGE_INTEGER v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-79h] BYREF

  v1 = (unsigned __int64 *)((char *)this + 35328);
  v3 = (LARGE_INTEGER *)((char *)this + 35312);
  v4 = *((_QWORD *)this + 4414);
  v5 = ((_QWORD)this + 35328) << 32;
  v6 = ((unsigned __int64)this + 35328) | v5;
  if ( (v4 ^ v6) != *((_QWORD *)this + 4416) )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2003304320;
    v9 = *v1 ^ ((unsigned __int64)v1 | v5);
    pExceptionRecord.NumberParameters = 4;
    pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v4);
    pExceptionRecord.ExceptionInformation[1] = (unsigned int)v4;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v9);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    v4 = *((_QWORD *)this + 4414);
  }
  *((_QWORD *)this + 4415) = v4;
  QueryPerformanceCounter(v3);
  v7 = *v3;
  v8 = *((_QWORD *)this + 4415);
  if ( v3->QuadPart < v8 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2003304293;
    pExceptionRecord.ExceptionInformation[0] = v7.HighPart;
    pExceptionRecord.ExceptionInformation[1] = v7.LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v8);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v8;
    pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
    pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
    pExceptionRecord.NumberParameters = 8;
    v10 = 1000 * (v8 - v7.QuadPart) / g_qpcFrequency.QuadPart;
    pExceptionRecord.ExceptionInformation[6] = SHIDWORD(v10);
    pExceptionRecord.ExceptionInformation[7] = (unsigned int)v10;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    v7 = *(LARGE_INTEGER *)((char *)this + 35312);
  }
  *v1 = v7.QuadPart ^ v6;
}
