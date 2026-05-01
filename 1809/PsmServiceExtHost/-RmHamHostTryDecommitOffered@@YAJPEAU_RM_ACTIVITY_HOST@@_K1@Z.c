/*
 * XREFs of ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x18003A8DC
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003A954 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18005B37C (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

__int64 __fastcall RmHamHostTryDecommitOffered(struct _RM_ACTIVITY_HOST *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]

  result = RmpActivityHostQueryOfferedMemory(a1, &v14);
  if ( (int)result >= 0 )
  {
    v7 = v14;
    if ( v14 )
    {
      v8 = 0;
      v9 = ((unsigned __int64)(95 * a3) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v10 = 20971520LL;
      v11 = v9 + ((unsigned __int64)(95 * a3 - v9) >> 1);
      v12 = *((_DWORD *)a1 + 297);
      v13 = a2 - (v11 >> 6);
      if ( v13 > 0x1400000 )
        v10 = v13;
      LOBYTE(v8) = v10 >= v14;
      v16 = 0LL;
      v15[1] = 0LL;
      if ( v8 )
        v7 = -1LL;
      v15[0] = v7;
      LODWORD(v16) = v16 & 0xFFFFFFF8 | (4 * v8) | (v12 >> 4) & 1;
      result = RmpActivityHostDecommitOfferedMemory(a1, (struct _RM_OFFERED_DECOMMIT_INFO *)v15);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225517LL;
    }
  }
  return result;
}
