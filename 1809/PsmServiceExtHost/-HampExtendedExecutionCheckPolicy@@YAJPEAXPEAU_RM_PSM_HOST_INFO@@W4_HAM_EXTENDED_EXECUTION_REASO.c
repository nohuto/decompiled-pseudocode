/*
 * XREFs of ?HampExtendedExecutionCheckPolicy@@YAJPEAXPEAU_RM_PSM_HOST_INFO@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009350
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18000D168 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180009550 (-HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     StringCbPrintfW @ 0x180009684 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall HampExtendedExecutionCheckPolicy(
        __int64 a1,
        __int64 a2,
        int a3,
        const unsigned __int16 * near *a4,
        struct _HAM_ACTIVITY_PROPERTIES *a5)
{
  __int64 v6; // rdi
  const wchar_t *v8; // rdx
  __int64 result; // rax
  int v10; // r8d
  int v11; // r8d
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // edx
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  char v21[8]; // [rsp+30h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  wchar_t pszDest[64]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = a3;
  switch ( a3 )
  {
    case 0:
      goto LABEL_25;
    case 1:
      RtlInitUnicodeString(&DestinationString, L"location");
      result = RtlCapabilityCheck(a1, &DestinationString, v21);
      goto LABEL_8;
    case 2:
LABEL_25:
      result = 0LL;
      v21[0] = 1;
      goto LABEL_8;
    case 3:
      v8 = L"extendedExecutionBackgroundAudio";
      goto LABEL_7;
    case 4:
      v8 = L"extendedExecutionUnconstrained";
LABEL_7:
      result = CapabilityCheck(a1, v8, v21);
      goto LABEL_8;
  }
  result = 3221225659LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    if ( v21[0] )
    {
      if ( !a4 || !*(_WORD *)a4 )
        a4 = (&EeDefaultDescription)[v6];
      memset_0(pszDest, 0, sizeof(pszDest));
      StringCbPrintfW(pszDest, 0x80uLL, L"Ee%d_%s", (unsigned int)v6, a4);
      HampActivityPropertiesInitialize(pszDest, (const unsigned __int16 *)(&EeResourcePolicyNames)[v6], a5);
      v10 = *((_DWORD *)a5 + 2);
      *((_DWORD *)a5 + 1) |= 0xBu;
      v11 = v10 | 0x13;
      v12 = *((_DWORD *)a5 + 1);
      v13 = v12;
      *((_DWORD *)a5 + 2) = v11;
      if ( (_DWORD)v6 != 4 )
      {
        v12 |= 0x200u;
        *((_DWORD *)a5 + 1) = v12;
        v13 = v12;
      }
      if ( (v6 & 0xFFFFFFFB) == 0 || (_DWORD)v6 == 2 )
      {
        v14 = v12 | 4;
        v11 |= 4u;
        *((_DWORD *)a5 + 1) = v14;
        v13 = v14;
        *((_DWORD *)a5 + 2) = v11;
        *((_DWORD *)a5 + 92) &= 0xFFFFFFFC;
        *((_QWORD *)a5 + 40) |= 0x20uLL;
      }
      v15 = *(_DWORD *)a5;
      if ( (_DWORD)v6 == 2 )
        v16 = v15 & 0xFFFFF3FF | 0x800;
      else
        v16 = v15 | 0x400;
      *(_DWORD *)a5 = v16;
      v17 = 256;
      v18 = 256;
      if ( (_DWORD)v6 != 2 )
      {
        v17 = 128;
        v18 = 64;
      }
      *(_DWORD *)a5 |= 0x28000u;
      v19 = v18 | v13;
      v20 = *((_DWORD *)&EePdcActivityType + v6);
      *((_DWORD *)a5 + 1) = v19;
      *((_DWORD *)a5 + 2) = v11 | v17;
      *((_DWORD *)a5 + 67) = v20;
      if ( v20 != 5 )
        *((_DWORD *)a5 + 68) = 300;
      return 0LL;
    }
    else
    {
      return 3221225506LL;
    }
  }
  return result;
}
