/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEA_K33PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x1800366B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rax
  int v14; // edx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  int v19; // eax
  _QWORD v21[3]; // [rsp+48h] [rbp-70h] BYREF
  int v22; // [rsp+60h] [rbp-58h]
  int v23; // [rsp+64h] [rbp-54h]

  if ( __PAIR128__((unsigned __int64)a8, (unsigned __int64)a7) == 0 && !a9 && !a10 )
    return 0LL;
  memset_0(v21, 0, 0x20uLL);
  if ( a7 )
  {
    v13 = *a7;
    v14 = 2;
    v15 = *a7 == -1LL;
    v23 = 2;
    if ( v15 )
      v13 = 0LL;
    v21[0] = v13;
  }
  else
  {
    v14 = v23;
  }
  if ( a8 )
  {
    v16 = *a8;
    v14 |= 4u;
    v15 = *a8 == -1LL;
    v23 = v14;
    if ( v15 )
      v16 = 0LL;
    v21[1] = v16;
  }
  if ( a9 )
  {
    v14 |= 8u;
    v23 = v14;
    v17 = 0LL;
    if ( *a9 != -1LL )
      v17 = *a9;
    v21[2] = v17;
  }
  if ( a10 )
  {
    v19 = *(_DWORD *)a10;
    v23 = v14 | 0x10;
    v22 = v19;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, _QWORD *))this
            + 1))(
             a3,
             a4,
             a2,
             a5,
             a6,
             v21);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
