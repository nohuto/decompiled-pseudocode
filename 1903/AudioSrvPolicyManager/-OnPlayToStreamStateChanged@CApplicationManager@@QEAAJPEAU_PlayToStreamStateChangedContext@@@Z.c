/*
 * XREFs of ?OnPlayToStreamStateChanged@CApplicationManager@@QEAAJPEAU_PlayToStreamStateChangedContext@@@Z @ 0x18001CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001CCAC (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnPlayToStreamStateChanged(
        CApplicationManager *this,
        struct _PlayToStreamStateChangedContext *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  struct CApplication *v6; // rbp
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+30h] [rbp-28h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *(_QWORD *)a2;
  v6 = *(struct CApplication **)(*(_QWORD *)a2 + 256LL);
  LODWORD(a2) = *((_DWORD *)a2 + 2);
  lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 32);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)a2 )
    --*(_DWORD *)(v5 + 520);
  else
    ++*(_DWORD *)(v5 + 520);
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 )
    CApplicationManager::UpdateActiveMediaAppForSession(this, v6, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
