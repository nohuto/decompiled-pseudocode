/*
 * XREFs of KiSendThawExecution @ 0x1402AE914
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KeThawExecution @ 0x1402AE2FC (KeThawExecution.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiSetDebuggerOwner @ 0x1402AEAB8 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KiSendThawExecution(char a1)
{
  __int64 result; // rax
  int v3; // ecx
  struct _KPRCB *v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 *v6; // [rsp+30h] [rbp-81h] BYREF
  __int64 v7; // [rsp+38h] [rbp-79h]
  __int64 v8; // [rsp+40h] [rbp-71h]
  _QWORD v9[22]; // [rsp+48h] [rbp-69h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(&v9[1], 0, 0xA0uLL);
  KeGetCurrentPrcb()->IpiFrozen = 0;
  KiSetDebuggerOwner(0LL);
  if ( (KiBugCheckActive & 3) == 0
    || (result = (__int64)KeGetCurrentPrcb(), (unsigned int)KiBugCheckActive >> 4 != *(_DWORD *)(result + 36))
    || KiResumeForReboot )
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= 2 && !PoAllProcIntrDisabled )
    {
      LODWORD(v9[0]) = 1310721;
      memset((char *)v9 + 4, 0, 0xA4uLL);
      LODWORD(v5) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v3 = v5;
        do
        {
          v4 = (struct _KPRCB *)KiProcessorBlock[v3];
          if ( v4 != KeGetCurrentPrcb() )
          {
            if ( (v4->IpiFrozen & 0xF) == 2 )
            {
              v4->IpiFrozen = 3;
              if ( a1 )
                KeAddProcessorAffinityEx(v9, v5);
            }
            else
            {
              v4->IpiFrozen = 0;
            }
          }
          LODWORD(v5) = v5 + 1;
          v3 = v5;
        }
        while ( (unsigned int)v5 < (unsigned int)KeNumberProcessors_0 );
      }
      v7 = v9[1];
      v6 = (unsigned __int16 *)v9;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v5, &v6);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v5] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}
