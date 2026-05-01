/*
 * XREFs of CrmGlobalsRegistrationRemoveAll @ 0x1800702C4
 * Callers:
 *     CrmGlobalsCleanup @ 0x1800701AC (CrmGlobalsCleanup.c)
 * Callees:
 *     CrmGlobalsRegistrationsDeleteRoutine @ 0x1800703D4 (CrmGlobalsRegistrationsDeleteRoutine.c)
 */

__int64 CrmGlobalsRegistrationRemoveAll()
{
  DWORD CurrentThreadId; // eax
  unsigned __int64 v1; // rcx
  int v2; // edi
  _QWORD *v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  bool v7; // zf
  char v8; // dl

  RtlAcquireSRWLockExclusive(&unk_18009BC58);
  CurrentThreadId = GetCurrentThreadId();
  v1 = xmmword_18009BC68;
  dword_18009BC60 = CurrentThreadId;
  if ( (BYTE8(xmmword_18009BC68) & 1) != 0 && (_QWORD)xmmword_18009BC68 )
    v1 = (unsigned __int64)&xmmword_18009BC68 ^ xmmword_18009BC68;
  v2 = BYTE8(xmmword_18009BC68) & 1;
  if ( v1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v1 )
        {
          v3 = (_QWORD *)v1;
          if ( v2 )
            v1 ^= *(_QWORD *)v1;
          else
            v1 = *(_QWORD *)v1;
          *v3 = 0LL;
        }
        v4 = *(_QWORD *)(v1 + 8);
        if ( !v4 )
          break;
        v5 = v1;
        if ( v2 )
          v1 ^= v4;
        else
          v1 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v5 + 8) = 0LL;
      }
      v6 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v2 && v6 )
        v6 ^= v1;
      CrmGlobalsRegistrationsDeleteRoutine(v1, 0LL);
      if ( !v6 )
        break;
      v1 = v6;
    }
  }
  v7 = (BYTE8(xmmword_18009BC68) & 1) == 0;
  xmmword_18009BC68 = 0LL;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( !v7 )
    v8 = 1;
  dword_18009BC60 = 0;
  BYTE8(xmmword_18009BC68) = v8;
  return RtlReleaseSRWLockExclusive(&unk_18009BC58);
}
