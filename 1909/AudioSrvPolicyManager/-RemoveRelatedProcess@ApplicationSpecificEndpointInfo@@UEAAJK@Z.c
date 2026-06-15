/*
 * XREFs of ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x18002E2F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18003599F (memmove_0.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned __int64 v4; // rcx
  _DWORD *i; // rbx
  _DWORD *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rdx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v4 = *((_QWORD *)this + 8);
  for ( i = (_DWORD *)*((_QWORD *)this + 7); i != (_DWORD *)v4 && a2 != *i; ++i )
    ;
  if ( i != (_DWORD *)v4 )
  {
    v6 = i + 1;
    v7 = 0LL;
    v8 = (v4 - (unsigned __int64)(i + 1) + 3) >> 2;
    if ( (unsigned __int64)(i + 1) > v4 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( a2 != *v6 )
          *i++ = *v6;
        ++v6;
        ++v7;
      }
      while ( v7 != v8 );
    }
  }
  v9 = (_DWORD *)*((_QWORD *)this + 8);
  if ( i != v9 )
  {
    memmove_0(i, v9, 0LL);
    *((_QWORD *)this + 8) = i;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
