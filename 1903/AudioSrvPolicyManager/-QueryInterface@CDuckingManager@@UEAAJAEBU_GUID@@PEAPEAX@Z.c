/*
 * XREFs of ?QueryInterface@CDuckingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009C60
 * Callers:
 *     ?QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D080 (-QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D0D0 (-QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::QueryInterface(CDuckingManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
  {
    v4 = (unsigned __int64)this + 16;
LABEL_9:
    *a3 = (void *)(v4 & -(__int64)(this != 0LL));
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6b8591c8_b7d6_455d_8003_822bfd39c679.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_6b8591c8_b7d6_455d_8003_822bfd39c679.Data4 )
  {
    v4 = (unsigned __int64)this + 24;
    goto LABEL_9;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    *a3 = this;
    (*(void (__fastcall **)(CDuckingManager *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  return v3;
}
