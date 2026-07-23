/*
 * XREFs of KiSendThawExecution @ 0x140297C64
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KeThawExecution @ 0x14029766C (KeThawExecution.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiSetDebuggerOwner @ 0x140297DF0 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KiSendThawExecution(char a1)
{
  __int64 result; // rax
  int v3; // ecx
  struct _KPRCB *v4; // rcx
  __int64 v5; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 *v6[2]; // [rsp+30h] [rbp-81h] BYREF
  __int16 v7; // [rsp+40h] [rbp-71h]
  _QWORD v8[22]; // [rsp+48h] [rbp-69h] BYREF

  KeGetCurrentPrcb()->IpiFrozen = 0;
  KiSetDebuggerOwner(0LL);
  if ( (KiBugCheckActive & 3) == 0
    || (result = (__int64)KeGetCurrentPrcb(), (unsigned int)KiBugCheckActive >> 4 != *(_DWORD *)(result + 36))
    || KiResumeForReboot )
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= 2 && !PoAllProcIntrDisabled )
    {
      LODWORD(v8[0]) = 1310721;
      memset((char *)v8 + 4, 0, 0xA4uLL);
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
                KeAddProcessorAffinityEx(v8, v5);
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
      v6[1] = (unsigned __int16 *)v8[1];
      v6[0] = (unsigned __int16 *)v8;
      v7 = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v5, v6);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v5] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}
