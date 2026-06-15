/*
 * XREFs of ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800581B0
 * Callers:
 *     ?QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800698E0 (-QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceMgr@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800698F0 (-QueryInterface@AudioDeviceMgr@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2550 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::QueryInterface(AudioDeviceMgr *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( !a3 )
    return v3;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_495a7fca_552f_402a_8e78_78bf3ea87971.Data4;
  if ( !v4 )
  {
    *a3 = this;
    v5 = *(_QWORD *)this;
LABEL_6:
    (*(void (__fastcall **)(AudioDeviceMgr *, const struct _GUID *, void **, AudioDeviceMgr *))(v5 + 8))(
      this,
      a2,
      a3,
      this);
    return v3;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6e074d6a_f67a_46cf_9b4c_3f638638afb2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6e074d6a_f67a_46cf_9b4c_3f638638afb2.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6e074d6a_f67a_46cf_9b4c_3f638638afb2.Data4;
  if ( !v7 )
  {
    a2 = (const struct _GUID *)((char *)this + 8);
    *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
    v5 = *(_QWORD *)this;
    goto LABEL_6;
  }
  return CUnknown::QueryInterface((AudioDeviceMgr *)((char *)this + 16), a2, a3);
}
