/*
 * XREFs of ?SetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800E12D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z @ 0x1800DFF78 (-IsValidProperty@CAudioSessionStore@@AEAA_NPEBUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall CAudioSessionStore::SetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        const struct tagPROPVARIANT *a3)
{
  GUID **v7; // rsi
  GUID **v8; // rdi
  GUID *v9; // rax
  __int64 v10; // rcx
  GUID *v11; // rax
  GUID *v12; // rdi
  HRESULT v13; // ebx
  GUID *v14; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+28h] [rbp-30h]
  PROPVARIANT pvarDest[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  if ( !CAudioSessionStore::IsValidProperty(this, a3) )
    return 2147944030LL;
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = (GUID **)((char *)this + 24);
  v8 = v7;
  v9 = *v7;
  if ( *v7 )
  {
    while ( 1 )
    {
      if ( v9[1].Data1 == a2->pid )
      {
        v10 = *(_QWORD *)&v9->Data1 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)&v9->Data1 == *(_QWORD *)&a2->fmtid.Data1 )
          v10 = *(_QWORD *)v9->Data4 - *(_QWORD *)a2->fmtid.Data4;
        if ( !v10 )
          break;
      }
      v8 = (GUID **)&v9[3];
      v9 = *(GUID **)&v9[3].Data1;
      if ( !v9 )
        goto LABEL_9;
    }
    pvarDest[0] = 0LL;
    pvarDest[1] = 0LL;
    v18 = 0LL;
    v13 = PropVariantCopy(pvarDest, (const PROPVARIANT *)a3);
    if ( !v13 )
    {
      PropVariantClear((PROPVARIANT *)(*v8)[1].Data4);
      v14 = *v8;
      *(GUID *)((char *)v14 + 24) = *(GUID *)pvarDest;
      *(_QWORD *)v14[2].Data4 = v18;
    }
  }
  else
  {
LABEL_9:
    v11 = (GUID *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      *(_QWORD *)v11[1].Data4 = 0LL;
      *(_QWORD *)&v11[2].Data1 = 0LL;
      *(_QWORD *)v11[2].Data4 = 0LL;
      v13 = PropVariantCopy((PROPVARIANT *)v11[1].Data4, (const PROPVARIANT *)a3);
      if ( v13 )
      {
        operator delete(v12, (const struct std::nothrow_t *)0x38);
      }
      else
      {
        while ( *v7 )
          v7 = (GUID **)&(*v7)[3];
        *(_QWORD *)&v12[3].Data1 = 0LL;
        v12[1].Data1 = a2->pid;
        *v12 = a2->fmtid;
        *v7 = v12;
      }
    }
    else
    {
      v13 = -2147024882;
    }
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v13 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::SetValue", 3678, v13);
  return (unsigned int)v13;
}
