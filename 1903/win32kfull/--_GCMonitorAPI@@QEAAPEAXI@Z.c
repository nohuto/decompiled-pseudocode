/*
 * XREFs of ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C013FD88
 * Callers:
 *     DDCCICleanUpWrap @ 0x1C013FD60 (DDCCICleanUpWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall CMonitorAPI::`scalar deleting destructor'(char *P)
{
  void *v2; // rdx
  __int64 i; // rdi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  OPM::CMutex::~CMutex((OPM::CMutex *)(P + 32));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 5); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)P + 1) + 8 * i);
    if ( v5 )
    {
      (**v5)(v5, 1LL);
      *(_QWORD *)(*((_QWORD *)P + 1) + 8 * i) = 0LL;
    }
  }
  OPM::OPMFreeMemory(*((OPM **)P + 1), v2);
  OPM::CMutex::~CMutex((OPM::CMutex *)P);
  if ( P )
    ExFreePoolWithTag(P, 0x63326947u);
  return P;
}
