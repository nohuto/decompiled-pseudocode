/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800114FC
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180011490 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        _QWORD **a2)
{
  _QWORD **v2; // r15
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r12d
  __int64 i; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  PRTL_CRITICAL_SECTION_DEBUG v12; // rax
  char *v13; // rdx
  char *v14; // rcx
  ATL::CAtlException *v16; // [rsp+28h] [rbp-30h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
LABEL_2:
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v6 = (unsigned int)i;
      if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
        break;
      v7 = *(_QWORD *)&v3[1].LockCount;
      if ( (unsigned int)i >= v7 )
        ATL::AtlThrowImpl(-2147024809);
      DebugInfo = v3[1].DebugInfo;
      v9 = (_QWORD *)*((_QWORD *)&DebugInfo->Type + i);
      if ( v9 == *v2 )
      {
        v10 = i + 1;
        if ( i + 1 < (unsigned __int64)(unsigned int)i || v10 > v7 )
          ATL::AtlThrowImpl(-2147024809);
        v11 = v7 - v10;
        if ( v9 )
          (*(void (__fastcall **)(_QWORD))(*v9 + 16LL))(*((_QWORD *)&DebugInfo->Type + i));
        if ( v11 )
        {
          v12 = v3[1].DebugInfo;
          v13 = (char *)v12 + 8 * v10;
          v14 = (char *)v12 + 8 * v6;
          if ( 8 * v11 )
          {
            if ( !v14 || !v13 )
            {
              *(_DWORD *)_o__errno(v14) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove_0(v14, v13, 8 * v11);
          }
        }
        --*(_QWORD *)&v3[1].LockCount;
        goto LABEL_2;
      }
    }
  }
  catch ( ATL::CAtlException *v16 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v16;
  }
  LeaveCriticalSection(v3);
  if ( *v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**v2 + 16LL))(*v2, **v2);
  return v4;
}
