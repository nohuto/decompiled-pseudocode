/*
 * XREFs of ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x1800148F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

struct _GUID *__fastcall CProcess::FindReusableGroupingParam(
        CProcess *this,
        struct _GUID *__return_ptr retstr,
        const struct _GUID *a3)
{
  __int64 v6; // rax
  GUID v7; // xmm0
  _QWORD *v8; // rbx
  int v9; // esi
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  bool v12; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+28h] [rbp-40h]
  GUID v16; // [rsp+30h] [rbp-38h] BYREF

  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a3->Data1;
  if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a3->Data1 )
    v6 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a3->Data4;
  v7 = GUID_00000000_0000_0000_0000_000000000000;
  v8 = (_QWORD *)*((_QWORD *)this + 7);
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = v6 != 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = v8[2];
      v8 = (_QWORD *)*v8;
      if ( v10
        && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10)
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) != 2 )
      {
        v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 120LL))(v10);
        if ( (*v11 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
           || v11[1] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4)
          && (unsigned int)++v9 > 1 )
        {
          v7 = GUID_00000000_0000_0000_0000_000000000000;
          break;
        }
        (*(void (__fastcall **)(__int64, GUID *))(*(_QWORD *)v10 + 104LL))(v10, &v16);
      }
      if ( !v8 )
      {
        v7 = v16;
        break;
      }
    }
  }
  v12 = v15 == 0;
  *retstr = v7;
  if ( !v12 )
    LeaveCriticalSection(lpCriticalSection);
  return retstr;
}
