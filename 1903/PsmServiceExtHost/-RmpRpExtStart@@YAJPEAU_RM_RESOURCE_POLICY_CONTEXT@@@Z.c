/*
 * XREFs of ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x1800432A0
 * Callers:
 *     ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180042EAC (-RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     IsRmRpsInitializePresent @ 0x1800485C8 (IsRmRpsInitializePresent.c)
 */

__int64 __fastcall RmpRpExtStart(struct _RM_RESOURCE_POLICY_CONTEXT *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  int *v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]

  v2 = 0;
  if ( (unsigned __int8)IsRmRpsInitializePresent() )
  {
    v6 = RmRpsInitialize(&v7);
    if ( v6 < 0 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v10 = 4LL;
        v9 = &v6;
        TlgWrite(v5, &unk_180092892, 0LL, 0LL, 3u, &pData);
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      v3 = v7;
      *((_DWORD *)a1 + 2) |= 1u;
      *(_QWORD *)a1 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
