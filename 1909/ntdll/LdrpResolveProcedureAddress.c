/*
 * XREFs of LdrpResolveProcedureAddress @ 0x18001B784
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800CF46C (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrpLoadForwardedDll @ 0x180021EC0 (LdrpLoadForwardedDll.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     LdrpParseForwarderDescription @ 0x18006F390 (LdrpParseForwarderDescription.c)
 *     RtlGuardCheckImageBase @ 0x18007358C (RtlGuardCheckImageBase.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(_QWORD *a1, __int64 a2, int a3, char a4, _QWORD *a5)
{
  WCHAR *v5; // rbx
  PVOID v6; // rdi
  unsigned int v7; // r14d
  int ProcedureAddress; // eax
  int ForwardedDll; // ebx
  void *v11; // rdi
  int v12; // eax
  unsigned int v14; // eax
  int v15; // [rsp+30h] [rbp-B1h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v17; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-99h]
  _OWORD v19[2]; // [rsp+50h] [rbp-91h] BYREF
  PWSTR Path[16]; // [rsp+70h] [rbp-71h] BYREF

  v5 = (WCHAR *)a1[10];
  v18 = a1;
  v6 = a1;
  v17 = a2;
  v7 = 0;
  v15 = a3;
  BaseAddress = a1;
  memset(Path, 0, sizeof(Path));
  Path[4] = v5;
  while ( 1 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*((_QWORD *)v6 + 6));
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v14 = v7++;
    if ( v14 >= 0x20 || (a4 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_10;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a5, v19, &v17, &v15);
    if ( ForwardedDll < 0 )
      goto LABEL_10;
    LODWORD(Path[3]) = *((_DWORD *)v6 + 68);
    ForwardedDll = LdrpLoadForwardedDll(
                     (unsigned int)v19,
                     (unsigned int)Path,
                     (_DWORD)v18,
                     (_DWORD)v6,
                     2,
                     (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      goto LABEL_10;
    v6 = BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
  }
  if ( (a4 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a4 & 2) != 0 )
    {
      RtlGuardCheckImageBase(*((PVOID *)v6 + 23));
    }
    else
    {
      v11 = (void *)*((_QWORD *)v6 + 6);
      LOBYTE(v12) = LdrControlFlowGuardEnforced();
      if ( v12 )
      {
        if ( (unsigned __int64)v11 < *((_QWORD *)&xmmword_18017A500 + 1)
          || (unsigned __int64)v11 >= *((_QWORD *)&xmmword_18017A500 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18017A510 )
        {
          RtlpxLookupFunctionTable(v11);
        }
        else
        {
          v19[0] = xmmword_18017A500;
        }
        if ( *((void **)&v19[0] + 1) != v11 )
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
