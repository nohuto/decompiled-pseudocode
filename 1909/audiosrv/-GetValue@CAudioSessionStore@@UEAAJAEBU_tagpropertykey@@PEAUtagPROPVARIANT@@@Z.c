/*
 * XREFs of ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18004E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioSessionStore::GetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  v11 = 0;
  *(_OWORD *)a3 = 0uLL;
  a3[2] = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 16) == a2->pid )
      {
        v9 = *(_QWORD *)v7 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v7 == *(_QWORD *)&a2->fmtid.Data1 )
          v9 = *(_QWORD *)(v7 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v9 )
          break;
      }
      v7 = *(_QWORD *)(v7 + 48);
      if ( !v7 )
        goto LABEL_3;
    }
    v6 = PropVariantCopy(a3, (const PROPVARIANT *)(v7 + 24));
    if ( v6 >= 0 )
      v6 = 0;
  }
LABEL_3:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::GetValue", 3567, v6);
  return (unsigned int)v6;
}
