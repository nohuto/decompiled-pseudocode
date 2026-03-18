/*
 * XREFs of ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00E6418
 * Callers:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C00055DC (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 */

void __fastcall ProtectableFromChange::DisallowModifyingAction(ProtectableFromChange *this, __int64 a2)
{
  unsigned __int8 v2; // si
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = this;
  if ( v2 == 0xFF )
  {
    *((_WORD *)this + 11) = 0;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
    memset(*((void **)this + 11), 0, 8LL * *((_QWORD *)this + 10));
  }
  else
  {
    v6 = *((unsigned __int16 *)this + 11);
    LODWORD(v6) = v6 & ~(1 << v2);
    *((_WORD *)this + 11) = v6;
    if ( (unsigned __int64)v2 >= *((_QWORD *)this + 5) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v8);
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v2) &= 0xF0u;
    if ( (unsigned __int64)v2 >= *((_QWORD *)this + 10) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v9);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v2) = 0LL;
  }
}
