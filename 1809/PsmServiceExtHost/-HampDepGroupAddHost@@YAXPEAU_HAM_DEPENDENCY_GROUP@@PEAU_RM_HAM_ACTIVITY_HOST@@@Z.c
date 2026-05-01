/*
 * XREFs of ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C928
 * Callers:
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000B64C (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CCA8 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B07C (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F540 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180038C90 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupAddHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rbx
  int v6; // r14d
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  int v10; // eax
  char v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  int *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  __int64 *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  char *v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
    __fastfail(0xEu);
  v13 = *((_QWORD *)a2 - 4);
  *((_QWORD *)a2 + 83) = a1;
  HampDepGroupAcquireLockExclusive(a1);
  v5 = *((_QWORD *)a1 + 7);
  if ( (*((_BYTE *)a1 + 64) & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)a1 + 56;
  LOBYTE(v4) = 0;
  v6 = *((_BYTE *)a1 + 64) & 1;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)HampDepGroupCompareHostForRbTree(&v13, (struct _RTL_BALANCED_NODE *)v5) < 0 )
      {
        v7 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_18;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_18:
          LOBYTE(v4) = 0;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_12;
          v7 ^= v5;
        }
        if ( !v7 )
        {
LABEL_12:
          LOBYTE(v4) = 1;
          break;
        }
      }
      v5 = v7;
    }
  }
  RtlRbInsertNodeEx((char *)a1 + 56, v5, v4, (char *)a2 + 680);
  if ( (((unsigned __int64)*((unsigned int *)a2 + 158) >> 26) & 7) == 0 && (*((_DWORD *)a1 + 23))++ == -1 )
    __int2c();
  if ( HampHostIsSuspendWaiter(a2, v8) )
  {
    v10 = *((_DWORD *)a1 + 22) + 1;
    *((_DWORD *)a1 + 22) = v10;
    if ( hProvider > 5u )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v12 = v10;
      v19 = &v12;
      v14 = *((_QWORD *)a2 - 4);
      v22 = &v14;
      v25 = &v11;
      v16 = a1;
      v17 = 8;
      v20 = 4;
      v23 = 8;
      v11 = 1;
      v26 = 1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B591, 0LL, 0LL, 6u, &pData);
    }
  }
  HampDepGroupReleaseLockExclusive(a1);
}
