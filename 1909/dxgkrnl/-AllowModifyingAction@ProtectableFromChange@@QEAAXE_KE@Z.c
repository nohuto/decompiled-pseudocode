/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C00E4308
 * Callers:
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(ProtectableFromChange *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  LOBYTE(a2) = v4;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 24LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( v4 == 0xFF )
  {
    if ( a3 != 255 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    v8 = *((unsigned __int16 *)this + 11);
    LODWORD(v8) = v8 | (1 << v4);
    *((_WORD *)this + 11) = v8;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 5) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v8, v6);
      WdLogEvent5_WdAssertion(v11);
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v4) &= 0xF0u;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 10) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v6);
      WdLogEvent5_WdAssertion(v12);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v4) = a3;
  }
}
