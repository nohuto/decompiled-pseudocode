/*
 * XREFs of ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180010A90
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001CA2C (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::IsVoipCallCapableAndCallIsActive(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // edi
  _QWORD *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v10; // [rsp+38h] [rbp-20h] BYREF
  char v11; // [rsp+40h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v10 = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&v10);
  lpCriticalSection = v2;
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  v5 = 1;
  while ( v4 )
  {
    v6 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v6 + 448) && *(_DWORD *)(v6 + 460) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v3 || (*((_BYTE *)this + 208) & 0x10) == 0 )
    v5 = 0;
  if ( v11 )
    LeaveCriticalSection(v10);
  return v5;
}
