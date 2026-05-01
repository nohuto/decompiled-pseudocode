/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEA_K33PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180037720
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        enum _PSM_APPLICATION_PRIORITY *a10)
{
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  int v19; // eax
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-30h]

  if ( __PAIR128__((unsigned __int64)a8, (unsigned __int64)a7) == 0 && !a9 && !a10 )
    return 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a7 )
  {
    v12 = *a7;
    v13 = 2;
    HIDWORD(v23) = 2;
    if ( v12 == -1 )
      v12 = 0LL;
    v20 = v12;
  }
  else
  {
    v13 = HIDWORD(v23);
  }
  if ( a8 )
  {
    v14 = *a8;
    v13 |= 4u;
    v15 = *a8 == -1LL;
    HIDWORD(v23) = v13;
    if ( v15 )
      v14 = 0LL;
    v21 = v14;
  }
  if ( a9 )
  {
    v16 = *a9;
    v13 |= 8u;
    HIDWORD(v23) = v13;
    v17 = 0LL;
    if ( v16 != -1 )
      v17 = v16;
    v22 = v17;
  }
  if ( a10 )
  {
    v19 = *(_DWORD *)a10;
    HIDWORD(v23) = v13 | 0x10;
    LODWORD(v23) = v19;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))this
            + 1))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v20);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
