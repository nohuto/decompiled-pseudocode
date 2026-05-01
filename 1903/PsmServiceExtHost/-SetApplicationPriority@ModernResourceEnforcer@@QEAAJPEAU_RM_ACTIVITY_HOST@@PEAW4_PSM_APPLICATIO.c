/*
 * XREFs of ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180038DA0
 * Callers:
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180038C44 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationPriority(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        enum _PSM_APPLICATION_PRIORITY *a3)
{
  _BYTE v7[24]; // [rsp+40h] [rbp-38h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  memset_0(v7, 0, 0x20uLL);
  if ( a3 )
  {
    v8 = *(_DWORD *)a3;
    v9 = 16;
  }
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _BYTE *))this + 1))(
           (char *)a2 + 552,
           *((unsigned int *)a2 + 155),
           (char *)a2 + 88,
           6LL,
           -1LL,
           v7);
}
