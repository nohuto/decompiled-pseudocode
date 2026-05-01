/*
 * XREFs of ?HampSlsAllocateState@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@@Z @ 0x1800447A4
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044700 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSlsAllocateState(struct _HAM_SLEEP_STUDY_CONTEXT *a1)
{
  __int64 result; // rax

  result = TpAllocWork((char *)a1 + 80, HampSlsEventWriteWorker, a1, 0LL);
  if ( (int)result >= 0 )
  {
    result = EtwEventRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, (char *)a1 + 72);
    if ( (int)result > 0 )
      return (unsigned __int16)result | 0xC0070000;
  }
  return result;
}
