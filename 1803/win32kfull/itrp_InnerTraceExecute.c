/*
 * XREFs of itrp_InnerTraceExecute @ 0x1C02CA218
 * Callers:
 *     InvokeInterpreter @ 0x1C02C52B4 (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerTraceExecute(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rdx

  qword_1C03271D8 = a2;
  qword_1C03271E0 = a1;
  v3 = (char *)a1;
  if ( a1 < a2 )
  {
    do
    {
      if ( !qword_1C0327188 )
        break;
      qword_1C0327170 = (__int64)v3;
      byte_1C03271A4 = *v3;
      qword_1C0327188(&LocalGS, a2);
      if ( !qword_1C0327188 )
        break;
      v4 = (unsigned __int8)*v3;
      if ( !--dword_1C03271F0 )
      {
        dword_1C03271D0 = 4366;
        return;
      }
      v3 = (char *)((__int64 (__fastcall *)(char *))function[v4])(v3 + 1);
    }
    while ( (unsigned __int64)v3 < a2 );
  }
}
