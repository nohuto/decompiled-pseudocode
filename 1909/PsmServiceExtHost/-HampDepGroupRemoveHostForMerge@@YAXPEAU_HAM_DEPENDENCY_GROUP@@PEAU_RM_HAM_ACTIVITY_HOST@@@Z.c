/*
 * XREFs of ?HampDepGroupRemoveHostForMerge@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800789E8
 * Callers:
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180078BCC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180030510 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupRemoveHostForMerge(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  char *v2; // rbx
  int v5; // edx
  int v6; // eax
  char v7; // [rsp+30h] [rbp-39h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  __int64 v9; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  int *v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 *v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  char *v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]

  v2 = (char *)a2 + 704;
  RtlRbRemoveNode((char *)a1 + 56, (char *)a2 + 704);
  *((_QWORD *)v2 + 2) = -1LL;
  if ( (((unsigned __int64)*((unsigned int *)a2 + 162) >> 26) & 7) == 0 )
    --*((_DWORD *)a1 + 23);
  if ( HampHostIsSuspendWaiter(a2, v5) )
  {
    v6 = *((_DWORD *)a1 + 22) - 1;
    *((_DWORD *)a1 + 22) = v6;
    if ( dword_1800AB2C0 > 5u )
    {
      v8 = v6;
      v13 = &v8;
      v9 = *((_QWORD *)a2 - 4);
      v15 = &v9;
      v17 = &v7;
      v11 = a1;
      v12 = 8LL;
      v14 = 4LL;
      v16 = 8LL;
      v7 = 0;
      v18 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099166, 0LL, 0LL, 6u, &pData);
    }
  }
  HampDepGroupDereference(a1);
  *((_QWORD *)a2 + 86) = 0LL;
}
