/*
 * XREFs of LdrpResolveProcedureAddress @ 0x18000922C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800D0B9C (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpLoadForwardedDll @ 0x180022F00 (LdrpLoadForwardedDll.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     RtlGuardCheckImageBase @ 0x180078ED4 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x180079F3C (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(_QWORD *a1, const char *a2, int a3, char a4, unsigned __int64 *a5)
{
  WCHAR *v5; // rbx
  int v6; // r13d
  const char *v7; // r12
  PVOID v8; // rdi
  unsigned int v10; // r14d
  int ProcedureAddress; // eax
  int ForwardedDll; // ebx
  void *v13; // rdi
  int v14; // eax
  unsigned int v16; // eax
  int v17; // [rsp+30h] [rbp-B1h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-A9h] BYREF
  const char *v19; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-99h]
  _OWORD v21[2]; // [rsp+50h] [rbp-91h] BYREF
  PWSTR Path[16]; // [rsp+70h] [rbp-71h] BYREF

  v5 = (WCHAR *)a1[10];
  v6 = a3;
  v7 = a2;
  v20 = a1;
  v8 = a1;
  v19 = a2;
  v17 = a3;
  BaseAddress = a1;
  v10 = 0;
  memset(Path, 0, sizeof(Path));
  LODWORD(Path[3]) = 0;
  Path[4] = v5;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*((_QWORD *)v8 + 6), v7, v6, a5);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v16 = v10++;
    if ( v16 >= 0x20 || (a4 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_10;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a5, v21, &v19, &v17);
    if ( ForwardedDll < 0 )
      goto LABEL_10;
    LODWORD(Path[3]) = *((_DWORD *)v8 + 68);
    ForwardedDll = LdrpLoadForwardedDll(
                     (unsigned int)v21,
                     (unsigned int)Path,
                     (_DWORD)v20,
                     (_DWORD)v8,
                     2,
                     (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      goto LABEL_10;
    v8 = BaseAddress;
    LdrpDereferenceModule(BaseAddress);
    v7 = v19;
    v6 = v17;
  }
  if ( (a4 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      RtlGuardCheckImageBase(*((PVOID *)v8 + 23));
    }
    else
    {
      v13 = (void *)*((_QWORD *)v8 + 6);
      LOBYTE(v14) = LdrControlFlowGuardEnforced();
      if ( v14 )
      {
        if ( (unsigned __int64)v13 < *((_QWORD *)&xmmword_180178500 + 1)
          || (unsigned __int64)v13 >= *((_QWORD *)&xmmword_180178500 + 1)
                                    + (unsigned __int64)(unsigned int)qword_180178510 )
        {
          RtlpxLookupFunctionTable(v13, (__int64)v21);
        }
        else
        {
          v21[0] = xmmword_180178500;
        }
        if ( *((void **)&v21[0] + 1) != v13 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_10:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( ForwardedDll < 0 )
    *a5 = 0LL;
  return (unsigned int)ForwardedDll;
}
