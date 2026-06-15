/*
 * XREFs of ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180031470
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18003807B (memmove_0.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rdx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v4 = (_DWORD *)*((_QWORD *)this + 7);
  v5 = *((_QWORD *)this + 8);
  while ( v4 != (_DWORD *)v5 && a2 != *v4 )
    ++v4;
  if ( v4 != (_DWORD *)v5 )
  {
    v6 = v4 + 1;
    v7 = 0LL;
    v8 = (v5 - (unsigned __int64)(v4 + 1) + 3) >> 2;
    if ( (unsigned __int64)(v4 + 1) > v5 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( a2 != *v6 )
          *v4++ = *v6;
        ++v6;
        ++v7;
      }
      while ( v7 != v8 );
    }
  }
  v9 = (_DWORD *)*((_QWORD *)this + 8);
  if ( v4 != v9 )
  {
    memmove_0(v4, v9, 0LL);
    *((_QWORD *)this + 8) = v4;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
