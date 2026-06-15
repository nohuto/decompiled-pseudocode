/*
 * XREFs of ?QueryInterface@CPlaybackManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023580
 * Callers:
 *     ?QueryInterface@CPlaybackManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023CA0 (-QueryInterface@CPlaybackManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::QueryInterface(CPlaybackManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = a3 == 0LL ? 0x80004003 : 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
    {
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      v4 = *(_QWORD *)this;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      *a3 = this;
      v4 = *(_QWORD *)this;
    }
    (*(void (__fastcall **)(CPlaybackManager *))(v4 + 8))(this);
  }
  return v3;
}
